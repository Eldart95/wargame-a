#pragma once

#include "Soldier.hpp"
namespace WarGame{
    class SniperCommander : public Soldier{
    public:
        SniperCommander(int pn):Soldier(120,pn,100){}

    };
}