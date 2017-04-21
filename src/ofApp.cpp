#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cout << "Hello openFrameworks!" << endl;
    
    ofBackground(54, 54, 54, 255);
    myFont.load("verdana.ttf", 32);
}

//--------------------------------------------------------------
void ofApp::update(){
    rot = rot + 5;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(245, 58, 135);
    
    ofPushMatrix();
    ofTranslate(200, 400);
    ofRotate(rot);
    myFont.drawString("Hello openFrameworks!",0,0);
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
