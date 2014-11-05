//
//  SRect.cpp
//  DrawDemo
//
//  Created by chenhao on 14/10/30.
//
//

#include "SRect.h"

namespace chenhao {
    bool SRect::init(){
        return true;
    }
    
    void SRect::draw(cocos2d::Renderer *renderer, const cocos2d::Mat4 &transform, uint32_t flags){
        auto drawNode = DrawNode::create();
        drawNode ->drawSolidRect(Vec2(50,50), Vec2(150, 150), Color4F(1, 0, 0, 1));
        addChild(drawNode);
    }
}