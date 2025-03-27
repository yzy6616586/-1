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
	int i = 0;
	for (i = 0; i <= n - 4; i += 4) {
		sum[i] = 0.0;
		sum[i + 1] = 0.0;
		sum[i + 2] = 0.0;
		sum[i + 3] = 0.0;
	}
	for (; i < n; i++) {
		sum[i] = 0.0;
	}
	for (int j = 0; j < n; j++) {
		for (int i = 0; i <= n - 4; i += 4) {
			sum[i] += b[j][i] * a[j];
			sum[i + 1] += b[j][i + 1] * a[j];
			sum[i + 2] += b[j][i + 2] * a[j];
			sum[i + 3] += b[j][i + 3] * a[j];
		}
		for (; i < n; i++) {
			sum[i] += b[j][i] * a[j];
		}
	}

    return 0;
}