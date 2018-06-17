#include "SampleSceneManager.h"
#include "ofApp.h"
#include "ofxXmlSettings.h"

SampleSceneManager manager;
int currentScene = 0; //現在のシーン番号

void ofApp::setup(){
    // フレームレイト設定
    ofxXmlSettings settings;
    settings.loadFile("settings.xml");
    framerate = settings.getValue("settings:framerate", 60);
    ofSetFrameRate(framerate);

    // 1シーンあたりのカウント変数
    count = 0;
    timeout_request = settings.getValue("settings:time", 0);
    timeout = timeout * timeout_request;
//    printf("%.02f\n", timeout_request);

    // 総シーン数設定
    int tag_order = settings.getNumTags("settings:order");
    settings.pushTag("settings", 0);
    Scenes = settings.getNumTags("order");
    for (int i=0; i<Scenes; i++) {
        list_order.push_back(settings.getValue("order:num", 0, i));
//        list_order[i] = settings.getValue("order:num", 0, i);
    }
    currentScene = list_order[0];

    manager.setup();

}

void ofApp::update(){
    manager.update();
    count+=0.12;
}

void ofApp::draw(){
    // シーン切り替え
    if (count>=timeout) {
        printf("%.02f\n", timeout);
        printf("%.02f\n", count);
        printf("%d", Scenes);
        count = 0;
        Scenes--;
        order_index++;
        currentScene = list_order[order_index];
        keyReleased(' ', currentScene);
        if (Scenes==0) {
            ofExit();
        }
    }
    manager.draw();

}

void ofApp::keyReleased(int key, int Scene){
    if(key == ' '){
        if(!manager.nextElement()){
            //Create new manager if has no more elements
            manager = *new SampleSceneManager();
            manager.setup();
        }
    }
    
    manager.keyReleased(key);
}

void ofApp::mousePressed(int x, int y, int button){
    manager.mouseReleased(x, y, button);
}
