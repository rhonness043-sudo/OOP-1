#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3, sum;
	double average;
	cout<<"Enter three intergers: "<<endl;
	cin>>num1>>num2>>num3;
	
	sum=(num1+num2+num3);
	average=(sum)/3;
	
	cout<<"The Average of the three intergers is: "<<average<<endl;
	

	return 0;
}