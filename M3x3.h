#ifndef __M3X3_H__
#define __M3X3_H__

void sub3(float board[3][3],float board2[3][3],float answer[3][3]);
void trans3(float board[3][3],float answer[3][3]);
void mul3(float board[3][3],float board2[3][3],float answer[3][3]);
void dis3(float board[3][3]);
float det3(float board[3][3]);
void mat3(float board[3][3]);
void add3(float board[3][3],float board2[3][3],float answer[3][3]);
float trace3(float board[3][3]);
void inverse3(float board[3][3]);

#endif
