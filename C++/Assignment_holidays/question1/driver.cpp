#include<iostream>
#include"tictactoe.cpp"
using namespace std;
int TicTacToe :: moveCount = 0;
int movesPlayed[9];
void guideMap()
{
    // guide for getting the move as input
    cout<<"\nThe guide to enter the moves : \n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<" "<<i*3 + j + 1<<" ";
            if (j != 2)
                cout<<" | ";
        }
        cout<<endl;
        if (i != 2)
            cout<<"_______________";
        cout<<endl;
    }
}
int get_move()
{
    // function to get the moves until valid move is given
    int move;
    cout<<"\nEnter move : ";
    cin>>move;
    if (move > 9 || move < 1)
    {
        cout<<"Invalid move";
        move = get_move();
    }
    else
    {
        for(int i = 0; i < TicTacToe::moveCount; i++)
            if(move == movesPlayed[i])
            {
                cout<<"Move already played";
                move = get_move();
                break;
            }
    }
    movesPlayed[TicTacToe::moveCount] = move;
    return move;
}
int main()
{
    guideMap();
    int move;
    TicTacToe T;
    cout<<"The game has started.\n";
    while(true)
    {
        // first player takes the chance
        cout<<"For First Player";
        move = get_move();
        T.firstPlayerMove(move);
        // if first wins
        if(T.isFirstWon())
        {
            cout<<"First Player Won.\n";
            break;
        }
        // checking if match is draw
        if(T.checkDraw())
        {
            cout<<"Match is draw.\n";
            break;
        }
        // second player takes the chance
        cout<<"For Second Player ";
        move = get_move();
        T.secondPlayerMove(move);
        // if second wins
        if(T.isSecondWon())
        {
            cout<<"Second Player Won.\n";
            break;
        }
        // checking if match is draw
        if(T.checkDraw())
        {
            cout<<"Match is draw.\n";
            break;
        }
    }
}
