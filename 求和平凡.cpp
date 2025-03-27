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
int main()
{

    int n;
    cout << "选择问题规模" << endl;
    cin >> n;
    init(n);
    int sum=0;
    for(int j=0;j<500;j++)
    {
        for (int i=0; i < n; i++)
        {
            sum += a[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}
