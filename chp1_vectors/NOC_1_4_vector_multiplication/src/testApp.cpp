// Example 1-4: Vector multiplication
#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowShape(800, 200);
    ofEnableSmoothing();
    ofBackground(255);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofPoint mouse(mouseX,mouseY);
    ofPoint center(ofGetWidth()/2,ofGetHeight()/2);
    mouse -= center;
    
    // Multiplying a vector!  The vector is now half its original size (multiplied by 0.5).
    mouse *= 0.5;
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofSetLineWidth(2);
    ofSetColor(0);
    ofLine(0, 0, mouse.x, mouse.y);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}