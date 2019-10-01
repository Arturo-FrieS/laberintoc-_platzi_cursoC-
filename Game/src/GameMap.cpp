#include "GameMap.h"
#include <iostream>

using namespace std;
GameMap::GameMap()
{
    PlayerCell=NULL;
}

void GameMap::Draw()
{

    for(int i=0; i<15; i=i+1)
    {
        for(int p=0; p<10; p=p+1)
        {
            cout<< cells[i][p] .id;
        }
        cout<<endl;
    }
}


void GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{
    if (PlayerCell != NULL)
    {
        PlayerCell->id = 0;
    }

   PlayerCell = &cells[PlayerY][PlayerX];
        PlayerCell->id = 3;
}
