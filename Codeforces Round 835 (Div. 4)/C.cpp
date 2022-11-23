// C - Advantage

#include <iostream>
#include <algorithm>

using namespace std;

int n, arr[200000], note[200000];

void input()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		note[i] = arr[i];
	}
}

void solution()
{
	sort(arr, arr + n);

	int maxnum = arr[n - 1];

	if (maxnum == arr[0])
	{
		for (int i = 0; i < n; i++)
			cout << 0 << ' ';

		cout << '\n';

		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (note[i] == maxnum)
			cout << maxnum - arr[n - 2] << ' ';

		else
			cout << note[i] - maxnum << ' ';
	}

	cout << '\n';
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