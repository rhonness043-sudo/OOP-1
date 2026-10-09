#include <iostream>
using namespace std;
int main(){
float gpoint;
 char letterGrade;
 cout<<"Input a letter grade:"<<endl;
 cin>>letterGrade;
 switch(letterGrade){
 case 'A':
 case 'a': 
 			 gpoint=4.0;
			   break;
 case 'B': 
 case 'b':
 			gpoint=3.0; 
			 break;
 case 'C': 
 case 'c':
 			gpoint=2.0;
			  break;
 case 'D': 
 case 'd':
 			gpoint=1.0;
			  break;
 case 'F': 
 case 'f':
 			gpoint=0.0;
			  break;
 default : gpoint=-1.0;
 }

 if (gpoint <0)
 cout<<"You have entered an invalid letter grade";
 else
 cout<<"The grade point is:"<<gpoint;
 cout<<endl;
 return 0;
}
 