#include <iostream>
using namespace std;
class tictactoe{
    public:
        char cells[9];
        string player_1, player_2 ;
        char marks[2];
        short turn=0;
        short choice;
        bool marked[9];
    public:
        void start_game();
};
