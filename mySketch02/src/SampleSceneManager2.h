//
//  SampleSceneManager2.h
//  mySketch02
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#ifndef SampleSceneManager2_h
#define SampleSceneManager2_h

#include "SceneManager.cpp"
#include "SampleSceneElement2.h"
#include "ofApp.h"

class SampleSceneManager2 : public SceneManager {
public:
    void setup() override;
    void keyReleased(int key) override;
};

#endif /* SampleSceneManager2_h */
