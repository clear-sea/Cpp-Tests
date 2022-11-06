#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	for(int i=1;i<=5;i+=2){
		for(int a=1;a<=(5-i)/2;a++){
			cout<<' ';
		}
		for(int b=1;b<=i;b++){
			cout<<ch;
		}
		for(int c=1;c<=(5-i)/2;c++){
			cout<<' ';
		}
		cout<<endl;
	}
	for(int i=3;i>=1;i-=2){
		for(int a=1;a<=(5-i)/2;a++){
			cout<<' ';
		}
		for(int b=1;b<=i;b++){
			cout<<ch;
		}
		for(int c=1;c<=(5-i)/2;c++){
			cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}
