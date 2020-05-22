#include "Board.hpp"

namespace WarGame{
    bool Board::has_soldiers(uint pn) const {

        for(int i = 0; i < 8 ; i++){
            for(int j = 0; j < 8; j++){
                std::pair<int,int> p;
                p.first = i;
                p.second = j;
            
                if(this->operator[](p)->player==pn) return true;
            }
        }
        return false;

    }
    Soldier*& Board::operator[](std::pair<int,int> location){
        Soldier* x = new Soldier();
        board.at(location.first).at(location.second)=x;
        static Soldier*& y = x;
        return y;
        
    }

    Soldier* Board::operator[](std::pair<int,int> location) const{
        Soldier* t = board.at(location.first).at(location.second);
        if(t!=NULL) return t;
        Soldier x;
        Soldier* temp = &x;
        return temp;
        
    }

    void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){
        return;
    }






}