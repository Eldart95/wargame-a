#pragma  once

#include "Soldier.hpp"
namespace WarGame{
    class Sniper : public Soldier{
    public:
        Sniper(int pn) : Soldier(100,pn,50){}

    };
}