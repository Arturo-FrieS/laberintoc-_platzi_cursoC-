#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;
GameMap::GameMap()
{
    PlayerCell=NULL;
    LoadMapFromFile();
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
        /* pinta cuando es un entero el valor
        PlayerCell->id = 0;
        */
        PlayerCell->id='0';
    }

   PlayerCell = &cells[PlayerY][PlayerX];
        PlayerCell->id = '3';
}

void GameMap::LoadMapFromFile()
{
  /*
    ofstream FileCreated("Map.txt");

    if(FileCreated.is_open())
    {

    }
    else
    {
        cout<<"fatal error"<<endl;
    }
*/

  string line;
    int row=0;
  ifstream MyFile("Map.txt");

  if (MyFile.is_open())
  {
    while(getline(MyFile, line))
    {
        for(int p=0; p<line.length(); p++)
        {
            if(line[p]=='0')
            {
            cells[row][p].id=0;
            }
            else
                {
                    cells[row][p].id=line[p];
                }
        }
        row++;

    }
  }
  else
  {
      cout<<"Fatal error"<<endl;
  }
}
