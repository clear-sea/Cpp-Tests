#include <iostream>
using namespace std;
int main()
{
    int n, x, y,nums;
    cin >> n >> x >> y;
    nums = n - y*1.0 / x;
    cout<<nums;
    return 0;
}