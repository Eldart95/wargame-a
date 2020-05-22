#pragma once
#include "Soldier.hpp"

namespace WarGame{

    class FootCommander : public Soldier {
        public:
        FootCommander(int p) ;
        FootCommander();

    };

    FootCommander::FootCommander(int p) {
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