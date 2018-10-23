#include<iostream>
using namespace std;
class TicTacToe
{
    int matrix[3][3];
public:
    static int moveCount;
    TicTacToe()
    {
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                matrix[i][j] = 0;
    }
    void firstPlayerMove(int pos)
    {
        int row, col;
        row = pos / 3;
        col = pos - 1 - (3 * row);
        matrix[row][col] = 1;
        printMatrix();
        moveCount++;
    }
    void secondPlayerMove(int pos)
    {
        int row, col;
        row = pos / 3;
        col = pos - 1 - (3 * row);
        matrix[row][col] = 2;
        printMatrix();
        moveCount++;
    }
    bool checkRow(int row, int value)
    {
        // checks the row and returns true if all element in
        // row is equal to value, else returns false
        for(int i = 0; i < 3; i++)
        {
            if(matrix[row][i] != 1)
                return false;
        }
        return true;
    }
    bool checkCol(int col, int value)
    {
        // checks the column and returns true if all element in
        // column is equal to value, else returns false
        for(int i = 0; i < 3; i++)
        {
            if(matrix[i][col] != value)
                return false;
        }
        return true;
    }
    bool checkDraw()
    {
        if(moveCount == 9)
            return true;
        return false;
    }
    bool checkDiagonal(int shape, int value)
    {
        // checks both diagonal and returns true if all element in
        // both diagonal is equal to value, else returns false
        if(shape == 1)
        {
            for(int i = 0; i < 3; i++)
                if(matrix[i][i] != value)
                    return false;
        }
        else
        {
            for(int i = 0; i < 3; i++)
                if(matrix[i][2-i] != value)
                    return false;
        }
        return true;
    }
    bool isFirstWon()
    {
        // function to check if first player has won or not
        // checking for all rows
        for(int i = 0; i < 3; i++)
            if(checkRow(i, 1))
                return true;
        // checking for all columns
        for(int i = 0; i < 3; i++)
            if(checkCol(i, 1))
                return true;
        if(checkDiagonal(1, 1))
            return true;
        if(checkDiagonal(2, 1))
            return true;
        return false;
    }
    bool isSecondWon()
    {
        // function to check if second player has won or not
        // checking for all rows
        for(int i = 0; i < 3; i++)
            if(checkRow(i, 2))
                return true;
        // checking for all columns
        for(int i = 0; i < 3; i++)
            if(checkCol(i, 2))
                return true;
        if(checkDiagonal(1, 2))
            return true;
        if(checkDiagonal(2, 2))
            return true;
        return false;
    }
    void printMatrix()
    {
        cout<<endl;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if (matrix[i][j] != 0)
                    cout<<" "<<matrix[i][j]<<" ";
                else
                    cout<<"   ";
                if (j != 2)
                    cout<<" | ";
            }
            cout<<endl;
            if (i != 2)
                cout<<"_______________";
            cout<<endl;
        }
    }
};
