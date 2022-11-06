#include<bits/stdc++.h>
using namespace std;
int main(){
	char a;
	int cnt=0;
	while((a=getchar())!='\n'){
		if(a>='0'&&a<='9')
			cnt++;
	}
	cout<<cnt;
	return 0;
}
