//
//  SampleSceneManager.h
//  mySketch02
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#ifndef SampleSceneManager_h
#define SampleSceneManager_h

#include "SceneManager.cpp"
#include "SampleSceneElement.h"
#include "ofApp.h"

class SampleSceneManager : public SceneManager {
public:
    void setup() override;
    void keyReleased(int key) override;
};

#endif /* SampleSceneManager_h */
