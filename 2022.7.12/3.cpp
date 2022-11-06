#include<bits/stdc++.h>
using namespace std;

int a[100];
int main(){
    int n,b,m,nums=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>b;
        a[i]=b;
    }

    cin>>m;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==m)
            nums+=1;
    }

    cout<<nums;
    
    system("pause");
    return 0;
}
