#pragma once
#include "Soldier.hpp"
namespace WarGame{
    class FootSoldier : public Soldier {
        public:
        FootSoldier(int p);
        FootSoldier();

    };

    FootSoldier::FootSoldier(int p){
        player = p;
        dmg = 10;
        hp = 100;
    }

    FootSoldier::FootSoldier(){
        dmg = 10;
        player = -1;
        hp = 100;
    }
}
