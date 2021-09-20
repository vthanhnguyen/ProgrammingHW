#ifndef GAME_H
#define GAME_H
#include <vector>
#include <string>
#include <iostream>
#include "Player.h"
#include "CPU.h"

using namespace std; //needed for string
using std::vector;

class Game
{
private:
    struct gamedata
    {
        int scorePlayer;
        int scoreCPU;
    };
    std::vector<gamedata> Rounds; //tracks score
    int roundNumber;              //tracks actual round

public:
    Game();
    string gameMatch();
    void updateRound(int result);
    int calculateResult(int pmove, int cpumove);
};
#endif /* GAME_H */
