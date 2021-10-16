#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;

int main() 
{ 
    srand((unsigned)time(0)); 
    int i;
    i = (rand()%6)+1; 
    cout << i << "\n"; 
    
    if (i == 6){
    	srand((unsigned)time(0)); 
    	i = (rand()%6)+1; 
    	cout << i << "\n"; 
	}
	else{
		cout<<"bad luck"<<endl;
	}
}