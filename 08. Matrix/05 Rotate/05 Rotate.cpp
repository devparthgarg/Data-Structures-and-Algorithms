#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> v, int row, int col)
{
	//reverse each row
	for (int p = 0; p < row; p++)
	{
		int i = 0;
		int j = col - 1;

		while (i < j)
		{
			swap(v[i][j], v[j][i]);
		}
	}

	//take transpose of above matrix
	vector<vector<int>> res(col, vector<int> (row, 0));

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			res[j][i] = v[i][j];
		}
	}
	return res;
}

void display(vector<vector<int>> v, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	vector<vector<int>> v;

	int row, col;
	cin >> row >> col;

	int val = 1;
	for (int i = 0; i < row; i++)
	{
		vector<int> temp;
		for (int j = 0; j < col; j++)
		{
			temp.push_back(val);
			val++;
		}
		v.push_back(temp);
	}

	display(v, row, col);

	cout << "Rotate :" << endl;

	vector<vector<int>> res = rotate(v, row, col);
	display(res, col, row);

	return 0;
}