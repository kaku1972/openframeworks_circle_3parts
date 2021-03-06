//
//  SceneManager.cpp
//  mySketch02
//
//  Created by Tetsuya Kaku on 2018/06/17.
//

#include "SceneElement.cpp"
#include "ofMain.h"
#include "ofApp.h"

class SceneManager{
protected:
    int elementIndex = 0;
    vector<SceneElement *> elements;
    
public:
    virtual void setup()=0; //add SceneElement in this
    
    void init(){
        for(int i = 0; i < elements.size(); i++){
            elements[i]->init();
        }
    }
    void update(){
        elements.at(elementIndex)->update();
    };
    
    void draw(){
//        ofSetWindowTitle("FPS:" + ofToString(ofGetFrameRate()));　// フレームレイト表示
        elements.at(elementIndex)->draw();
    };
    
    void end(){
        for(int i = 0; i < elements.size(); i++){
            elements[i]->end();
        }
    }
    
    void changeElement(int index){
        if(index >= elements.size()) return;
        elements[elementIndex]->stop();
        elementIndex = index;
        elements[elementIndex]->start();
    }
    
    bool nextElement(){
        elements[elementIndex]->stop();
        elementIndex++;
        if(elementIndex >= elements.size()){
            elementIndex--;
            return false;
        }else{
            elements[elementIndex]->start();
            return true;
        }
    };
    
    virtual void keyReleased(int key){
        elements.at(elementIndex)->keyReleased(key);
    };
    virtual void mouseReleased(int x, int y, int button){
        elements.at(elementIndex)->mouseReleased(x, y, button);
    };
};
