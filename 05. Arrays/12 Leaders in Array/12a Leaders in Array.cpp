#include<bits/stdc++.h>
using namespace std;

/*
leader - nothing greater in right of it (equals are not allowed)
*/

//Time: O(n^2)
void leaders(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] >= a[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    leaders(a, n);
    return 0;
}
