// A - Medium Number

#include <iostream>
#include <algorithm>

using namespace std;

int arr[3];

void input()
{
	for (int i = 0; i < 3; i++)
		cin >> arr[i];
}

void solution()
{
	sort(arr, arr + 3);

	cout << arr[1] << '\n';
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