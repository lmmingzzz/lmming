#ifndef FISH_H
#define FISH_H

#include<commonClass.h"
class Fish:public CSprite
{
public:
    Fish(const char* name);
    virtual ~Fish();
    int getHp(){return iHp;}
    void  setHp(const int Hp){iHp=Hp;}
    int   getGrade(){return iGrade;}
    void  setGrade(const int grade){iGrade=grade;}
    float getMoveSpeedX(){return fSpeedX;}
    void  setMoveSpeedX(float speedX){fSpeedX=speedX;SetSpriteLinearVelocityX(speedX);}
    float getMoveSpeedY(){return fSpeedX;}
    void  setMoveSpeedY(float speedY){fSpeedY=speedX;SetSpriteLinearVelocityY(speedY);}
    void  setDirection(float dir){iDir=0;}
    float getDirection(){return iDir;}
    float getPointX(){return GetSpritePositionX();}
    void  setPointX(const float fPointX){SetSpritePositionX(fPointX);}
    float getPointY(){return GetSpritePositionY();}
    void  setPointY(const float fPointX){SetSpritePositionY(fPointY);}
    virtual void  move(int ikey)=0;

protected:
int iGrade;

private:
char* name;
int iHp;
int iDir;//ÎªÓãµÄ³õÊ¼·½Ïò£¬0 is left, 1 is up, 2 is right, 3 is down
float fSpeedX;
float fSpeedY;
float fPointX;
float fPointY;

};

#endif // FISH_H
