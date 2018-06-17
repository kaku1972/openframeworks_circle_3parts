//
//  SceneB.cpp
//  mySketch01
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#include "SceneB.h"

void SceneB::setup(){
    ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);    
}
void SceneB::update(){
//    num_x = rand() % 1820;
//    num_y = rand() % 980;

}
void SceneB::draw(){
//    ofBackgroundHex(0xF6F6F6);
//    ofSetHexColor(0x000000);
//    ofDrawBitmapString("SceneB",20,20);
//    
////    ofSetColor(225, 225, 225, 100);
////    ofDrawCircle(960, 540, rad);
////    ofSetColor(217, 202, 0);
////    ofCircle(ofGetWidth()/2, ofGetHeight()/2, 100);
//
//    
////    for (int i = 0; i<100; i++) {
//    float radius_span = 15;
//    for (float radius = radius_span; radius < ofGetWidth() / 2; radius += radius_span) {
////        ofColor color;
////        color.setHsb(ofMap(radius, radius_span, ofGetWidth() / 2, 0, 255), 255, 255);
////        ofSetColor(color);
//        float noise_value = ofNoise(radius * 0.0005 - ofGetFrameNum() * 0.0005) * 360;
//        float x = radius * cos(noise_value) + ofGetWidth()/2;
//        float y = radius * sin(noise_value) + ofGetWidth()/2;
////        ofDrawCircle(x, y, 15);
//        ofSetColor(217, 202, 0);
//        ofCircle(x, y, 80);
//        ofSetColor(0xF6F6F6);
//        ofCircle(x+20, y+20, 10);
//        ofCircle(x-20, y-20, 10);
//        ofCircle(x-20, y+20, 10);
//        ofCircle(x+20, y-20, 10);
//    }

    ofBackgroundHex(0x000000);
    ofSetHexColor(0xFFFFFF);
    ofDrawBitmapString("SceneB",20,20);
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    float radius = 150;
    ofColor body_color_C;
    for (int i = 0; i < 20; i++) {
        ofRotate(ofGetFrameNum()/2);
        body_color_C.setHsb(216 - i * 16, 255, 255);
        ofSetColor(body_color_C);
        float x = radius * cos(0 * DEG_TO_RAD);
        float y = radius * sin(0 * DEG_TO_RAD);
        ofDrawCircle(ofVec2f(x, y), 30);
        ofDrawLine(ofVec2f(0, 0), ofVec2f(x, y));
        
        radius += 10;
    }


}
