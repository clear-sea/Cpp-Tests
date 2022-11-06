#include <iostream>
using namespace std;
int main()
{
    int n;
    long long s = 1;
    cin >> n;
    if (n > 0)
        for (int i = 0; i < n; i++)
            s *= 2;
        cout << s;
    return 0;
}