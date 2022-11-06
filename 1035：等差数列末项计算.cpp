#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,n,cha;
    cin>>a1>>a2>>n;
    cha=a2-a1;
    for(int i=1;i<n;i++){
    	a1+=cha;
	}
	cout<<a1;
    return 0;
}

