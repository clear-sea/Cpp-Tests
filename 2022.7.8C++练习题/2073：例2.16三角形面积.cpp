#include<bits/stdc++.h>
using namespace std;
int main(){
	float S,a,b,c,p;
	cin>>a>>b>>c;
	if(a+b>c&&a-b<c){
		p=(a+b+c)/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.3f",S);
	}
	return 0;
}
