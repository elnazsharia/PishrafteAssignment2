#include<iostream>
using namespace std;

int main(){
	int h,m,s;
	cout<<"please enter hours"<<endl;
	cin>>h;
	cout<<"please enter minuts"<<endl;
	cin>>m;
	cout<<"please enter seconds"<<endl;
	cin>>s;
	int seconds = h*3600+m*60+s;
	cout<<"the result is"<<" "<<seconds<<endl;
	
	return 0;
}