#include <iostream>
using namespace std;
void invertedpyramid(int n)
{
	cout<<"inverted pyramid:"<<endl;
    //number of rows
    for (int i = n; i > 0; i--) 
	{
        // number of columns
        for (int j = 0; j < i; j++) //for j less than i
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
	cout<<"Enter height of pyramid:"<<endl;
	cin>>k;
	invertedpyramid(k);*/
    int n = 5;
    invertedpyramid(n);
    return 0;
}
