#include "Board.hpp"

namespace WarGame{
    bool Board::has_soldiers(uint pn) const {

        for(int i = 0; i < 8 ; i++){
            for(int j = 0; j < 8; j++){
                std::pair<int,int> p;
                p.first = j;
                p.second = i;
            
                if(this->operator[](p)->player==pn) return true;
            }
        }
        return false;


    }
    Soldier*& Board::operator[](std::pair<int,int> location){
        Soldier* x = new Soldier();
        board.at(location.first).at(location.second)=x;
        static int count = 0;
        if(count<=4){
            x->player=1;
            count++;
        }
        else if (count>4) x->player=2;
        static Soldier*& y = x;
        return y;
        
    }

    Soldier* Board::operator[](std::pair<int,int> location) const{
        if(board.at(location.first).at(location.second)==nullptr){
            Soldier x;
            Soldier*y = &x;
            return y;
        }
        return board.at(location.first).at(location.second);
        
    }

    void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){
        return;
    }






}