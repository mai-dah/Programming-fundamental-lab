#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter the size of the array "<<endl;
	cin>>size;
	char alpha[size];
	for(int i=0;i<size;i++)
	{
		cout<<"enter an alphabet "<<i<<endl;
		cin>>alpha[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<"the alphabet you entered are: "<<alpha[i]<<endl;
	}
	return 0;
}
