#include<iostream>
using namespace std;

int main(){
	int n,b;cin>>n;
	int s[n]={1,1};
	
	for(int i=0;i<n;i++){
		s[i+2]=s[i]+s[i+1];
	}
	for(int j=0;j<n;j++){
		b+=s[j];
	}
	cout<<b;
	return 0;
}
