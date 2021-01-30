#include<iostream>

using namespace std;

int main(){
	//logical or op
	bool rainy=false,tooSunny=false;
	string input;
	cout<<"Is it raining ? :";
	cin>>input;
	if(input == "yes"){
		rainy = true;
	}
	
	
	cout<<"Is it too sunny ? :";
	cin>>input;
	if(input == "yes"){
		tooSunny = true;
	}
	
	
	if(rainy || !tooSunny){
		cout<<"Take the umbrella";
	}else{
		cout<<"Just go out";
	}
	
	
	//logical and op
	bool enoughMoney=false,carNeed=false;
	string input;
	cout<<"Do you need car? :";
	cin>>input;
	if(input == "yes"){
		carNeed = true;
	}
	
	cout<<"Do you have money? :";
	cin>>input;
	if(input == "yes"){
		enoughMoney = true;
	}
	
	
	if(enoughMoney && carNeed){
		cout<<"Take the customer";
	}else{
		cout<<"Sorry i cannot take u";
	}

	
	return 0;
}
