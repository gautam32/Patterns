#include <iostream>
using namespace std;
void invertedpyramid_180rotation(int n)
{
	cout<<"invertedpyramid_180rotation:"<<endl;
    int k = 2 * n - 2;
    // number of rows
    // n in this case
    for (int i = n; i > 0; i--)
	 {
        //loop for spaces
        for (int j = 0; j < n-i; j++)
            cout << "  ";
        // Decrementing k after each loop
        k = k - 2;
 
        // number of columns
        for (int j = 0; j < i; j++) 
		{
            // Printing stars
            cout << "* ";
        }
		cout<<endl;//newline
       
    }
}
int main()
{
	/*int k;
	cout<<"Enter height of pyramid:"<<endl;
	cin>>k;
	invertedpyramid_180rotation(k);*/
    int n = 5;
    invertedpyramid_180rotation(n);
    return 0;
}
