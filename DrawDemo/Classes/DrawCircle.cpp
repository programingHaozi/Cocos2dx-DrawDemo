//
//  DrawCircle.cpp
//  DrawDemo
//
//  Created by chenhao on 14/10/30.
//
//

#include "DrawCircle.h"
namespace chenhao{
    bool DrawCircle::init(){
        drawCircle = DrawNode::create();
//        drawCircle ->retain();
        addChild(drawCircle);
//        drawCircle ->autorelease();
        return true;
    }
    
    void DrawCircle::draw(cocos2d::Renderer *renderer, const cocos2d::Mat4 &transform, uint32_t flags){
//        auto drawCircle = DrawNode::create();
//        drawCircle ->drawCircle(Vec2(200, 100), 50, M_PI, 50, 1, Color4F::RED);
//        addChild(drawCircle);
        
//        for (int i = 0; i<50; i++) {
//            for (int j = 0; j<50; j++) {
//                DrawPrimitives::setDrawColor4B(rand()%256, rand()%256, rand()%256, 255);
//                DrawPrimitives::drawPoint(Point(i,j));
//            }
//        }
        
       
//        if (drawCircle) {
//            drawCircle ->clear();
//        }
//        drawCircle ->retain();
        for (int i = 0; i<50; i++) {
            for (int j = 0; j<22; j++) {
              
               
                
                drawCircle ->drawPoint(Vec2(i, j), 1, Color4F(Color4B(rand()%256, rand()%256, rand()%256, 255)));
                
              
            }
        }
       
    }
}