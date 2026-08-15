#include <iostream>
#include <vector>
using namespace std;

int n, m, rooms; 
vector<vector<bool>> vis; // Không cần khởi tạo kích thước ban đầu của vis

vector<pair<int,int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isValid(int x, int y)
{
	if (x < 0 || x >= n || y < 0 || y >= m) return false;
	if (vis[x][y]) return false;
	return true;
}

void dfs(int x, int y)
{
	vis[x][y] = true;
	for (auto it : moves)
	{
		if (isValid(x + it.first, y + it.second))
			dfs(x + it.first, y + it.second);
	}
}

int connected_components()
{
	rooms = 0; // Reset biến rooms trước khi tính các thành phần liên thông
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!vis[i][j])
			{
				dfs(i, j);
				++rooms;
			}
		}
	}
	return rooms;
}

int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;
	vector<vector<char>> a(n, vector<char>(m)); // Khởi tạo ma trận kích thước n x m
	vis.resize(n, vector<bool>(m, false)); // Khởi tạo vis với kích thước n x m, giá trị ban đầu là false

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == '#')
				vis[i][j] = true;
		}
	}
	
	cout << connected_components() << "\n";
	return 0;
}
