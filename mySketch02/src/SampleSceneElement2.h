//
//  SampleSceneElement.h
//  mySketch02
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#ifndef SampleSceneElement2_h
#define SampleSceneElement2_h

#include "SceneElement.h"
#include "ofApp.h"

class SampleSceneElement2 : public SceneElement {
public:
    void draw() override;
    SampleSceneElement2();
    
private:
    ofColor backgroundColor;
};

#endif /* SampleSceneElement2_h */
