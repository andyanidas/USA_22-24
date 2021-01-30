#include<iostream>

using namespace std;

int main(){
	int x = 55;
	
	cout<<"---------------without else---------------------"<<endl;
	if(x>100){
		cout<<"Greater than 100"<<endl;
	}
	if(x>50){
		cout<<"Greater than 50"<<endl;
	}
	if(x>10){
		cout<<"Greater than 10"<<endl;
	}
	if(x>5){
		cout<<"Greater than 5"<<endl;
	}
	
	cout<<"---------------with else---------------------"<<endl;

	if(x>100){
		cout<<"Greater than 100"<<endl;
	}else if(x>50){
		cout<<"Greater than 50"<<endl;
	}else if(x>10){
		cout<<"Greater than 10"<<endl;
	}else if(x>5){
		cout<<"Greater than 5";
	}
	
	return 0;
}
