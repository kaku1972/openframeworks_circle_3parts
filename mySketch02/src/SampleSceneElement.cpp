//
//  SampleSceneElement.cpp
//  mySketch02
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#include "SampleSceneElement.h"
#include "ofApp.h"



SampleSceneElement::SampleSceneElement(){
}

void SampleSceneElement::draw(){
    ofSetCircleResolution(64);
    if(currentScene==1){
//        ofImage image;
//        image.load("background.jpg");
//        image.draw(0, 0);
        ofBackgroundGradient({255,255,255}, {247, 247, 245}, OF_GRADIENT_CIRCULAR);
        float radius = 250;
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofColor body_color;
        ofSeedRandom(39);
        int color_C[5][4] = {{154, 138, 159}, {232, 189, 165}, {190, 225, 225}, {217, 202, 0}, {0, 128, 0}};
        for (int i = 0; i < 20; i++) {
            float size = ofRandom(20.f);
            float deg = ofRandom(360.f) + ofGetFrameNum() * ofMap(size, 0, 5, 0.8, 0.15);
            float noise_value = ofMap(ofNoise(i * 0.5, ofGetFrameNum() * 0.001), 0, 1, 0.8, 1.2);
            float x = radius * noise_value * cos(deg * DEG_TO_RAD);
            float y = radius * noise_value * sin(deg * DEG_TO_RAD);
            ofPoint point = ofPoint(x, y);
            
            int j = i % 5;
            ofSetColor(color_C[j][0], color_C[j][1], color_C[j][2], 200);
            ofDrawCircle(point, 40);
            ofSetColor(0xF6F6F6);
            int dxdy = 7;
            int hole_size = 5;
            ofDrawCircle(ofPoint(x+dxdy, y+dxdy), hole_size);
            ofDrawCircle(ofPoint(x-dxdy, y-dxdy), hole_size);
            ofDrawCircle(ofPoint(x+dxdy, y-dxdy), hole_size);
            ofDrawCircle(ofPoint(x-dxdy, y+dxdy), hole_size);
        }

    }else if (currentScene==2){
//        ofBackgroundGradient({225,225,225}, {217, 202, 0}, OF_GRADIENT_CIRCULAR);
        ofBackground(0, 0, 0);
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        float radius = 150;
        ofColor body_color_A;
        for (int i = 0; i < 20; i++) {
            ofRotate(ofGetFrameNum()/2);
            body_color_A.setHsb(216 - i * 16, 255, 255);
            ofSetColor(body_color_A);
            float x = radius * cos(0 * DEG_TO_RAD);
            float y = radius * sin(0 * DEG_TO_RAD);
            ofDrawCircle(ofVec2f(x, y), 80);
            ofSetColor(225, 225, 225);
            int dxdy = 15;
            int hole_size = 10;
            ofDrawCircle(ofVec2f(x+dxdy, y+dxdy), hole_size);
            ofDrawCircle(ofVec2f(x-dxdy, y-dxdy), hole_size);
            ofDrawCircle(ofVec2f(x-dxdy, y+dxdy), hole_size);
            ofDrawCircle(ofVec2f(x+dxdy, y-dxdy), hole_size);
            ofDrawLine(ofVec2f(0, 0), ofVec2f(x, y));
            radius += 10;
        }

    }else if (currentScene==3){
//        ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);
        ofSeedRandom(39);
        ofBackground(39);
//        ofBackgroundGradient({225,225,225}, {217, 202, 0}, OF_GRADIENT_CIRCULAR);
        int min_size = 5;
        int max_size = 150;
        int number_of_circle = 20;
        for (int i = 0; i < number_of_circle; i++) {
            float size = ofRandom(min_size, max_size) + ofMap(ofNoise(ofRandom(512) * 0.005, ofGetFrameNum() * 0.001), 0, 1, -max_size, max_size);
            float x = ofRandom(ofGetWidth()/4, ofGetWidth()*3/4);
            float y = ofRandom(ofGetHeight()/4, ofGetWidth()/2);
            x += ofMap(ofNoise(ofRandom(number_of_circle) * 0.005, ofGetFrameNum() * 0.005), 0, 1, -size, size);
            y += ofMap(ofNoise(ofRandom(number_of_circle) * 0.005, ofGetFrameNum() * 0.005), 0, 1, -size, size);
            
            ofColor circle_color;
            circle_color.setHsb(((int)ofPoint(x, y).length() - ofGetFrameNum()) % 255, 255, 255);
            ofSetColor(circle_color, ofMap(size, min_size, max_size, 255, 25));
            ofDrawCircle(x, y, size);
            ofSetColor({225, 225, 225}, ofMap(size, min_size, max_size, 255, 25));
            int dxdy = 0.25*size;
            int hole_size = size/5;
            ofDrawCircle(x+dxdy, y+dxdy, hole_size);
            ofDrawCircle(x-dxdy, y-dxdy, hole_size);
            ofDrawCircle(x-dxdy, y+dxdy, hole_size);
            ofDrawCircle(x+dxdy, y-dxdy, hole_size);
        }
        
    }else{;}
    
}
