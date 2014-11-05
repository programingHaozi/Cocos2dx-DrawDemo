//
//  DrawSCircle.cpp
//  DrawDemo
//
//  Created by chenhao on 14/10/30.
//
//

#include "DrawSCircle.h"
namespace chenhao{
    bool DrawSCircle::init(){
        return true;
    }
    
    void DrawSCircle::draw(cocos2d::Renderer *renderer, const cocos2d::Mat4 &transform, uint32_t flags){
        auto drawSCircle = DrawNode::create();
        drawSCircle ->drawSolidCircle(Vec2(200, 200), 50, M_PI, 50, Color4F::YELLOW);
        
//        drawSCircle ->drawSolidCircle(Vec2(200, 200), 50, M_PI, 50, 0.5, 1, Color4F::YELLOW);
        addChild(drawSCircle);
    }
}