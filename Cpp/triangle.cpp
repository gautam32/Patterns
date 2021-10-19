#include <iostream>
using namespace std;
void triangle(int n)
{
	cout<<"triangle:\n"<<endl;
    int k = 2 * n - 2;
    //  number of rows
    // n in this case
    for (int i = 0; i < n; i++)
	 {
        for (int j = 0; j < k; j++)// number of spaces
            cout << " ";
        k = k - 1; // Decrementing k after each loop
        for (int j = 0; j <= i; j++)//  number of columns
		 {
            // Printing stars
            cout << "* ";
         }
        cout << endl;//newline
    }
}
int main()
{
	/*int k;
	cout<<"Enter size:"<<endl;
	cin>>k;
    triangle(k);*/
    int n = 5;
    triangle(n);
    return 0;
}
