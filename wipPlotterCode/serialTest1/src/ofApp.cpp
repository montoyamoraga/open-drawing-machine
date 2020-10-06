#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    serial.listDevices();
    vector <ofSerialDeviceInfo> deviceList = serial.getDeviceList();

    int baud = 115200;
    serial.setup(0, 115200); //open the first device and talk to it at 57600 baud
//    serial.setup(0, 9600); //open the first device and talk to it at 57600 baud
    
    //ofSetFrameRate(1);

}

//--------------------------------------------------------------
void ofApp::update(){
    
//    unsigned char buf[4] = {'M','0','5','\n'}; //G01 X10 Y10 F1000
//    serial.writeBytes(&buf[0], 4);

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    if(ofGetElapsedTimef() > timeTemp + 4){
        //random lines within canvas
        //drawGLine(ofRandom(0, 100), ofRandom(0, 100), ofRandom(0, 100), ofRandom(0, 100));
        
        //lines from one point
        drawGLine(0, ofRandom(0, 100), ofRandom(0, 100), 0);
        
        timeTemp = ofGetElapsedTimef();
        
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'p'){
        penDown();
//        string str = "G";
//        int a = 23;
//        string str2 = ofToString(a);
//        unsigned char test = ofToChar(str);
////        unsigned char buf[15] = {test,'1','X','0','0','Y','0','0','F','1','0','0','0','\r','\n'}; //G01 X10 Y10 F1000
//        unsigned char buf[8] = {'M', '0', '3', 'S', '9', '0', '\r', '\n'};
//        serial.writeBytes(&buf[0], 8);
    }
    if (key == 'u'){
        penUp();
//        unsigned char buf[8] = {'M', '0', '3', 'S', '5', '0', '\r', '\n'};
//        serial.writeBytes(&buf[0], 8);
    }
    if (key == 'l'){
        //penUp();
        drawGLine(ofRandom(0, 100), ofRandom(0, 100), ofRandom(0, 100), ofRandom(0, 100));
    }
    if (key == 'c'){
        //penUp();
        drawGCircle(50, 50, 40);
    }
    if (key == 't'){
        unsigned char buf[15] = {'G','1','X','3','0','Y','1','0','F','1','0','0','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf[0], sizeof(buf));
    }
    if (key == 'r'){
        unsigned char buf[15] = {'G','1','X','1','0','Y','3','0','F','1','0','0','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf[0], 15);
    }
    if (key == 'm'){
        unsigned char buf[8] = {'M','0','3','S','4','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf[0], 8);
    }
    if (key == 'n'){
        unsigned char buf[8] = {'M','0','3','S','7','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf[0], 8);
    }
    if (key == '1'){
        unsigned char buf[15] = {'G','1','X','2','0','Y','2','0','F','1','0','0','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf[0], 15);
    }
    if (key == '2'){
        unsigned char buf[15] = {'G','1','X','4','0','Y','4','0','F','1','0','0','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf[0], 15);
    }
    if (key == '3'){
        unsigned char buf[15] = {'G','1','X','6','0','Y','6','0','F','1','0','0','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf[0], 15);
    }
    if (key == '0'){
//        unsigned char test = 71;
//        int test = 71;
        string str = "G";
        int a = 23;
        string str2 = ofToString(a);
        unsigned char test = ofToChar(str);
        unsigned char buf[15] = {test,'1','X','0','0','Y','0','0','F','1','0','0','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf[0], 15);
    }
    
    if (key == 'x'){
        unsigned char buf1[15] = {'G','1','X','2','0','Y','2','0','F','1','0','0','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf1[0], 15);
        
            unsigned char buf5[8] = {'M','0','3','S','4','0','\r','\n'}; //G01 X10 Y10 F1000
            serial.writeBytes(&buf5[0], 8);

        unsigned char buf2[15] = {'G','1','X','4','0','Y','4','0','F','1','0','0','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf2[0], 15);
           
            unsigned char buf4[8] = {'M','0','3','S','3','8','\r','\n'}; //G01 X10 Y10 F1000
            serial.writeBytes(&buf4[0], 8);

        unsigned char buf3[15] = {'G','1','X','6','0','Y','6','0','F','1','0','0','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf3[0], 15);
    }
    if (key == 'c'){
        unsigned char buf[18] = {'G','2','X','5','0','Y','5','0','R','5','0','F','1','0','0','0','\r','\n'}; //G01 X10 Y10 F1000
        serial.writeBytes(&buf[0], 18);
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

    
}

void ofApp::penUp(){
    string str = "M03 S" + to_string(penUpServoVal) + "\n";
    unsigned char buf[str.length()];
    for(int i = 0; i < sizeof(buf); i++){
            buf[i] = str[i];
    }
    serial.writeBytes(&buf[0], sizeof(buf));
}

void ofApp::penDown(){
    string str = "M03 S" + to_string(penDownServoVal) + "\n";
    unsigned char buf[str.length()];
    for(int i = 0; i < sizeof(buf); i++){
            buf[i] = str[i];
    }
    serial.writeBytes(&buf[0], sizeof(buf));
}

void ofApp::penTo(int penToServoVal){
    string str = "M03 S" + to_string(penToServoVal) + "\n";
    unsigned char buf[str.length()];
    for(int i = 0; i < sizeof(buf); i++){
            buf[i] = str[i];
    }
    serial.writeBytes(&buf[0], sizeof(buf));
}

void ofApp::g00(float x, float y){
    string str = "G00 X" + to_string(x) + " Y" + to_string(y) + "\n";
    unsigned char buf[str.length()];
    for(int i = 0; i < sizeof(buf); i++){
            buf[i] = str[i];
    }
    serial.writeBytes(&buf[0], sizeof(buf));
}

void ofApp::g01(float x, float y){
    string str = "G01 X " + to_string(x) + " Y " + to_string(y) +  " F " + to_string(feedRate) + "\n";
    unsigned char buf[str.length()];
    for(int i = 0; i < sizeof(buf); i++){
            buf[i] = str[i];
    }
    serial.writeBytes(&buf[0], sizeof(buf));
}

void ofApp::g02(float x, float y, float r){
    string str = "G02 X " + to_string(x) + " Y " + to_string(y) + " R " + to_string(r) + " F " + to_string(feedRate) + "\n";
    unsigned char buf[str.length()];
    for(int i = 0; i < sizeof(buf); i++){
            buf[i] = str[i];
    }
    serial.writeBytes(&buf[0], sizeof(buf));
}

void ofApp::g03(float x, float y, float r){
    string str = "G03 X " + to_string(x) + " Y " + to_string(y) + " R " + to_string(r) + " F " + to_string(feedRate) + "\n";
    unsigned char buf[str.length()];
    for(int i = 0; i < sizeof(buf); i++){
            buf[i] = str[i];
    }
    serial.writeBytes(&buf[0], sizeof(buf));
}

void ofApp::drawGLine(float x1, float y1, float x2, float y2){
    penUp();
    g00(x1, y1);
    penDown();
    g01(x2, y2);
    penUp();
    ofDrawLine(x1, y1, x2, y2);
}

void ofApp::drawGArc(float x1, float y1, float x2, float y2, float r, bool dir){
    penUp();
    g00(x1, y1);
    penDown();
    if(dir)
        g02(x2, y2, r);
    else
        g03(x2, y2, r);
    penUp();
}

void ofApp::drawGCircle(float x, float y, float r){
    drawGArc(x-r,  y,  x,  y+r,  r, true);
    drawGArc(x,  y+r, x+r, y, r, true);
    drawGArc(x+r,  y,  x,  y-r,  r, true);
    drawGArc(x,  y-r,  x-r,  y,  r, true);
}


