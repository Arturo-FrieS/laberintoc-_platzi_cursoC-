#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;
GameMap::GameMap()
{
    PlayerCell=NULL;
    LoadMapFromFile();
    isGameOver=false;
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


bool GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{
  if(cells[PlayerY][PlayerX].IsBlocked()==false)
  {
      if(cells[PlayerY][PlayerX].id=='4')
      {
          DrawVictory();
          isGameOver=true;
          return true;
      }
      else
      {

          if (PlayerCell != NULL)
    {
        /* pinta cuando es un entero el valor
        PlayerCell->id = 0;
        */
        PlayerCell->id=0;
    }

   PlayerCell = &cells[PlayerY][PlayerX];
        PlayerCell->id = '3';
      }
        return true;
 }
        else
        {
            return false;
        }



}

void GameMap::DrawIntro()
{
   string line;
  ifstream MyFile("intro.txt");

  if (MyFile.is_open())
  {
    while(getline(MyFile, line))
    {
        cout<<line<<endl;

    }
    cin>>line;
  }
  else
  {
      cout<<"Fatal error"<<endl;
  }
}

void GameMap::DrawVictory()
{
   string line;
  ifstream MyFile("victory.txt");

  if (MyFile.is_open())
  {
    while(getline(MyFile, line))
    {
        cout<<line<<endl;

    }
    cin>>line;
  }
  else
  {
      cout<<"Fatal error"<<endl;
  }
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
