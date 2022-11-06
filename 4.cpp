#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100],b[100];
	int s=0;
	cin>>a;
	for(int i=strlen(a)-1;i>=0;i--){
		b[s]=a[i];
		s++;
	}
	cout<<b<<endl;
	if(a==b)
		cout<<(a==b);
	else if(a!=b)
		cout<<(a==b);
	return 0;
}
