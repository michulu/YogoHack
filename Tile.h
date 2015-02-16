/* 
 * File:   Tile.h
 * Author: Yogi
 *
 * Created on 16 lutego 2015, 00:52
 */

#ifndef TILE_H
#define	TILE_H
#include <set>
#include "YogoTypes.h"
class Player;
class Item;
using namespace std;
class Tile {
public:
    Tile();
    Tile(const Tile& orig);
    virtual ~Tile();
private:
    int x;
    int y;
    TileType type;
    Player *player;
    set<Item> *items;
};

#endif	/* TILE_H */

