#include<iostream>

using namespace std;

int main(){
	string name;
	int age;
	
	cout<<"Enter you name :";
	cin>>name;
	cout<<"Enter your age :";
	cin>>age;
	name = name + " bold";
	
	cout<<"Hello "<<name<<" your age is "<<age;
	
	
	return 0;
}
