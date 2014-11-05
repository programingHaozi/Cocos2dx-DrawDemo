//
//  SRect.h
//  DrawDemo
//
//  Created by chenhao on 14/10/30.
//
//

#ifndef __DrawDemo__SRect__
#define __DrawDemo__SRect__

#include <stdio.h>
#include <cocos2d.h>
USING_NS_CC;
namespace chenhao {
    class SRect :public Node{
        
    public:
        virtual bool init();
        virtual void draw(Renderer *renderer, const Mat4& transform, uint32_t flags);
        CREATE_FUNC(SRect)
    };
}
#endif /* defined(__DrawDemo__SRect__) */
