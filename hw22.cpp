#include<iostream>

using namespace std;

int main(){
	int a,b,c;	// 10 20 30
	cout<<"Enter three integer numbers: ";
	cin>>a>>b>>c;
	
	if(a>b){
		if(a>c){
			cout<<"Max = "<<a;
		}else{
			cout<<"Max = "<<c;
		}
	}else{
		if(b>c){
			cout<<"Max = "<<b;
		}else{
			cout<<"Max = "<<c;
		}
	}
	
	if(a>b && a>c){
		cout<<"Max = "<<a;
	}else if(a>b && c>a){
		cout<<"Max = "<<c;
	}else if(a<b && b>c){
		cout<<"Max = "<<b;
	}else if(a<b && c>b){
		cout<<"Max = "<<c;
	}
	
	
	return 0;
}
