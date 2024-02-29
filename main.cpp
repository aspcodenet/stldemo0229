#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
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

         //1000  1004           1008            1012           1016                      1020
// array   1,     3,           333             453543,        543534,                  543543
// insert pos 2 , 333          


// LIST    - implementera std::list 
// - implementera std::queue
// - implementera std::stack

int main(){

    std::queue<std::string>  printerQueue;

    printerQueue.push("https://blabla.se");
    printerQueue.push("https://blabla2.se");
    printerQueue.push("https://blabla3.se");

    while(printerQueue.size()){
        std::string s = printerQueue.front(); // PEEK
        //print(s)
         printerQueue.pop();
    }
    



    // std::stack<std::string>  history;

    // history.push("https://blabla.se");
    // history.push("https://blabla2.se");
    // history.push("https://blabla3.se");
    
    // history.pop(); // back!   "https://blabla3.se" försvinner
    // std::string newUrl =  history.top(); // https://blabla2.se
    




    std::list<Player> greatPlayers{
        Player("Peter Forsberg",1973,Player::PlayerType::PlayerType_Forward,21),
        Player("Mats Sundin",1971,Player::PlayerType::PlayerType_Forward,13), 
        Player("Henrik Zetterberg",1980,Player::PlayerType::PlayerType_Forward,40)
    };
    Player oneMore = Player("Peter Lindmark",1956,Player::PlayerType::PlayerType_Goalie,1);
    
    //Player &p = greatPlayers.
    //greatPlayers.insert(12, oneMore);
    //greatPlayers.insert(std::begin(greatPlayers), oneMore);
    //greatPlayers.push_back(oneMore);
    //greatPlayers.insert()

    // 
    


    return 0;
}

