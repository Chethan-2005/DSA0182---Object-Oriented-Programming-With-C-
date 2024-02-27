#include<iostream>
using namespace std;
int main()
{
	int n, temp, r, sum=0;
	cout<<"Enter a number:";
	cin>>n;
	temp = n;
	while(n!=0){
		r=n%10; // 153 % 15
		sum+=r*r*r; // sum = 3
		n=n/10; 
	}
	if(temp==sum){
		cout<<"It is an armstrong Number";
	}
	else{
		cout<<"It is not an armstrong number";
	}
return 0;
}
