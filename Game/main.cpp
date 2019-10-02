#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{
    bool isGameOver=false;
    GameMap Map;
   Player Hero;

   cout<<"inicia juego"<<endl;
    while(isGameOver==false)
    {
        //loop
        Hero.CallInput();

        //actualiza infomracion de mapa
      if(  Map.SetPlayerCell(Hero.x, Hero.y))
      {
          Map.Draw();
      }
      else
      {
          Hero.ResetToSafePosition();
          Map.Draw();
      }

        //dibujamos mapa
        Map.Draw();
    }

    return 0;
}
