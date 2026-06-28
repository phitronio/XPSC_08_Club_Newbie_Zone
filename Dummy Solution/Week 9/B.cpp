#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
void setbomb(int x, int y, int n, int m, vector<vector<int>> &ans)
{
	if (x > 0)
	{
		if (y > 0)
			ans[x - 1][y - 1]++;
		ans[x - 1][y]++;
		if (y < m - 1)
			ans[x - 1][y + 1]++;
	}
	if (x < n - 1)
	{
		if (y > 0)
			ans[x + 1][y - 1]++;
		ans[x + 1][y]++;
		if (y < m - 1)
			ans[x + 1][y + 1]++;
	}
	if (y > 0)
		ans[x][y - 1]++;
	if (y < m - 1)
		ans[x][y + 1]++;
}
int main(int argc, char *argv[])
{
	int n, m;
	cin >> n >> m;
	vector<vector<char>> v(n, vector<char>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> v[i][j];
		}
	}
	vector<vector<int>> ans(n, vector<int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (v[i][j] == '*')
				setbomb(i, j, n, m, ans);
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (v[i][j] == '.')
			{
				if (ans[i][j] != 0)
				{
					cout << "NO";
					return 0;
				}
			}
			else if (v[i][j] != '*')
				if (ans[i][j] != v[i][j] - '0')
				{
					cout << "NO";
					return 0;
				}
		}
	cout << "YES";
	return 0;
}
