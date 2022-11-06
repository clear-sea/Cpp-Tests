#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[26];
	char b,c[100000];
	cin>>c;
	for(int i=0;i<strlen(c);i++)
		a[c[i]-97]++;
	for(int i=0;i<26;i++){
		if(a[i]==1){
			b=i+97;
			cout<<b;
			return 0;
		}
	}
	cout<<"no";
	return 0;
}
