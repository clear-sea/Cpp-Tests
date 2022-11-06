#include<bits/stdc++.h>
using namespace std;
int fb[101];
int main(){
    int n;
    cin>>n;
    fb[1]=1;fb[2]=1;
    for (int i = 3; i <= n; i++)
    {
        fb[i]=fb[i-2]+fb[i-1];
    }
    cout<<fb[n]<<" ";
    system("pause");
    return 0;
}
