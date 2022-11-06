#include<bits/stdc++.h>
using namespace std;
int main()
{
    double Xa, Ya, Xb, Yb;
    cin >> Xa >> Ya >> Xb >> Yb;
    double A = Xa - Xb;
    double B = Ya - Yb;
    double C = sqrt(A * A + B * B);
    printf("%.3lf",C);
    return 0;
}

