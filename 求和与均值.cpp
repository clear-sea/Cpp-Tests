#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s=0,x;
	double ave;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		s+=x;
	}
	cout<<s<<' ';
	ave=s*1.0/n;
	printf("%.5f",ave);
	return 0;
}
