#include<iostream>
using namespace std;
int main(){
	int evaluationResult, amountApproved;
	
	cout<<"Enter Evaluation Result: "<<endl;
	cin>>evaluationResult;
	
		switch(evaluationResult){
			case 1:
				amountApproved=60,000;
					break;
				
			case 2:
				amountApproved=50,000;
					break;
				
			case 3:
				amountApproved=40,000;
					break;
				
			case 4:
				amountApproved=30,000;
					break;
				
			default:
				amountApproved=25,000;
					break;
				}
				cout<<"Amount Approved is "<<amountApproved<<endl;
		return 0;
}