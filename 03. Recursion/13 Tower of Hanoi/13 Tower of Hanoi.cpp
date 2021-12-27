#include<bits/stdc++.h>
using namespace std;

//Time: O(2^n)
//Space: O(2^n)

void towerOfHanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move 1 from " << A << " to " << C << endl;
        return ;
    }

    towerOfHanoi(n - 1, A, C, B);
    cout << "Move " << n << " from " << A << " to " << C << endl;
    towerOfHanoi(n - 1, B, A, C);
}

int main()
{
    int n;
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}