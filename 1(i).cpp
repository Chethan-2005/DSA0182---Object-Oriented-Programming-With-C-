#include<iostream>
using namespace std;
int main()
{
	float C,F;
	cout<<"Enter the Temperature in Celcius:";
	cin>>C;
	F = (C*9.0) / 5.0 + 32;
	cout<<"Temperature in Fahrenheit:"<<F;
	return 0;
}
