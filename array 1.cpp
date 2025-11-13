#include<iostream>
using namespace std;
int main()
{
	char alpha[8];
	for(int i=0;i<8;i++)
	{
		cout<<"enter an alphabet "<<i<<endl;
		cin>>alpha[i];
	}
	for(int i=0;i<8;i++)
	{
		cout<<"the alphabet you entered is: "<<alpha[i]<<endl;
	}
	return 0;
}

