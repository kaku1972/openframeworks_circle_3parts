//
//  SceneC.hpp
//  mySketch01
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#ifndef SceneC_hpp
#define SceneC_hpp

#include "ofMain.h"
#include "baseScene.h"
#include "ofxGui.h"

class SceneC : public baseScene {
    void setup();
    void update();
    void draw();
    int color_C[5][3] = {{154, 138, 159}, {232, 189, 165}, {190, 225, 225}, {217, 202, 0}, {0, 128, 0}};
};

#endif /* SceneC_hpp */
