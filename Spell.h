/* 
 * File:   Spell.h
 * Author: Yogi
 *
 * Created on 16 lutego 2015, 01:01
 */

#ifndef SPELL_H
#define	SPELL_H
#include <string>
class Player;
using namespace std;
class Spell {
public:
    Spell();
    Spell(const Spell& orig);
    virtual ~Spell();
    virtual void Cast(Player& player) =0;
private:
    string name;
    int Tier;
};

#endif	/* SPELL_H */

