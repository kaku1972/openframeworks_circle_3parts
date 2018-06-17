//
//  SceneA.hpp
//  mySketch01
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#ifndef SceneA_hpp
#define SceneA_hpp

#include "ofMain.h"
#include "baseScene.h"

class SceneA : public baseScene {
    void setup();
    void update();
    void draw();
    ofEasyCam cam;
};

#endif /* SceneA_hpp */
