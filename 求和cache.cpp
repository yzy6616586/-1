#include <iostream>
#include <stdlib.h>

using namespace std;

const int N = 10240;  // matrix size

double a[N];

void init(int n)
{
     for (int i = 0; i < n; i++)
     {
        a[i]=i;
     }
}
void recursion(int n) {
    if (n == 1||n==0) {
        return;
    } else {
        int i;
        for (i = 0; i <= n / 2 - 2; i += 2) {
            a[i] += a[n - i - 1];
            a[i + 1] += a[n - (i + 1) - 1];
        }
        for (; i < n / 2; i++) {
            a[i] += a[n - i - 1];
        }
        n = n / 2;
        recursion(n);
    }
}
int main()
{
    int n;
    int sum=0;
    cout << "选择问题规模" << endl;
    cin >> n;
    for(int x=0;x<500;x++)
    {
        init(n);
        recursion(n);
        sum+=a[0];
    }
    cout<<sum;
    return 0;
}
