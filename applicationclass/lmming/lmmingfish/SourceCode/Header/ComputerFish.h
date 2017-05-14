#ifndef COMPUTERFISH_H
#define COMPUTERFISH_H

#include"Fish.h"

class ComputerFish:public Fish
{
public:
     ComputerFish(const char* name);
     virtual ~ComputerFish();
     int  getValue(){return value;}
     void setValue(int value){this.value=value;}
     virtual void  move();
private:
     int value;
};

#endif // COMPUTERFISH_H
