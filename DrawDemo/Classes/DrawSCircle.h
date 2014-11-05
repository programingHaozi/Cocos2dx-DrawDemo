//
//  DrawSCircle.h
//  DrawDemo
//
//  Created by chenhao on 14/10/30.
//
//

#ifndef __DrawDemo__DrawSCircle__
#define __DrawDemo__DrawSCircle__

#include <stdio.h>
#include <cocos2d.h>
USING_NS_CC;
namespace chenhao {
    class DrawSCircle:public Node{
    public:
        virtual bool init();
        virtual void draw(Renderer *renderer, const Mat4& transform, uint32_t flags);
        CREATE_FUNC(DrawSCircle)
    };
}
#endif /* defined(__DrawDemo__DrawSCircle__) */
