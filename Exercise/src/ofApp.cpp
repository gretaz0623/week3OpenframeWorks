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
    
        for (int y = 0; y < ofGetHeight(); y += 128 + deltaY) {
            for (int x = 0; x < ofGetWidth(); x += 128 + deltaX) {
                int mouseDistX = abs(x - 100);
                int mouseDistY = abs(y - 100);
                
                int radianX = abs(mouseX - mouseDistX);
                int radianY = abs(mouseY - mouseDistY);
                int radianA = abs(radianX - radianY)/10;

                int colorOffset = 0;
                
                if (mouseX < ofGetWidth()/2 && mouseY < ofGetHeight()/2) {
                    colorOffset = 255 - radianA;
                    
                }else if (mouseX >ofGetWidth()/2 || mouseY > ofGetHeight()/2){
                    colorOffset = 10 + radianA;
                
                }else{
                    colorOffset = radianA;

                }
                ofSetColor(colorOffset, x/5, y/5);
                ofDrawCircle(x, y, radianA);
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
