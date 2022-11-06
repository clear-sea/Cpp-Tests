#include<bits/stdc++.h>
using namespace std;
int main(){
	int fb[50]={1,1},k;
	cin>>k;
	for(int i=2;i<k;i++)
		fb[i]=fb[i-1]+fb[i-2];
	cout<<fb[k-1];
	return 0; 
}
