#include <iostream>
using namespace std;
int main()
{
    unsigned A, B;
    cin >> A >> B;
    if(A>=1&&B>0&&B<=50000)
        cout << A * B;
    return 0;
}