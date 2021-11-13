#include<bits/stdc++.h>
using namespace std;

void twoUnique(int a[], int n)//time comp. O(n^2)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }

        if (count % 2 != 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int a[] = {1, 3, 2, 1, 3, 4, 2, 5, 4, 6};
    int n = sizeof(a) / sizeof(int);

    twoUnique(a, n);
    return 0;
}