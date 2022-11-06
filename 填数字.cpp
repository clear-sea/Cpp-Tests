#include<bits/stdc++.h>
using namespace std;
int main(){
	/*
	for(int a=1;a<=9;a++){
		for(int b=1;b<=9;b++){
			for(int c=1;c<=9;c++){
				if((a!=b&&b!=c&&a!=c)&&(2*a==b&&3*a==c))
					cout<<a<<b<<c<<endl;
			}
		}
	}
	*/
	int x,y,z;
	bool b[10]={0};
	for(int i=123;i<=333;i++){
		int x=i;y=2*i;z=3*i;
		memset(b,0,sizeof(b));
		b[x/100]=b[y/100]=b[z/10]=1;
		b[x%10]=b[y%10]=b[z%10]=1;
		b[x/10%10]=b[y/10%10]=b[z/10%10]=1;
		bool flag=true;
		for(int j=1;j<)
	}
	return 0;
}
