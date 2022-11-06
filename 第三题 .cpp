#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	if(a<2){
		cout<<"不是质数";
	}
	else{
	
		for(int i=2;i<=a;i++){
			if(a%i==0){
				cout<<"不是质数";
				return 0;
			}
			else{
				cout<<"是质数";
				return 0;
			}		
		}
	}
	return 0;
}
