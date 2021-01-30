#include<iostream>

using namespace std;

int main(){
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	
	
	
	
	if(number>10000){
		cout<<"you r rich";
	}else if(number>1000){
		cout<<"u r not that much rich";
	}else if(number>100){
		cout<<"you are poor";
	}else{
		cout<<"you are very poor";
	}
	
	return 0;
}
