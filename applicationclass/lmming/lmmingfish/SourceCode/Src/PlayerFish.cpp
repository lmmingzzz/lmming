#include"PlayerFish.h"
PlayerFish::PlayerFish(const char* name):Fish(name)
{
    iGrade=1;
    CloneSprite("kongzhiyu");
}
PlayerFish::~PlayerFish()
{

}
void PlayerFish::eat(ComputerFish *pFish)//�������౻�Ե������٣��������������ı�
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
