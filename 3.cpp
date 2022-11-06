#include<bits/stdc++.h>
using namespace std;
int main(){
	char st[100];
	int i,j,l,r,len,ans=0;
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		sprintf(st,"%d",i);
		len=strlen(st);
		for(j=0;j<len;j++){
			if(st[j]=='2')
				ans++;
		}
	}
	cout<<ans;
	return 0;
}
