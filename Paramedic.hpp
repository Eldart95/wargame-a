#pragma once
#include "Soldier.hpp"
namespace WarGame {
    class Paramedic : public Soldier{
        public:
        Paramedic(int pn): Soldier(100, pn, 0){}

    };
}