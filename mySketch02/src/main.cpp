#include "ofMain.h"
#include "ofApp.h"
#include "ofxXmlSettings.h"

//========================================================================
int main( ){
    ofxXmlSettings settings;
    settings.loadFile("settings.xml");
    int width = settings.getValue("settings:screenwidth", 1920);
    int height = settings.getValue("settings:screenheight", 1080);
    ofSetupOpenGL(width, height, OF_WINDOW);            // <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
