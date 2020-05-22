#pragma once
#include "Soldier.hpp"

namespace WarGame{

    class FootCommander : public Soldier {
        public:
        FootCommander(uint p) ;
        FootCommander();

    };

    FootCommander::FootCommander(uint p) {
        hp=150;
        dmg=20;
        player = p;

    }

    FootCommander::FootCommander(){
        hp = 150;
        dmg = 20;
        player = -1;
    }



}