#include "NovoScene.h"
#include "spine/spine.h"
#include "base/ccMacros.h"
#include "SkeletonLayer.h"
#include "ParticleLayer.h"
#include "Sprite3DLayer.h"

USING_NS_CC;
using namespace spine;

void Testmap(){
    std::map<int, bool > datas;
    datas[1] = true;
    datas[2] = false;
    datas[3] = true;
    datas[4] = false;
    
    std::map<int, bool>::iterator iter = datas.begin();
    for (; iter != datas.end();) {
        if( iter->second )
            datas.erase(iter++);
        else{
            ++iter;
        }
    }
    return;
}

Scene* NovoScene::createScene()
{
    Testmap();
    // 'scene' is an autorelease object
    auto scene = NovoScene::create();
    log("NovoScene::createScene");
    
    // 'layer' is an autorelease object
    auto layerfish = SkeletonLayer::create();
    layerfish->InitSkeleton("spine/banana.json", "spine/banana.atlas", 1.0f);
    //layerfish->InitSkeleton("bouquet/novo_info.json");
    
    //auto layerIsland = SkeletonLayer::create();
    //layerIsland->InitSkeleton("spine/island.json", "spine/island.atlas", 1.0f);

    //auto parLayer = ParticleLayer::create();
    //auto sprintLayer = Sprite3DLayer::create();
    // add layer as a child to scene
    //->addChild(sprintLayer);
    scene->addChild(layerfish, 4);
    //scene->addChild(parLayer);

    //layerfish->mbUpdatepos = true;
    //layerfish->setPosition(400, 100);
    //scene->addChild(layerIsland, 3);
    //layerIsland->setPosition(400, 0);

   
    
    
    // return the scene
    return scene;
}

NovoScene::NovoScene(){
    
}

bool NovoScene::init()
{
    if( !Scene::init()){
        return false;
    }
    //scheduleUpdate();
    return true;
}

void NovoScene::update(float delta){
    Scene::update(delta);
    
}
