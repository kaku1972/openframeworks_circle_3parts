//
//  SceneElement.cpp
//  mySketch02
//
//  Created by Tetsuya Kaku on 2018/06/18.
//

#ifndef SceneElement_cpp
#define SceneElement_cpp

#include "ofMain.h"

class SceneElement {
public:
    virtual void init(){};
    virtual void start(){};
    virtual void stop(){};
    virtual void update(){};
    virtual void draw()=0;
    virtual void end(){};
    
    virtual void keyReleased(int key){};
    virtual void mouseReleased(int x, int y, int button){};
};
#endif
