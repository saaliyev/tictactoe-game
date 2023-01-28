#include "tictactoe.h"
#include <iostream>
using namespace std;
void tictactoe::print_table(){
    cout<<"               ";cout<<cells[0];cout<<" | "; cout<<cells[1];cout<<" | "; cout<<cells[2]; cout<<" "<<endl;
    cout<<"              ---|---|---"<<endl;
    cout<<"               ";cout<<cells[3];cout<<" | "; cout<<cells[4];cout<<" | "; cout<<cells[5]; cout<<" "<<endl;
    cout<<"              ---|---|---"<<endl;
    cout<<"               ";cout<<cells[6];cout<<" | "; cout<<cells[7];cout<<" | "; cout<<cells[8]; cout<<" "<<endl;
}
void tictactoe::start_game(){
    cout<<"Welcome to the tictactoe game! To start, enter your names please:"<<endl;
    cout<< "player 1('x'):"<<endl;
    cin>>player_1;
    cout<< "player 2('o'):"<<endl;
    cin>>player_2;
game:
    turn=0;
    cells[0]='1';
    cells[1]='2';
    cells[2]='3';
    cells[3]='4';
    cells[4]='5';
    cells[5]='6';
    cells[6]='7';
    cells[7]='8';
    cells[8]='9';
    marks[0]='x';
    marks[1]='o';
    for(int i=0; i<9; i++){
        marked[i]=false;
    }
    while(1){
    print_table();
    if(turn%2 + 1 ==1) cout<<player_1<<"'s turn"<<endl;
    else cout<<player_2<<"'s turn"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        if(marked[0]){
            cout<<"this cell is already occupied, try another one ! "<<endl;
            turn--;
            break;
        }
            cells[0]=marks[turn%2];
            marked[0]=true;
            break;
        case 2:
        if(marked[1]){
            cout<<"this cell is already occupied, try another one ! "<<endl;
            turn--;
            break;
        }
            cells[1]=marks[turn%2];
            marked[1]=true;
            break;
        case 3:
        if(marked[2]){
            cout<<"this cell is already occupied, try another one ! "<<endl;
            turn--;
            break;
        }
            cells[2]=marks[turn%2];
            marked[2]=true;
            break;
        case 4:
        if(marked[3]){
            cout<<"this cell is already occupied, try another one ! "<<endl;
            turn--;
            break;
        }
            cells[3]=marks[turn%2];
            marked[3]=true;
            break;
        case 5:
        if(marked[4]){
            cout<<"this cell is already occupied, try another one ! "<<endl;
            turn--;
            break;
        }
            cells[4]=marks[turn%2];
            marked[4]=true;
            break;
        case 6:
        if(marked[5]){
            cout<<"this cell is already occupied, try another one ! "<<endl;
            turn--;
            break;
        }
            cells[5]=marks[turn%2];
            marked[5]=true;
            break;
        case 7:
        if(marked[6]){
            cout<<"this cell is already occupied, try another one ! "<<endl;
            turn--;
            break;
        }
            cells[6]=marks[turn%2];
            marked[6]=true;
            break;
        case 8:
        if(marked[7]){
            cout<<"this cell is already occupied, try another one ! "<<endl;
            turn--;
            break;
        }
            cells[7]=marks[turn%2];
            marked[7]=true;
            break;
        case 9:
        if(marked[8]){
            cout<<"this cell is already occupied, try another one ! "<<endl;
            turn--;
            break;
        }
            cells[8]=marks[turn%2];
            marked[8]=true;
            break;
        default:
            turn--;
            cout<<"you can only use aviable slots from 1,2,3,4,5,6,7,8,9"<<endl;
    }
    if((cells[0]==cells[3] && cells[0]==cells[6]) || (cells[1]==cells[4] && cells[1]==cells[7]) || (cells[2]==cells[5] && cells[2]==cells[8]) || (cells[0]==cells[4] && cells[0]==cells[8]) || (cells[2]==cells[4] && cells[2]==cells[6]) || (cells[0]==cells[1] && cells[0]==cells[2])||(cells[3]==cells[4] && cells[3]==cells[5])|| (cells[6]==cells[7] && cells[6]==cells[8])){
        print_table();
        if(turn%2 +1 == 1) cout<<player_1<<" won!"<<endl;
        else cout<<player_2<<" won!"<<endl;
        break;
    }
    if(turn==8){
        print_table();
        cout<<"draw"<<endl;
        break;
    }
    turn++;
    
}
    cout<<"for replay, please type y"<<endl;
    cin>>replay;
    if(replay=='y') goto game;
}
