#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	char c;
	cin>>a>>b>>c;
	switch(c){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			if(b==0)
				cout<<"Divided by zero!";
			else
				cout<<a/b;
			break;
		default:
			cout<<"Invalid operator!";
			break;
	}
	return 0;
}
