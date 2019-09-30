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
        y=y+1;
        cout<<"El jugador se mueve arriba"<<endl;
        break;
          case 'd':
              x=x+1;
        cout<<"El jugador se mueve derecha "<<endl;
        break;
          case 's':
              y=y-1;
        cout<<"El jugador se mueve abajo"<<endl;
        break;
          case 'a':
              x=x-1;
        cout<<"El jugador se mueve izquierda"<<endl;
        break;
    }
    cout<<"mi jugador esta en la cordenada: "<<x<<","<<y<<endl;
}
