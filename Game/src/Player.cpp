#include "Player.h"
#include <iostream>

using namespace std;
Player::Player()
{
   x=1;
   y=1;
}

void Player::CallInput()
{

    char UserInput = ' ';

    cin >>UserInput;

    switch(UserInput)
    {
    case 'w':
        lastY=y;
        y=y-1;
        break;
           lastX=x;
          case 'd':
              x=x+1;
        break;
           lastY=y;
          case 's':
              y=y+1;
        break;
             lastX=x;
          case 'a':
              x=x-1;
        break;
    }
    cout<<"mi jugador esta en la cordenada: "<<x<<","<<y<<endl;

}

void Player::ResetToSafePosition()
{
    x=lastX;
    y=lastY;
}
