#include<iostream>

using namespace std;

int main(){
	int a;
	cout<<"Enter an integer: ";
	cin>>a;
	
	if(a>0){
		cout<<"Positive";
	}else if(a == 0){
		cout<<"Zero";
	}else{
		cout<<"Negative";
	}
	
	
	
	return 0;
}
