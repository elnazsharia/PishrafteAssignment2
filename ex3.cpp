#include<iostream>
using namespace std;

int main(){
	int hours,minutes,seconds;
	cout<<"please enter seconds you want to convert to the hours and minutes"<<endl;
	cin>>seconds;
	minutes = seconds / 60;
	hours= minutes/60;
	
	cout<<"the seconds you enterd is"<<" "<<hours<<"hours"<<" "<<"and"<<" "<<minutes<<"minutes"<<endl;
	
	return 0;
	
	}