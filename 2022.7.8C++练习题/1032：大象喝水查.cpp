#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,r,nums;
	float pi=3.1415,S,V;
	cin>>h>>r; 
	S=pi*r*r;
	V=h*S;
	nums=(int)(20000.0/V)+1;
	cout<<nums;
	return 0;
}
