#include<iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"enter your 1st no:"<<endl;
	cin>>a;
		cout<<"enter your 2nd no:"<<endl;
	cin>>b;
	char op;
	cout<<"enter your operator you want:+,-,*,/"<<endl;
	cin>>op;
	switch(op){
		case'+':
			cout<<a<<"+"<<b<<"="<<a+b<<endl;
			break;
		case'-':
			cout<<a<<"-"<<b<<"="<<a-b<<endl;
			break;
		case'*':
			cout<<a<<"*"<<b<<"="<<a*b<<endl;
			break;
		case'/':
			cout<<a<<"/"<<b<<"="<<a/b<<endl;
			break;
			default:
				cout<<"enter your correct operator:"<<endl;
	}
}
