#include "ofApp2.h"
#include "ofxGui.h"
#include "ofxXmlSettings.h"


//--------------------------------------------------------------
void ofApp2::setup(){
    ofEnableAlphaBlending();
    ofSetCircleResolution(64);
    ofBackground(0, 0, 0);

    settings.loadFile("settings.xml");
    framerate = settings.getValue("settings:framerate", 0);
    timeout = settings.getValue("settings:time", 0);
    timeout = timeout*5;
    ofSetFrameRate(framerate);
    
    
    positionX = 0;
    positionY = 0;
    rad = 0;
    
    // colorの初期値、最小値、最大値
    ofColor initColor = ofColor(0, 127, 255, 100);
    ofColor minColor = ofColor(0,0,0,0);
    ofColor maxColor = ofColor(255,255,255,255);
    
    // positionの初期値、最小値、最大値
    ofVec2f initPos = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
    ofVec2f minPos = ofVec2f(0,0);
    ofVec2f maxPos = ofVec2f(ofGetWidth(),ofGetHeight());
    
    gui.setup();
    gui.add(radius.setup("radius", 200, 0, 400));
    gui.add(color.setup("color", initColor, minColor, maxColor));
    gui.add(position.setup("position", initPos, minPos, maxPos));
    
}

//--------------------------------------------------------------
void ofApp2::update(){
    positionX = positionX + 10;
    positionY = positionY + 10;
    count += 0.083;

}

//--------------------------------------------------------------
void ofApp2::draw(){
//    ofSetColor(225, 225, 225, 100);
//    ofDrawCircle(960, 540, rad);
    
    //    for(int i = 0; i <= 100; i++){
    //        int num_x = rand() % 700;
    //        int num_y = rand() % 700;
    //        ofCircle(positionX+num_x, positionY+num_y, 20);
    //    }
    
    this->cam.begin();
    
    float radius_span = 15;
    for (float radius = radius_span; radius < ofGetWidth() / 2; radius += radius_span) {
        
        ofColor color;
        color.setHsb(ofMap(radius, radius_span, ofGetWidth() / 2, 0, 255), 255, 255);
        ofSetColor(color);
        
        float noise_value = ofNoise(radius * 0.0005 - ofGetFrameNum() * 0.0005) * 360;
        float x = radius * cos(noise_value);
        float y = radius * sin(noise_value);
        
        ofDrawCircle(x, y, 15);
    }
    
    
    this->cam.end();
    
    if (count>=timeout) {
        ofExit();
    }

}

//--------------------------------------------------------------
void ofApp2::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp2::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp2::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp2::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp2::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp2::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp2::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp2::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp2::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp2::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp2::dragEvent(ofDragInfo dragInfo){
    
}

