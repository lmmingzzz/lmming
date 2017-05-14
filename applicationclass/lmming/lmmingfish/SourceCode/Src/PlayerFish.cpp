#include"PlayerFish.h"
PlayerFish::PlayerFish(const char* name):Fish(name)
{
    iGrade=1;
    CloneSprite("kongzhiyu");
}
PlayerFish::~PlayerFish()
{

}
void PlayerFish::eat(ComputerFish *pFish)//电脑鱼类被吃掉（销毁），玩家鱼类分数改变
{

}
void PlayerFish::playScoreTransferLvel()
{
    if(iPlayerScore>100)
    {
        iGrade=2;
    }
    if(iPlayerScore>250)
    {
        iGrade=3;
    }
    if(iPlayerScore>450)
    {
        iGrade=4;
    }
    if(iPlayerScore>750)
    {
        iGrade=5;
    }
}
