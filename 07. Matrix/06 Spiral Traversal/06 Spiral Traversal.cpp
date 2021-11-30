#include<bits/stdc++.h>
using namespace std;

void spiral(vector<vector<int>> v)//time comp. O(n^2)
{
	int startRow = 0;
	int endRow = v.size() - 1;

	int startCol = 0;
	int endCol = v[0].size() - 1;

	while (startRow <= endRow and startCol <= endCol)
	{
		//first row
		for (int i = startCol; i <= endCol; i++)
		{
			cout << v[startRow][i] << " ";
		}
		startRow++;

		//end col
		for (int i = startRow; i <= endRow; i++)
		{
			cout << v[i][endCol] << " ";
		}
		endCol--;

		//end row
		if (startRow <= endRow)
		{
			for (int i = endCol; i >= startCol; i--)
			{
				cout << v[endRow][i] << " ";
			}
			endRow--;
		}

		//first col
		if (startCol <= endCol)
		{
			for (int i = endRow; i >= startRow; i--)
			{
				cout << v[i][startCol] << " ";
			}
			startCol++;
		}

	}
}

void display(vector<vector<int>> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[0].size(); j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	cout << "----" << endl;
}

int main()
{
	vector<vector<int>> arr = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};

	display(arr);
	spiral(arr);

	return 0;
}