// C. Word Game

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int n, score[3];
vector<string> words[3];
unordered_map<string, int> check;

void input()
{
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		string word;

		for (int j = 0; j < n; j++)
		{
			cin >> word;
			words[i].push_back(word);
			check[word]++;
		}
	}
}

void solution()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (check[words[i][j]] == 1)
				score[i] += 3;

			else if (check[words[i][j]] == 2)
				score[i] += 1;
		}
	}

	cout << score[0] << ' ' << score[1] << ' ' << score[2] << '\n';
}

void reset()
{
	for (int i = 0; i < 3; i++)
	{
		words[i].clear();
		score[i] = 0;
	}

	check.clear();
}

void solve()
{
	int testcase;
	cin >> testcase;

	while (testcase--)
	{
		input();
		solution();
		reset();
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