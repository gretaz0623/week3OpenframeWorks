#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int deltaX = ofMap(mouseX, 0, ofGetWidth(), 0, 50);
    int deltaY = ofMap(mouseY, 0, ofGetHeight(), 0, 50);
    for (int y = 0; y < ofGetHeight(); y += 20 + deltaY) {
        for (int x = 0; x < ofGetWidth(); x += 20 + deltaX) {
            int mouseDistX = abs(x - mouseX);
            int mouseDistY = abs(y - mouseY);
            int colorOffset = 0;
            
            if (mouseDistX < 100 && mouseDistY < 100) {
                colorOffset = 100 + (mouseDistX +mouseDistY)/2;

          
             
            }
           
            ofSetColor(colorOffset, (x + y)/8, 200);
            ofDrawCircle(x, y, 20);
        }
    }
    

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
