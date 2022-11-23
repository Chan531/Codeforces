// E - Binary Inversions

#include <iostream>
#include <algorithm>

using namespace std;

int n;
long long arr[200001], note[200001], num[200001], ans[3];

void input()
{
	cin >> n;

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		// �ڽ� ���� 1�� ���� ���
		num[i] = cnt;

		if (arr[i] == 1)
			cnt++;
	}
}

void solution()
{
	int cnt = 0;

	ans[0] = 0;
	ans[1] = 0;
	ans[2] = 0;

	// �ڽ� �ڿ� �ִ� 0�� ���� ���
	// �ƹ� �͵� �ٲ��� ���� ����

	for (int i = n - 1; i >= 0; i--)
	{
		note[i] = cnt;

		if (arr[i] == 0)
			cnt++;

		else
			ans[0] += note[i];
	}

	// 0�� 1�� �ٲٱ�

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			ans[1] = max(ans[1], ans[0] + note[i] - num[i]);
			break;
		}
	}

	// 1�� 0���� �ٲٱ�

	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] == 1)
		{
			ans[2] = max(ans[2], ans[0] - note[i] + num[i]);
			break;
		}
	}

	cout << max({ ans[0], ans[1], ans[2] }) << '\n';
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