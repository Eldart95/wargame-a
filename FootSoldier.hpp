#pragma once
#include "Soldier.hpp"
namespace WarGame{
    class FootSoldier : public Soldier {
        public:
        FootSoldier(uint p);
        FootSoldier();

    };

    FootSoldier::FootSoldier(uint p){
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
