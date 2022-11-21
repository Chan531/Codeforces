// E. Counting Rectangles

#include <iostream>
#include <cstring>

using namespace std;

int n, q;
long long point[1001][1001];

void input()
{
	cin >> n >> q;

	int y, x;

	for (int i = 0; i < n; i++)
	{
		cin >> y >> x;

		point[y][x] += y * x;
	}
}

void solution()
{
	// 2차원 누적합 구하기
	for (int i = 1; i <= 1000; i++)
		for (int j = 1; j <= 1000; j++)
			point[i][j] += point[i][j - 1];

	for (int i = 1; i <= 1000; i++)
		for (int j = 1; j <= 1000; j++)
			point[j][i] += point[j - 1][i];

	int hs, ws, hb, wb;

	while (q--)
	{
		long long ans = 0;

		cin >> hs >> ws >> hb >> wb;

		cout << point[hb - 1][wb - 1] - point[hb - 1][ws] - point[hs][wb - 1] + point[hs][ws] << '\n';
	}
}

void solve()
{
	int testcase;
	cin >> testcase;

	while (testcase--)
	{
		input();
		solution();
		memset(point, 0, sizeof(point));
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
	return 0;
}