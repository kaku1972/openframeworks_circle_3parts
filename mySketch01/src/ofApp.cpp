#include "ofApp.h"
#include "ofxXmlSettings.h"


//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableAlphaBlending();
    ofSetCircleResolution(64);

    // フレームレイト設定
    ofxXmlSettings settings;
    settings.loadFile("settings.xml");
    framerate = settings.getValue("settings:framerate", 60);
    ofSetFrameRate(framerate);

    // 1シーンあたりのカウント変数
    count = 0;
    timeout_request = settings.getValue("settings:time", 0);
    timeout = timeout * timeout_request;
    printf("%.02f\n", timeout_request);

    // 総シーン数設定
    int tag_order = settings.getNumTags("settings:order");
    settings.pushTag("settings", 0);
    Scenes = settings.getNumTags("order");
    int list_order[Scenes];
    for (int i=0; i<Scenes; i++) {
        list_order[i] = settings.getValue("order:num", 0, i);
        if (list_order[i]==1) {
            //シーンを新規の生成し、順に配列に追加
            baseScene * sa = new SceneA();
            scenes.push_back(sa);
        }else if (list_order[i]==2) {
            baseScene * sb = new SceneB();
            scenes.push_back(sb);
        }else if (list_order[i]==3) {
            baseScene * sc = new SceneC();
            scenes.push_back(sc);
        }else{;}
    }
//    baseScene * sc = new SceneC();
//    scenes.push_back(sc);
//    baseScene * sb = new SceneB();
//    scenes.push_back(sb);
//    baseScene * sa = new SceneA();
//    scenes.push_back(sa);

    //現在のシーンを0に
    currentScene=0;
    // 最初からスタート
    scenes[currentScene]->setup();

}

//--------------------------------------------------------------
void ofApp::update(){
    //現在表示しているシーンを更新
    scenes[currentScene]->update();
    count+=0.083;
}

//--------------------------------------------------------------
void ofApp::draw(){
    //現在表示しているシーンを描画
    scenes[currentScene]->draw();
    
    // シーン切り替え
    if (count>=timeout) {
        printf("%.02f\n", timeout);
        printf("%.02f\n", count);
        printf("%d", Scenes);
        keyPressed(' ');
        count = 0;
        Scenes--;
        exit();
        if (Scenes==0) {
            ofExit();
        }
    }
    
}

void ofApp::exit(){
    scenes[currentScene]->setup();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case ' ':
            scenes[currentScene]->stop();
            currentScene++;
            currentScene %= scenes.size();
            scenes[currentScene]->start();
            scenes[currentScene]->setup();
            break;
            
        case 'f':
            ofToggleFullscreen();
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    scenes[currentScene]->keyReleased(key);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    scenes[currentScene]->mouseMoved(x,y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    scenes[currentScene]->mouseDragged(x,y,button);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    scenes[currentScene]->mousePressed(x,y,button);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    scenes[currentScene]->mouseReleased(x,y,button);
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    scenes[currentScene]->windowResized(w,h);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
