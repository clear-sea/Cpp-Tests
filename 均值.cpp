#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double s=0,x,ave;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		s+=x;
	}
	ave=s/n;
	printf("%.4f",ave);
	return 0;
}
