#ifndef PLAYERFISH_H
#define PLAYERFISH_H

#include"Fish.h"

class PlayerFish:public Fish
{
public:
     PlayerFish(const char* name);
     virtual ~PlayerFish();
     int   getPlayerScore(){return iPlayerScore;}
     void  setPlayerScore(int score){iPlayerScore=score;}
     virtual void  move(int  ikey);
     void  stopMove(int ikey);
     void  eat(ComputerFish *pFish);
     int   playScoreTransferLvel();

private:
    int iPlayerScore=0;
};


#endif // PLAYERFISH_H
