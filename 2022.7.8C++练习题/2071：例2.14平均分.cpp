#include<bits/stdc++.h>
using namespace std;
int main(){
	float score,a,b,c,maxx,minn;
	a=6*9.6;b=9.4*5;c=9.8*5;
	maxx=a-b;minn=a-c;
	score=(a-maxx-minn)/4;
	printf("%5.2f",score);
	return 0;
}
