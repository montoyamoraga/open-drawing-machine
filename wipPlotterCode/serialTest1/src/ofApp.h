#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

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
        
    ofSerial serial;
    
    void penUp();
    void penDown();
    void penTo(int penToServoVal);
    void g00(float x, float y);
    void g01(float x, float y);
    void g02(float x, float y, float r);
    void g03(float x, float y, float r);
    void drawGLine(float x1, float y1, float x2, float y2);
    void drawGArc(float x1, float y1, float x2, float y2, float r, bool dir);
    void drawGCircle(float x, float y, float r);
    	
    
    int penUpServoVal = 90;  //range 0-90
    int penDownServoVal = 30;  //range 0-90
    int feedRate = 4000;  //used for G1 G2 G3
    
    int timeTemp = 0;
};
