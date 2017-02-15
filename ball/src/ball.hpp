//
//  ball.hpp
//  ball
//
//  Created by Zhao Hanyu on 15/02/2017.
//
//

#ifndef ball_hpp
#define ball_hpp

#include <stdio.h>
#include "ofMain.h"

class Ball{
    public:
        void setup();
        void update();
        void draw();
    
        float x;
        float y;
        float speedY;
        float speedX;
        int dim;
        ofColor color;
    
        Ball();
    private:
};



#endif /* ball_hpp */
