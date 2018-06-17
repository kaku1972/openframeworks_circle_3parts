//
//  SceneA.cpp
//  mySketch01
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#include "SceneA.h"

void SceneA::setup(){
    ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);
}
void SceneA::update(){
}
void SceneA::draw(){
    ofBackgroundHex(0xFFFFFF);
    ofSetHexColor(0x000000);
    ofDrawBitmapString("SceneA",20,20);
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    float radius = 150;
    ofColor body_color_A;
    for (int i = 0; i < 20; i++) {
        ofRotate(ofGetFrameNum()/2);

        body_color_A.setHsb(216 - i * 16, 255, 255);
        ofSetColor(body_color_A);

        float x = radius * cos(0 * DEG_TO_RAD);
        float y = radius * sin(0 * DEG_TO_RAD);

        ofDrawCircle(ofVec2f(x, y), 30);
        ofDrawLine(ofVec2f(0, 0), ofVec2f(x, y));

        radius += 10;
    }
    
//    this->cam.begin();
//    float radius_span = 15;
//    for (float radius = radius_span; radius < ofGetWidth() / 2; radius += radius_span) {
//        ofColor color;
//        color.setHsb(ofMap(radius, radius_span, ofGetWidth() / 2, 0, 255), 255, 255);
//        ofSetColor(color);
//        float noise_value = ofNoise(radius * 0.0005 - ofGetFrameNum() * 0.0005) * 360;
//        float x = radius * cos(noise_value);
//        float y = radius * sin(noise_value);
//        ofDrawCircle(x, y, 15);
//    }
//    this->cam.end();
}
