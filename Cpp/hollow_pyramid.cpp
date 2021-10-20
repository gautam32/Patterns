//Hollow pyramid using C++ program

#include<iostream>
using namespace std;

int main()
{
   int rows, i, j, space;
   cout << "Enter the number of rows: ";
   cin >> rows;

   for(i = 1; i <= rows; i++)
   {
      //This for loop will create spaces in the pyramid
      for (space = i; space < rows; space++)
         cout << " ";

      //This for loop will print the stars 
      for(j = 1; j <= (2 * rows - 1); j++)
      {
         if(i == rows || j == 1 || j == 2*i - 1)
            cout << "*";
         else
            cout << " ";
      }
      cout << "\n";
   }
   return 0;
}