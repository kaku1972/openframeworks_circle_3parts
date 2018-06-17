//
//  SceneB.hpp
//  mySketch01
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#ifndef SceneB_hpp
#define SceneB_hpp

#include "ofMain.h"
#include "baseScene.h"
#include "ofxGui.h"

class SceneB : public baseScene {
    void setup();
    void update();
    void draw();
    ofxPanel gui;
    ofxFloatSlider radius;
    ofxColorSlider color;
    ofxVec2Slider position;
    int num_x = rand() % 1820;
    int num_y = rand() % 980;

};

#endif /* SceneB_hpp */
