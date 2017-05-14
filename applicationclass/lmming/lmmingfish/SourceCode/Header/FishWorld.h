#ifndef FISHWORLD_H
#define FISHWORLD_H

#include"PlayerFish.h"
#include"ComputerFish.h"

class FishWorld
{
public:

 static const int MAX_COMPUTERFISH_NUM=20;
 static FishWorld *GetFishWorld();
 void setRefreshRate(float refreshRate){this.refreshRate=refreshRate;}
 float getRefreshRate(){return refreshRate;}
 float getDeltaTimeCount(){return CSystem::GetTimeDelta();}
 void setDeltaTimeCount(float deltaTimeCount){this.deltaTimeCount==deltaTimeCount;}
 CTextSprite *getTextStarGame(){return gameStart;}
 void setTextStarGame(CTextSprite *textStarGame){gameStart=textStarGame;}
 CTextSprite *getTextLevel(){return textLevel;}
 void setTextLevel(CTextSprite *textLevel){this.textLevel=textLevel;}
 CTextSprite *getTextScore(){return textScore;}
 void setTextScore(CTextSprite *textScore){this.textScore=textScore;}
 PlayersFish *getPlayerFish(){return playerFish;}
 void setPlayersFish(Fish *playerFish){this.playerFish=playerFish;}
 vector<ComputerFish *> *getComputerFishs(){return computerFishs;}
 void setComputerFishs(vector<ComputerFish *> *computerFishs){this.computerFishs=computerFishs;}
 ComputerFish *findComputerFishByName(const char *fName);
 Fish *addFish(int key);
 int getRandomByGrade();
 void setComputerFishSpeadByGrade(ComputerFish *cFish);
private:
 FishWorld();
 PlayerFish  *playerFish;
 vector<ComputerFish *> *computerFishs;
 float refreshRate;
 float deltaTimeCount;
 CTextSprite *textLevel;
 CTextSprite *textScore;
 CTextSprite *gameStart;
 float fSpeedX;
 float fSpeedY;
};

#endif // FISHWORLD_H
