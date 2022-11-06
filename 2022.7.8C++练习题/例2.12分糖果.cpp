#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	a/=3;b+=a;e+=a;
	b/=3;a+=b;c+=b;
	c/=3;b+=c;d+=c;
	d/=3;c+=d;e+=d;
	e/=3;a+=e;d+=e;
	printf("%5d%5d%5d%5d%5d",a,b,c,d,e);
	return 0;
} 
