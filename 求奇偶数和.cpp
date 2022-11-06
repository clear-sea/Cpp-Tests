#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s1=0,s2=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0)
			s1+=i;
		else
			s2+=i;
	}
	cout<<s1<<' '<<s2;
	return 0;
}
