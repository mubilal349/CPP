#include<iostream>
using namespace std;
int main(){
	int Maths,Physics,English,Islamyat,ICT,Programming;
	cout<<"enter your Maths marks:";
	cin>>Maths;
	cout<<"enter your Physics marks:";
	cin>>Physics;
	cout<<"enter your English marks:";
	cin>>English;
	cout<<"enter your Islamyat marks:";
	cin>>Islamyat;
	cout<<"enter your ICT marks:";
	cin>>ICT;
	cout<<"enter your Programming marks:";
	cin>>Programming;
	 
	 char op;
	 cout<<"enter your option:";
	 cin>>op;
	 switch(op){
	 	case'1':
	 		cout<<"your grade is A1"<<endl;
	 		break;
	 	case'2':
	 		cout<<"your grade is A"<<endl;
	 		break;
	 	case'3':
	 		cout<<"your grade is B"<<endl;
	 		break;
		case'4':			
	 		cout<<"your grade is C"<<endl;
	 		break;
	 	case'5':
	 		cout<<"your grade is D"<<endl;
	 		break;
	 	case'6':
	 		cout<<"your grade is E"<<endl;
	 		break;
	 		default:
	 			cout<<"enter your correct option:"<<endl;
	 }
	 int total;
	 total=Maths+Physics+English+Islamyat+ICT+Programming;
	 cout<<"your total is:"<<total<<endl;
	  total=6;
	 float percentage;
	 percentage=(Maths+Physics+English+Islamyat+ICT+Programming)/total;
	       cout<<"your percentage is:%"<<percentage<<endl;
	}
