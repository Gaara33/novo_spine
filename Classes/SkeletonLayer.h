#ifndef __SKELETONLAYER_H__
#define __SKELETONLAYER_H__

#include "cocos2d.h"
#include "spine/spine-cocos2dx.h"

class SkeletonLayer : public cocos2d::Layer
{
    
public:
    void InitSkeleton(const std::string& skeletonDataFile, const std::string& atlasFile, float scale);

private:
	spine::SkeletonAnimation* skeletonNode;
    
public:

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(SkeletonLayer);
};

#endif // __HELLOWORLD_SCENE_H__

