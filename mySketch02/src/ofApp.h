#pragma once

#include "ofMain.h"
#include "ofxXmlSettings.h"
#include <vector>

extern int currentScene; //現在のシーン番号 グローバル変数

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

        void keyReleased(int key, int Scene);
		void mousePressed(int x, int y, int button);

        float count;
        float timeout_request; // 5 ~ 10
        float timeout = 5.0; // 25 ~ 50
        int Scenes; // 3~N シーン数
        int framerate; // 60　フレームレイト
        std::vector<int> list_order;
        int order_index = 0;
};
