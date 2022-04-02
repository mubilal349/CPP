#include<iostream>
using namespace std;
int main(){
	       int i,n;
	       cout<<"enter your number you want:"<<endl;
	       cin>>n;
	       for(i=2;i<=n;i=i+2){
	       	cout<<"even numbers are:"<<i<<endl;
	       	 for(i=1;i<=n;i=i+2){
	       	cout<<"odd numbers are:"<<i<<endl;
	       }
		   }
		   int sum;
		   sum=i+n;
		   cout<<"the result of odd and even numbers are:"<<sum<<endl;
		   float average;
		   average=sum/2;
		   cout<<"the average of odd and even number are:"<<average<<endl;
		   return 0;
}
