//  A. Spell Check

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string s;

void input()
{
    cin >> n >> s;
}

void solution()
{
    if (n != 5)
    {
        cout << "NO\n";
        return;
    }

    sort(s.begin(), s.end());

    if (s == "Timru")
        cout << "YES\n";

    else
        cout << "NO\n";
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