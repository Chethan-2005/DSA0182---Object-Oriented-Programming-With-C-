#include<iostream>
using namespace std;
int main()
{
	int a,b,Q,R;
	cout<<"Enter the Numbers 1 & 2: ";
	cin>>a>>b;
	Q = a / b;
	R = a % b;
	cout<<"Quotient: "<<Q<<endl;
	cout<<"Remainder: "<<R<<endl;
	return 0;
}
