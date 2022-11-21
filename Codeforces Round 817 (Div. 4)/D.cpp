// D. Line

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int n;
string line;

void input()
{
	cin >> n >> line;
}

void solution()
{
	queue<long long> q;

	long long cnt = 0;

	for (int i = 0; i < n; i++)
	{
		if (line[i] == 'L')
			cnt += i;

		else
			cnt += n - i - 1;
	}

	long long start = 0, end = n - 1;

	while (start < end)
	{
		if (line[start] == 'L')
		{
			q.push(n - start - 1 - start);
		}

		if (line[end] == 'R')
		{
			q.push(end - n + end + 1);
		}

		start++;
		end--;
	}

	for (int i = 1; i <= n; i++)
	{
		if (!q.empty())
		{
			cnt += q.front();
			q.pop();
		}

		cout << cnt << ' ';
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