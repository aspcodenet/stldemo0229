#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ranges>


class Player{
public:
    typedef enum {
        PlayerType_Goalie,
        PlayerType_Defence,
        PlayerType_Forward
    }PlayerType;

    Player(){

    }

    Player(std::string name, int year,PlayerType type, int jersey)
    :name(name),year(year),type(type),jersey(jersey){
    }
    std::string getName() const{
        return name;
    }
    int getYear() const{
        return year;
    }
    int getJersey() const{
        return jersey;
    }
    PlayerType getPlayerType() const{
        return type;
    }
private:
    std::string name;
    PlayerType type;
    int year;
    int jersey;
};


int main(){

    std::vector<Player> greatPlayers{
        Player("Peter Forsberg",1973,Player::PlayerType::PlayerType_Forward,21),
        Player("Mats Sundin",1971,Player::PlayerType::PlayerType_Forward,13), 
        Player("Henrik Zetterg",1980,Player::PlayerType::PlayerType_Forward,40)
    };
    Player oneMore = Player("Peter Lindmark",1956,Player::PlayerType::PlayerType_Goalie,1);
    // 
    


    return 0;
}

