#include<bits/stdc++.h>
using namespace std;

class point
{
public:
	int x, y;
};

bool compare1(point p1, point p2)
{
	return p1.x < p2.x;
}

bool compare2(point p1, point p2)
{
	return p1.x > p2.x;
}

int main()
{
	point a[] = {{12, 23}, {8, 9}, {5, 6}};
	int n = sizeof(a) / sizeof(a[0]);

	sort(a, a + n, compare1);
	for (auto k : a)
	{
		cout << k.x << " " << k.y << endl;
	}
	cout << "----" << endl;

	sort(a, a + n, compare2);
	for (auto k : a)
	{
		cout << k.x << " " << k.y << endl;
	}

	return 0;
}