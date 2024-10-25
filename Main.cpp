#include <iostream>
#include "M3x3.h"
#include "M2x2.h"

int main ()
{
   int choice;
   std::cout << " Do you want to treate a 2x2 and 3x3" << std::endl << "Enter 1 for 2x2 and 0 for 3x3" << std::endl;
   std::cin >> choice;
   if(choice !=0 && choice != 1)
   {
      std::cout << "Enter 1 for 2x2 and 0 for 3x3" << std::endl;
   }

   //Here will compute all the calculation for 2by2 matrices

   if(choice == 1)
   {
      float b1[2][2],b2[2][2],a[2][2] = {};
      std::cout << "For the first matrix" << std::endl;
      mat2(b1);
      std::cout << "For the second matrix" << std::endl;
      mat2(b2);
      std::cout << "The transpose of matrix 1" << std::endl;
      trans2(b1,a);
      dis2(a);
      std::cout << "The transpose of matrix 2" << std::endl;
      trans2(b2,a);
      dis2(a);  
      std::cout << "The trace of matrix 1" << std::endl;
      std::cout << trace2(b1) << std::endl; 
      std::cout << "The trace of matrix 2" << std::endl;
      std::cout << trace2(b2) << std::endl;
      std::cout << "the determinant of matrix 1" << std::endl;
      std::cout << det2(b1) << std::endl;
      std::cout << "the determinant of matrix 2" << std::endl;
      std::cout << det2(b2) << std::endl;
      std::cout << "Their sum is:" << std::endl;
      add2(b1,b2,a);
      dis2(a);
      std::cout << "Their difference is:" << std::endl;
      sub2(b1,b2,a);
      dis2(a);
      std::cout << "Their product is:" << std::endl;
      mul2(b1,b2,a);
      dis2(a);
      std::cout << "The inverse of matrix 1" << std::endl;
      inverse2(b1);
      std::cout << "The inverse of matrix 2" << std::endl;
      inverse2(b2);
  }
  
  //Here will compute all the calculation for 3by3 matrices

  else
  {
      float b1[3][3],b2[3][3],a[3][3] = {};
      std::cout << "For the first matrix" << std::endl;
      mat3(b1);
      std::cout << "For the second matrix" << std::endl;
      mat3(b2);
      std::cout << "The transpose of matrix 1" << std::endl;
      trans3(b1,a);
      dis3(a);
      std::cout << "The transpose of matrix 2" << std::endl;
      trans3(b2,a);
      dis3(a);
      std::cout << "The trace of matrix 1" << std::endl;
      std::cout << trace3(b1) << std::endl; 
      std::cout << "The trace of matrix 2" << std::endl;
      std::cout << trace3(b2) << std::endl;
      std::cout << "the determinant of matrix 1" << std::endl;
      std::cout << det3(b1) << std::endl;
      std::cout << "the determinant of matrix 2" << std::endl;
      std::cout << det3(b2) << std::endl;
      std::cout << "The inverse of matrix 1" << std::endl;
      inverse3(b1);
      std::cout << "The inverse of matrix 2" << std::endl;
      inverse3(b2);
      std::cout << "Their sum is:" << std::endl;
      add3(b1,b2,a);
      dis3(a);
      std::cout << "Their difference is:" << std::endl;
      sub3(b1,b2,a);
      dis3(a);
      std::cout << "Their product is:" << std::endl;
      mul3(b1,b2,a);
      dis3(a);
  }
   return 0;
}

// so this i our main
// lets execute 
