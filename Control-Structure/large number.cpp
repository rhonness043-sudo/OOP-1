#include<iostream>
using namespace std;
int main(){
	int x,y,large;
	
	cout<<"Enter The Two Intergers: "<<endl;
	cin>>x>>y;
	
	if(x>y){
		large=x;
	}
	else{
		large=y;
	}
	cout<<"The largest between x and y"<<large<<endl;
	
	return 0;
}