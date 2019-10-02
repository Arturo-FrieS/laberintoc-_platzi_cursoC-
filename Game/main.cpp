#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{

    GameMap Map;
   Player Hero;

   cout<<"inicia juego"<<endl;
    while(Map.isGameOver==false)
    {
        //loop
        Hero.CallInput();

        //actualiza infomracion de mapa
        Map.SetPlayerCell(Hero.x, Hero.y);

        //dibujamos mapa
        Map.Draw();
    }

    return 0;
}
