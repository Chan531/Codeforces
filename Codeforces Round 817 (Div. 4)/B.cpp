// B. Colourblindness

#include <iostream>
#include <string>

using namespace std;

int n;
string a, b;

void input()
{
	cin >> n >> a >> b;
}

void solution()
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i])
		{
			if (a[i] == 'R' && (b[i] == 'G' || b[i] == 'B'))
			{
				cout << "NO\n";
				return;
			}

			if (b[i] == 'R' && (a[i] == 'G' || a[i] == 'B'))
			{
				cout << "NO\n";
				return;
			}
		}
	}

	cout << "YES\n";
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