#include<bits/stdc++.h>
using namespace std;
bool zs(int a){
	for(int i=2;i<a;i++){
		if(a%i==0)
			return false;
	}
	return true;
}
int main(){
	string s;
	cin>>s;
	int a[26]={0},max=0,min=99999;
	for(int i=0;i<s.size();i++){
		a[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(a[i]>0){
			if(a[i]>max)
				max=a[i];
			if(a[i]<min)
				min=a[i];
		}
	}
	int c=max-min;
	if(zs(c))
		cout<<"Lucky Word";
	else
		cout<<"No Answer";
	return 0;
}
