#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c;
	cin>>n;
	a=n%10;
	b=n/10%10;
	c=n/100;
	printf("%d%d%d",a,b,c);
	return 0;
}
