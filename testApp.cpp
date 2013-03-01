#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    player.loadMovie("cars.mov");
    player.setLoopState(OF_LOOP_PALINDROME);
    player.play();
    ofBackground(0);
}

//--------------------------------------------------------------
void testApp::update(){
    player.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    for (int y = player.getHeight()/2; y < player.getHeight(); y+=10) {
        for (int x = 0; x < player.getWidth(); x+=10) {
            ofColor sample = player.getPixelsRef().getColor(x, y);
            ofSetColor(sample + 100);
            ofLine(x, y, x*2, y*2);
            ofLine(mouseX, mouseY, x, y);
        }
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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