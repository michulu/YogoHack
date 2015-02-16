/* 
 * File:   Item.h
 * Author: Yogi
 *
 * Created on 16 lutego 2015, 00:58
 */

#ifndef ITEM_H
#define	ITEM_H
#include <string>
class Player;
using namespace std;
class Item {
public:
    Item();
    Item(const Item& orig);
    virtual ~Item();
    virtual void use(Player& player) =0;
private:
    string name;
    int Tier;
    

};

#endif	/* ITEM_H */

