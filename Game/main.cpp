#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
    bool isGameOver=false;
   Player Hero;

   cout<<"inicia juego"<<endl;
    while(isGameOver==false)
    {
        Hero.CallInput();
    }

    return 0;
}
