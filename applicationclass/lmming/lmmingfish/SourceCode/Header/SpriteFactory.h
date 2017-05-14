#ifndef SPRITEFACTORY_H
#define SPRITEFACTORY_H


#include"PlayerFish.h"
#include"ComputerFish.h"

class SpriteFactory
{
  public:
      SpriteFactory();
      virtual ~SpriteFactory();
      static Fish  *getFish(int iType);
  private:
    static int  sId;
    static PlayerFish* CreatePlayer();
    static ComputerFish* CreateComFish(int type);
};


#endif // SPRITEFACTORY_H
