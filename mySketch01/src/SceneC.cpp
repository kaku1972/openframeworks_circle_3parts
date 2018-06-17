//
//  SceneC.cpp
//  mySketch01
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#include "SceneC.h"

void SceneC::setup(){
    ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);
}
void SceneC::update(){
}
void SceneC::draw(){
//    ofColor lavender(154, 138, 159); // ラベンダー
//    ofColor pastelblue(190, 225, 225); // パステルブルー
//    ofColor green(0, 128, 0); // グリーン
//    ofColor lemonyellow(217, 202, 0); // レモンイエロー
//    ofColor peachpink(232, 189, 165); // ピーチピンク
//    ofColor white(225, 225, 225);
//    ofBackgroundHex(0xFFFFFF);
//    ofSetHexColor(0x000000);
//    ofDrawBitmapString("SceneC",20,20);
//
//    ofSeedRandom(39);
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    ofColor body_color;
//
//    float radius = 250;
//    for (int i = 0; i < 20; i++) {
//        float size = ofRandom(20.f);
//        float deg = ofRandom(360.f) + ofGetFrameNum() * ofMap(size, 0, 20, 0.8, 0.15);
//        float noise_value = ofMap(ofNoise(i * 0.5, ofGetFrameNum() * 0.001), 0, 1, 0.8, 1.2);
//        float x = radius * noise_value * cos(deg * DEG_TO_RAD);
//        float y = radius * noise_value * sin(deg * DEG_TO_RAD);
//        ofPoint point = ofPoint(x, y);
////        int j = i % 3;
////        ofSetColor(color_C[j][0], color_C[j][1], color_C[j][2], 100);
//        body_color.setHsb(216 - i * 16, 225, 255);
//        ofSetColor(body_color);
//        ofDrawCircle(point, 40);
//        ofSetColor(0xF6F6F6);
//        ofDrawCircle(ofPoint(x+7, y+7), 5);
//        ofDrawCircle(ofPoint(x-7, y-7), 5);
//        ofDrawCircle(ofPoint(x+7, y-7), 5);
//        ofDrawCircle(ofPoint(x-7, y+7), 5);
//    }
    
    ofBackgroundHex(0x00FF00);
    ofSetHexColor(0xFFFFFF);
    ofDrawBitmapString("SceneC",20,20);
    
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    
//    float radius = 150;
//    ofColor body_color_C;
//    for (int i = 0; i < 20; i++) {
//        ofRotate(ofGetFrameNum()/2);
//        
//        body_color_C.setHsb(216 - i * 16, 255, 255);
//        ofSetColor(body_color_C);
//        
//        float x = radius * cos(0 * DEG_TO_RAD);
//        float y = radius * sin(0 * DEG_TO_RAD);
//        
//        ofDrawCircle(ofVec2f(x, y), 30);
//        ofDrawLine(ofVec2f(0, 0), ofVec2f(x, y));
//        
//        radius += 10;
//    }

}
