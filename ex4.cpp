#include<iostream>
using namespace std;

int main(){
	int students, avrage =0 , score , sum=0;
	cout<<"please enter the number of students"<<endl;
	cin>>students;
	for(int i=0;i<students; i++){
		cout<<"plesase enter the score of the pishrafte lesson"<<" ";
		cin>>score;
		sum+=score;
	}
	avrage = sum/students;
	cout<<"the avrage is"<<" "<<avrage<<endl;
	
	return 0;
}