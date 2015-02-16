/* 
 * File:   Player.h
 * Author: Yogi
 *
 * Created on 16 lutego 2015, 00:50
 */

#ifndef PLAYER_H
#define	PLAYER_H
#include <set>
#include <string>
class Item;
class Spell;
class Tile;
using namespace std;
class Player {
public:
    Player();
    Player(const Player& orig);
    virtual ~Player();
    virtual bool move(const Tile& dest) =0;
private:
    string name;
    int level;
    float maxHitPoints;
    float maxManaPoints;
    float hitPoints;
    float manaPoints;
    float strength;
    float agility;
    float intelligence;
    float wisdom;
    float vitality;
    float dodge;
    float criticalChance;
    float criticalMultiplier;
    float accuracy;
    float experience;
    set<Item> *items;
    set<Item> *equipment;
    set<Spell> *spells;
    Tile *position;
    void levelUp();
};

#endif	/* PLAYER_H */

