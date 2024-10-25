#include "M3x3.h"
#include "M2x2.h"
#include <iostream>
//here is the file that contains the functions and the procedures for 3by3 matrices




//Procedure for the substrations of two 3by3 matrix
//Board1 is matrix one
//Board2 is matrix two
//answer is the matrix difference
void sub3(float board[3][3],float board2[3][3],float answer[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            answer[i][j] = board[i][j] - board2[i][j];
        }
    }
}




//Procedure to transpose a 3by3 matrix
//board is the matrix to be transposed
//answer is the transposed matrix (the transpose of board)
void trans3(float board[3][3],float answer[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            answer[i][j] = board[j][i];
        }
    }
}





//Procedure to multiply two 3by3 matrices
//board is matrix one
//board2 is matrix two
//answer is their matrix product
void mul3(float board[3][3],float board2[3][3],float answer[3][3])
{
    int a = 0, b = 0;
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++)
        {
            answer[a][b] +=  board[0][j] * board2[j][i];
        }
        b++; 
    }
    a = 1;
    b = 0;
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++)
        {
            answer[a][b] +=  board[1][j] * board2[j][i];
        }
        b++; 
    }
    a = 2;
    b = 0;
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++)
        {
            answer[a][b] +=  board[2][j] * board2[j][i];
        }
        b++; 
    }
}




//Procedure to display a 3by3 matrix
//board is the matrix to be displayed
void dis3(float board[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << board[i][j] << "   " ;
            if(j == 2)
            {
                std::cout << std::endl << std::endl;
            }
        }
    }
}



//fucntion to calculate the determinant of a 3by3 matrix
//board is the matrix whose derterminant is to be found
float det3(float board[3][3])
{
  float b[2][2] = {},a = 0;

  b[0][0] = board[1][1];
  b[0][1] = board[1][2];
  b[1][0] = board[2][1];
  b[1][1] = board[2][2];

  a  += det2(b) * board[0][0];

  b[0][0] = board[1][0];
  b[0][1] = board[1][2];
  b[1][0] = board[2][0];
  b[1][1] = board[2][2];

  a -= det2(b) * board[0][1];

  b[0][0] = board[1][0];
  b[0][1] = board[1][1];
  b[1][0] = board[2][0];
  b[1][1] = board[2][1];

  a += det2(b) * board[0][2];

  return a;

}




//Procedure to initialise(fill) a 3by3 matrix
//board is the 2by matrix 
void mat3(float board[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            std::cout << "Enter the values of the first raw" << std::endl;
        }
        else if (i == 1)
        {
            std::cout << "Enter the values of the second raw" << std::endl;
        }
        else
        {
            std::cout << "Enter the values of the third raw" << std::endl;
        }
        for(int j = 0; j < 3; j++)
        {
            if(j == 0)
            {
                std::cout << "Enter the first value" << std::endl;
            }
            else if (j == 1)
            {
                std::cout << "Enter the second  value" << std::endl;
            }
            else{
                std::cout << "Enter the third value" << std::endl;
            }
            std::cin >> board[i][j];
        }
    }
    dis3(board);
}



//Procedure to sum two 3by3 matrices
//board is matrix one
//board2 is matrix two 
//answer is the matrix sum
void add3(float board[3][3],float board2[3][3],float answer[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            answer[i][j] = board[i][j] + board2[i][j];
        }
    }
}



//Fucntion to detrermine the trace of a 3by3 matrix
//board is the matrix whose trace is to be calculated
float trace3(float board[3][3])
{
    float t = 0;
    for(int i = 0; i < 3; i++)
    {
        t += board[i][i];
    }
    return t;
}




//Procedure to calculate the inverse of a 3by3 matrix
//board is the matrix whose inverse is to be calculated
void inverse3(float board[3][3])
{
    float c = det3(board);
    if ( c != 0)
    {
       float b[2][2],db[3][3],db1 [3][3],inv[3][3];

       b[0][0] = board[1][1];
       b[0][1] = board[1][2];
       b[1][0] = board[2][1];
       b[1][1] = board[2][2];

       db[0][0] = det2(b);

       b[0][0] = board[1][0];
       b[0][1] = board[1][2];
       b[1][0] = board[2][0];
       b[1][1] = board[2][2];

       db[0][1] = det2(b) * (-1);

       b[0][0] = board[1][0];
       b[0][1] = board[1][1];
       b[1][0] = board[2][0];
       b[1][1] = board[2][1];

       db[0][2] = det2(b);

       b[0][0] = board[0][1];
       b[0][1] = board[0][2];
       b[1][0] = board[2][1];
       b[1][1] = board[2][2];

       db[1][0] = det2(b) * (-1);

       b[0][0] = board[0][0];
       b[0][1] = board[0][2];
       b[1][0] = board[2][0];
       b[1][1] = board[2][2];

       db[1][1] = det2(b);

       b[0][0] = board[0][0];
       b[0][1] = board[0][1];
       b[1][0] = board[2][0];
       b[1][1] = board[2][1];

       db[1][2] = det2(b) * (-1);

       b[0][0] = board[0][1];
       b[0][1] = board[0][2];
       b[1][0] = board[1][1];
       b[1][1] = board[1][2];

       db[2][0] = det2(b);

       b[0][0] = board[0][0];
       b[0][1] = board[0][2];
       b[1][0] = board[1][0];
       b[1][1] = board[1][2];

       db[2][1] = det2(b) * (-1);

       b[0][0] = board[0][0];
       b[0][1] = board[0][1];
       b[1][0] = board[1][0];
       b[1][1] = board[1][1];

       db[2][2] = det2(b);

       trans3(db,db1);

       for(int i = 0; i < 3; i++)
       {
        for(int j = 0; j < 3; j++)
        {
            inv[i][j] = db1[i][j] / c;
        }
       }
       dis3(inv);

   }
   else
   {
    std::cout << "the matrix does not have an inverse" << std::endl;
   }
   
} 