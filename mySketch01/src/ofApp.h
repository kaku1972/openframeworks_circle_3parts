#pragma once

#include "ofMain.h"
#include "baseScene.h"
#include "SceneA.h"
#include "SceneB.h"
#include "SceneC.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void exit();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        vector <baseScene*> scenes;//複数のシーンを格納する動的配列
        int currentScene;//現在のシーン番号
        float count;
        float timeout_request; // 5 ~ 10
        float timeout = 5.0; // 25 ~ 50
        int Scenes; // 3~N
        int framerate; // 60
};
