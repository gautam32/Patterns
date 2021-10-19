#include <iostream>
using namespace std;
int halfpyramid_180rotation(int n)
{
	cout<<"height of halfpyramid_180rotation:"<<n<<endl;
	for(int i=n; i>0; i--)
    {
      for(int j=0; j<=n; j++)
      {
        if (j>=i)
        {
          cout<<"*";
        }
        else
        {
          cout<<" ";
        }
      }
      cout<<endl;
    }
}
int main()
{
	/*int k;
	cout<<"Enter height of pyramid:"<<endl;
	cin>>k;
    halfpyramid_180rotation(k);*/
	halfpyramid_180rotation(5);
}
