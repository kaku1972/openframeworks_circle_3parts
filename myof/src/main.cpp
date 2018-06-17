#include "ofMain.h"
#include "ofApp1.h"
#include "ofApp2.h"
#include "ofApp3.h"


//========================================================================
int main( ){
    
    ofxXmlSettings settings;
    settings.loadFile("settings.xml");
    int width = settings.getValue("settings:screenwidth", 0);
    int height = settings.getValue("settings:screenheight", 0);
	ofSetupOpenGL(width, height, OF_WINDOW);			// <-------- setup the GL context

    int tag_order = settings.getNumTags("settings:order");
    settings.pushTag("settings", 0);
    int tag_orders = settings.getNumTags("order");
    int list_order[tag_orders];
    for (int i=0; i<tag_orders; i++) {
        list_order[i] = settings.getValue("order:num", 0, i);
//        printf("%d", list_order[i]);
    }
    
    for (int order_i=0; order_i<tag_orders; order_i++) {
        if (list_order[order_i]==1) {
//          1st product
            ofRunApp(new ofApp1());
            printf("run1");
        }
        else if(list_order[order_i]==2){
            ofRunApp(new ofApp2());
            printf("run2");
        }
        else if(list_order[order_i]==3){
            ofRunApp(new ofApp3());
            printf("run3");
        }
        else{;}
    }

}
