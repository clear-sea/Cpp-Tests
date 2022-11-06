#include<bits/stdc++.h>
using namespace std;
int main(){
	string result[10000];
	int n,a,b;
	float x,y;
	cin>>n;
	cin>>a>>b;
	x=b*1.0/a;
	for(int i=1;i<n;i++){
		cin>>a>>b;
		y=b*1.0/a;
		if(y-x>0.05)
			result[i-1]="better";
		else if(x-y>0.05)
			result[i-1]="worse";
		else
			result[i-1]="same";
	}
	for(int i=0;i<n;i++)
		cout<<result[i]<<endl;
	return 0;
}
