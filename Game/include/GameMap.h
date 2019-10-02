#ifndef GAMEMAP_H
#define GAMEMAP_H"

#include "MapCell.h"

class GameMap
{
    public:
        GameMap();
        MapCell*PlayerCell;
        MapCell cells[15][10];

        void Draw();
        //obtiene cordenadas de player y actualiza mapa
        void SetPlayerCell(int PlayerX, int PlayerY);
    protected:
    void LoadMapFromFile();
    private:
};

#endif // GAMEMAP_H
