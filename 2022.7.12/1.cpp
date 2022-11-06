#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10000];
    int i,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    system("pause");
    return 0;
}
