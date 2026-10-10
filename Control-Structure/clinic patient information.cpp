// A C++ program that declares patient information and asks the doctor to enter patient information and display it

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int age;
	double weight;
	string name, eyeColour, skinColour, hairColour;
	
		cout<<"Enter Patient's Name:\n";
		getline (cin, name);
			
		cout<<"Enter Patient's Age:\n";
		cin>>age;
			
		cout<<"Enter Patient's Weight (Kg):\n";
		cin>>weight;
			
		cout<<"Enter Patient's SkinColour (Browm/Light/Dark):\n";
		cin>>skinColour;
			
		cout<<"Enter Patient's EyeColour (Brown/Hezel/Grey):\n";
		cin>>eyeColour;
			
		cout<<"Enter Patient's HairColour (Black/Brown/Blonde):\n";
		cin>>hairColour;
		
	if (skinColour!="Brown" && skinColour!="Light" && skinColour!="Dark"){
	cout<<"Invalid SkinColour";
}
   
	if (eyeColour!="Brown" && eyeColour!="Hezel" && eyeColour!="Grey"){
		cout<<"Invalid EyeColour";
}

	if (hairColour!="Black" && hairColour!="Brown" &&hairColour!="Blonde"){
	cout<<"Invalid HairColour";
}
			
			cout<<"\n Patient's Information\n";
		cout<<"\nName:"<<name;
     	 	 cout<<"\nAge: "<<age;
cout<<"\nWeight:"<<weight;
cout<<"\nSkinColour:"<<skinColour;
			cout<<"\nEyeColour:"<<eyeColour;
cout<<"\nHairColour:"<<hairColour<<endl;
			
			return 0;
		
	
}
