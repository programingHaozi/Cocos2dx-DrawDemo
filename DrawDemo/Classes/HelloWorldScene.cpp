#include "HelloWorldScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "Rect.h"
#include "SRect.h"
#include "DrawCircle.h"
#include "DrawSCircle.h"
USING_NS_CC;

using namespace cocostudio::timeline;


class Shape:public Node {
    
public:
    virtual void draw(Renderer *renderer, const Mat4& transform, uint32_t flags){
        auto drawNode = DrawNode::create();
        
        drawNode-> drawTriangle(Vec2(100, 100), Vec2(100, 300), Vec2(300, 300), Color4F::BLUE);
    }
    virtual bool init(){
        return true;
    }
    CREATE_FUNC(Shape)
};





Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    
    auto drawSRect = chenhao::SRect::create();
//    addChild(drawSRect);
   
    auto drawRect = chenhao::Rect::create();
//    addChild(drawRect);
    
    auto drawCiecle = chenhao::DrawCircle::create();
    drawCiecle ->setPosition(100,100);
    addChild(drawCiecle);
    
    auto drawSCircle = chenhao::DrawSCircle::create();
//    addChild(drawSCircle);
  

    
  
    
    
    
    return true;
}

void HelloWorld::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif

    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
