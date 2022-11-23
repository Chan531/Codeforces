// B - Atilla's Favorite Problem

#include <iostream>
#include <algorithm>

using namespace std;

int n;
char str[100];

void input()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> str[i];
}

void solution()
{
	sort(str, str + n);

	cout << str[n - 1] - 'a' + 1 << '\n';
}

void solve()
{
	int testcase;
	cin >> testcase;

	while (testcase--)
	{
		input();
		solution();
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