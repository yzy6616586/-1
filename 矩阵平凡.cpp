#include <iostream>
#include <stdlib.h>

using namespace std;

const int N = 10240;  // matrix size

double b[N][N], sum[N],a[N];

void init(int n)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            b[i][j] = i + j;
        }
    }
}

void init_(int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
}

int main()
{
    init(N);
    init_(N);
    int n;
    cout << "选择问题规模" << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        sum[i] = 0.0;
        int j=0;
        for (j = 0; j <= n - 4; j += 4) {
            sum[i] += b[j][i] * a[j];
            sum[i] += b[j + 1][i] * a[j + 1];
            sum[i] += b[j + 2][i] * a[j + 2];
            sum[i] += b[j + 3][i] * a[j + 3];
        }
        for (; j < n; j++) {
            sum[i] += b[j][i] * a[j];
        }
    }
    return 0;
}