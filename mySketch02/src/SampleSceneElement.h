//
//  SampleSceneElement.h
//  mySketch02
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#ifndef SampleSceneElement_h
#define SampleSceneElement_h

#include "SceneElement.cpp"
#include "ofApp.h"

class SampleSceneElement : public SceneElement {
public:
    void draw() override;
    SampleSceneElement();
    
private:
    ofColor backgroundColor;
};

#endif /* SampleSceneElement_h */
