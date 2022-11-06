#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	bool a[5001]={0},b[5001];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i%j==0){
				if(a[i]==false)
					a[i]=true;
				else if(a[i]==true)
					a[i]=false;
			}
		}
	}
	int nums=0,nums1=0;
	for(int i=1;i<=n;i++){
		if(a[i]==true)
			nums++;
	}

	for(int i=1;i<=n;i++){
		if(a[i]==true){
			nums1++;
			cout<<i;
			if(nums1!=nums)
				cout<<",";
		}
	}
	return 0;
}
