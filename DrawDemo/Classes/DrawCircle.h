//
//  DrawCircle.h
//  DrawDemo
//
//  Created by chenhao on 14/10/30.
//
//

#ifndef __DrawDemo__DrawCircle__
#define __DrawDemo__DrawCircle__

#include <stdio.h>
#include <cocos2d.h>
USING_NS_CC;
namespace chenhao {
    class DrawCircle:public Node{
    private:
        DrawNode*drawCircle;
    public:
        virtual bool init();
        virtual void draw(Renderer *renderer, const Mat4& transform, uint32_t flags);
        CREATE_FUNC(DrawCircle)
    };
}
#endif /* defined(__DrawDemo__DrawCircle__) */
