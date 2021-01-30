#include<iostream>

using namespace std;

int main(){
	bool enoughMoney=false,carNeed=false;
	string input;
	cout<<"Do you need car? :";
	cin>>input;
	if(input == "yes"){
		carNeed = true;
	}
	
	cout<<"Do you have money? :";
	cin>>input;
	
	if(enoughMoney){
	
		if(carNeed){
			cout<<"Take the customer";
		}else{
			cout<<"Dont take the customer";
		}
		
	}
	
	if(input == "yes"){
		enoughMoney = true;
	}
	
	
	
	return 0;
}
