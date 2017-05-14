#include"SpriteFactory.h"
#include <cstdio>
#include"FishType.h"
#include<stdlib.h>
int SpriteFactory::sId=0;
SpriteFactory::SpriteFactory()
{

}
SpriteFactory::~SpriteFactory()
{

}
Fish * SpriteFactory::getFish(int iType)
{

}
PlayerFish* SpriteFactory::CreatePlayer()
{
    ++sId;
    char name[16];
    sprintf(name, "player%d", iID);
    PlayerFish *player=new PlayerFish(name);
    player->setGrade(0);
    player->setMoveSpeedX(0);
    player->setMoveSpeedY(0);
    player->setPointX(0.0f);
    player->setPointY(CSystem::GetScreenBottom() - 5.0f);
    player->setHp(100);
    player->SetSpriteCollisionSend(true);
    player->SetSpriteWorldLimit(WORLD_LIMIT_STICKY, CSystem::GetScreenLeft(),
    CSystem::GetScreenTop(),
    CSystem::GetScreenRight(),
    CSystem::GetScreenBottom());
    return player;
}
PlayerFish* SpriteFactory::CreateComFish(int type)
{
    ++sId;
    double number;//随机数
    char name[16];
    ComputerFish *comfish=NULL;
    switch(type)
    {
    case FishType::MUBAN1:
        sprintf(name, "comfish%d", iID);
        comfish=new ComputerFish(name);
        comfish->CloneSprite("yu_muban1");
        comfish->setValue(20);
        comfish->setMoveSpeedX(-5);
        comfish->setMoveSpeedY(0);
        break;
    case FishType::MUBAN2:
        sprintf(name, "comfish%d", iID);
        comfish=new ComputerFish(name);
        comfish->CloneSprite("yu_muban2");
        comfish->setValue(25);
        comfish->setMoveSpeedX(-10);
        comfish->setMoveSpeedY(0);
        break;
    case FishType::MUBAN3:
        sprintf(name, "comfish%d", iID);
        comfish=new ComputerFish(name);
        comfish->CloneSprite("yu_muban3");
        comfish->setValue(20);
        comfish->setMoveSpeedX(-5);
        comfish->setMoveSpeedY(0);
        break;
    case FishType::MUBAN4:
        sprintf(name, "comfish%d", iID);
        comfish=new ComputerFish(name);
        comfish->CloneSprite("yu_muban4");
        comfish->setValue(25);
        comfish->setMoveSpeedX(-13);
        comfish->setMoveSpeedY(0);
        break;
    case FishType::MUBAN5:
        sprintf(name, "comfish%d", iID);
        comfish=new ComputerFish(name);
        comfish->CloneSprite("yu_muban5");
        comfish->setValue(30);
        comfish->setMoveSpeedX(-20);
        comfish->setMoveSpeedY(0);
        break;
    case FishType::MUBAN6:
        sprintf(name, "comfish%d", iID);
        comfish=new ComputerFish(name);
        comfish->CloneSprite("yu_muban6");
        comfish->setValue(40);
        comfish->setMoveSpeedX(-25);
        comfish->setMoveSpeedY(0);
        break;
    case FishType::MUBAN7:
        sprintf(name, "comfish%d", iID);
        comfish=new ComputerFish(name);
        comfish->CloneSprite("yu_muban7");
        comfish->setValue(50);
        comfish->setMoveSpeedX(-40);
        comfish->setMoveSpeedY(0);
        break;
    }
    comfish->setPointX(CSystem::GetScreenRight());
    for(int i = 0;i < 10;i++)
    {
      number = ((double)(rand() % 10)) / 10;//将0～10之间的随机数除以10
    }
    comfish->setPointY((CSystem::GetScreenTop()-CSystem::GetScreenBottom())*number+CSystem::GetScreenBottom());
    comfish->SetSpriteCollisionReceive(true);
    comfish->SetSpriteWorldLimit(WORLD_LIMIT_NULL, CSystem::GetScreenLeft(),
    CSystem::GetScreenTop() ,
    CSystem::GetScreenRight(),
    CSystem::GetScreenBottom());
    return comfish;
}
Fish* SpriteFactory::getFish(int iType)
{
    Fish* temp=NULL;
    switch(iType)
    {
    case FishType::MUBAN1:
    case FishType::MUBAN2:
    case FishType::MUBAN3:
    case FishType::MUBAN4:
    case FishType::MUBAN5:
    case FishType::MUBAN6:
    case FishType::MUBAN7:
        temp=new CreateComFish(iType);
        break;
    case FishType::MUBAN0:
        temp=CreatePlayer();
        break;

    }
    return temp;
}
