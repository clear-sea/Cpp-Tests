#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[200];
	cin>>a;
	for(int i=0;i<strlen(a);i++){
		if('A'<=a[i]&&a[i]<='U')
			a[i]+=5;
		else if('V'<=a[i]&&a[i]<='Z')
			a[i]-=21;
		cout<<a[i];
	}
	return 0;
}
