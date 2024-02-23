#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	if(n % 10 == 7){
		cout<<"It is a BUZZ NUMBER";
	}
	else if(n % 7 == 0){
		cout<<"It is a BUZZ NUMBER";
	}
	else{
		cout<<"It is Not a BUZZ NUMBER";
	}
	return 0;
}
