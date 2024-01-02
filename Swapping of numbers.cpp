#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the a & b values:";
	cin>>a>>b;
	temp=b;
	b=a;
	a=temp;
	cout<<"After swapping: A="<<a<<" B="<<b<<endl;
	return 0;
}
