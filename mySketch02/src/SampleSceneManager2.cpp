//
//  SampleSceneManager.cpp
//  mySketch02
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#include "SampleSceneManager2.h"
#include "ofApp.h"

void SampleSceneManager2::setup(){
    for(int i = 0; i < 5; i++){
        this->elements.push_back(new SampleSceneElemen2t());
    }
    init();
}

void SampleSceneManager2::keyReleased(int key){
    switch (key) {
        case OF_KEY_RETURN:
            changeElement(ofRandom(5));
            break;
        default:
            break;
    }
}
