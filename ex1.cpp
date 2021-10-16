#include<iostream>
using namespace std;


void User(){
	int num , sum = 0 , numOfEntrence , i=0;
	cout<<"enter how many entrence you wanna add here"<<endl;
	cin>>numOfEntrence;
	while(i<numOfEntrence)
	{
		cout<<"please enter a number"<<endl;
		cin>>num;
		sum+=num;
		i++;
	}
	cout<<"the result is"<<endl<<sum<<endl;
		
}

int main()
{
	while(true){
			int userChoice;
	cout<<"please choose a number"<<endl<<"1->enter a number"<<endl<<"2->exit"<<endl;
	cin>>userChoice;
	
	if (userChoice == 1){
		User();
	}
	else{
		break;
	}
	}

	return 0;
}