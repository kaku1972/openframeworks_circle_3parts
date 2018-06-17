#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxXmlSettings.h"

class ofApp2 : public ofBaseApp{

	public:
    
        void setup();
		void update();
        void draw();

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
    
        ofxPanel gui;
        ofxFloatSlider radius;
        ofxColorSlider color;
        ofxVec2Slider position;
        ofxXmlSettings settings;
        ofEasyCam cam;

        int framerate;
    
        float positionX;
        float positionY;
        float rad;
        float count;
    
        int timeout;
//        int five = 25;
//        int ten = 50;

};
