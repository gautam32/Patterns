#include<iostream>
using namespace std;
void halfpyramid(int n)
{
	cout<<"height of halfpyramid:"<<n<<endl;
    int i, j;
    for (i=0; i<=n; i++)
    {
        for (j=1; j<=i; j++)
            cout << "* ";
             
        cout << "\n";
    }
}
int main()
{
	
	/*int k;
	cout<<"Enter height of pyramid:"<<endl;
	cin>>k;
	halfpyramid(k);*/
	halfpyramid(5);
	
}
