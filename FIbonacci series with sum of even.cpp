#include<iostream>
using namespace std;
int main()
{
	int n, t1 = 0, t2 = 1, t3, i, sum = 0;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Fibonacci series:"<< t1<< " "<< t2<< " ";
	for(i=0;i<n;i++)
	{
		t3 = t1 + t2;
		cout<< t3 << " ";
		t1 = t2;
		t2 = t3;
	if(t3 % 2 == 0)
	{
		sum += t3;
	}
	}
	cout<<"\nSum of the Even Terms:"<< sum;
return 0;
}
