#include "M2x2.h"
#include <iostream>
//here is the file that contains the functions and the procedures for 2by2 matrices

//Procedure for the substrations of two 2by2 matrix
//Board1 is matrix one
//Board2 is matrix two
//answer is the matrix difference

void sub2(float board[2][2],float board2[2][2],float answer[2][2])
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            answer[i][j] = board[i][j] - board2[i][j];
        }
    }
}


//Procedure to transpose a 2by2 matrix
//board is the matrix to be transposed
//answer is the transposed matrix (the transpose of board)

void trans2(float board[2][2],float answer[2][2])
{
    
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            answer[i][j] = board[j][i];
        }
    }
}



//Procedure to multiply two 2by2 matrices
//board is matrix one
//board2 is matrix two
//answer is their matrix product

void mul2(float board[2][2],float board2[2][2],float answer[2][2] ={})
{
    int a = 0, b = 0;
    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 2; j++)
        {
            answer[a][b] +=  board[0][j] * board2[j][i];
        }
        b++; 
    }
    a = 1;
    b = 0;
    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 2; j++)
        {
            answer[a][b] +=  board[1][j] * board2[j][i];
        }
        b++; 
    }
}



//Procedure to display a 2by2 matrix
//board is the matrix to be displayed
void dis2(float board[2][2])
{
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << board[i][j] << "   ";
            if(j == 1)
            {
                std::cout << std::endl << std::endl;
            }
        }
    }
}




//fucntion to calculate the determinant of a 2by2 matrix
//board is the matrix whose derterminant is to be found
float det2(float board[2][2])
{
    int a = 1 ,b = 1;
    for (int i = 0; i < 2; i++)
    {
        a *= board[i][i];
    }
     int x = 0;
    for (int i = 1; i >= 0 ; i--)
    {
        b *= board[x][i];
        x++;
    }
    return a - b;
}




//Procedure to initialise(fill) a 2by2 matrix
//board is the 2by matrix 
void mat2(float board[2][2])
{
    for(int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            std::cout << "Enter the values of the first raw " << std::endl;
        }
        else
        {
            std::cout << "Enter the values of the second raw" << std::endl;
        }
        for(int j = 0; j < 2; j++)
        {
            if(j == 0)
            {
                std::cout << "Enter the first value" << std::endl;
            }
            else
            {
                std::cout << "Enter the second  value" << std::endl;
            }
            std::cin >> board[i][j];
        }
    }
    dis2(board);
}




//Procedure to sum two 2by2 matrices
//board is matrix one
//board2 is matrix two 
//answer is the matrix sum


void add2(float board[2][2],float board2[2][2],float answer[2][2])
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            std::cout << answer[i][j] << std::endl;
            std::cout << board[i][j] << std::endl;
            std::cout << board2[i][j] << std::endl;
            answer[i][j] = board[i][j] + board2[i][j];
            std::cout << answer[i][j] << std::endl;
        }
    }
}





//Fucntion to detrermine the trace of a 2by2 matrix
//board is the matrix whose trace is to be calculated


float trace2(float board[2][2])
{
    float t = 0;
    for(int i = 0; i < 2; i++)
    {
        t += board[i][i];
    }
    return t;
}




//Procedure to calculate the inverse of a 2by2 matrix
//board is the matrix whose inverse is to be calculated

void inverse2(float board[2][2])
{
    float temp,ab[2][2];
    float a = det2(board);
    if(a != 0)
    {
    temp = board[0][0];
    board[0][0] = board[1][1];
    board[1][1] = temp;
    board[0][1] = board[0][1] * (-1);
    board[1][0] = board[1][0] * (-1);

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            ab[i][j] = board[i][j] / a;
        }
    }
    dis2(ab);
    }
    else
    {
        std::cout << "the matrix does not have an inverse";
    }
}

// here are the function and procedures for a 2x2 matrice

