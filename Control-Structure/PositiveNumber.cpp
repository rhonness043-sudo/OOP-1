#include<iostream>
using namespace std;
int main(){
	int num=21;
	if(num>=0){
		cout<<"The number is Positive"<<endl;
			if(num%2==0){
					cout<<"The positive number is even"<<endl;
			}
			else if(num%2==1){
				cout<<"The positive numberis odd"<<endl;
			}
		
	}
	else{
		cout<<"the number is negative"<<endl;
	}
	return 0;
}
