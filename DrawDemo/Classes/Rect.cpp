//
//  Rect.cpp
//  DrawDemo
//
//  Created by chenhao on 14/10/30.
//
//

#include "Rect.h"
namespace chenhao{
    bool Rect::init(){
        return true;
    }
    
    void Rect::draw(cocos2d::Renderer *renderer, const cocos2d::Mat4 &transform, uint32_t flags){
        auto drawNode = DrawNode::create();
        drawNode ->drawRect(Vec2(0, 0), Vec2(100, 100), Color4F::BLUE);
        //蓝色的圆
//        drawNode ->drawRect(Vec2(100, 100), Vec2(100, 200), Vec2(200, 200), Vec2(200, 100), Color4F::BLUE);
        addChild(drawNode);
    }
}
