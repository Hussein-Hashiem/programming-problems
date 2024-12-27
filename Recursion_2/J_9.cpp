// © Hussein Abo Mazen
// وَمَا لَنَا أَلَّا نَتَوَكَّلَ عَلَى اللَّهِ وَقَدْ هَدَانَا سُبُلَنَا
#include <bits/stdc++.h>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#define ll long long
#define ld long double
#define newline cout << endl
#define Test_Cases \
    ll t;          \
    cin >> t;      \
    while (t--)
#define fs fixed << setprecision
#define ABO_MAZEN                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define TEMP \
    ll temp; \
    cin >> temp
#define PAIR_TEMP               \
    ll first_temp, second_temp; \
    cin >> first_temp >> second_temp
#define be(_) _.begin(), _.end()
#define rbre(_) _.rbegin(), _.rend()
#define enter(_)       \
    for (auto &it : _) \
        cin >> it;
// Understand...Read carefully...Test...Analyze
ll n, ans = 88888888888;
void solve(ll i = 0, ll c4 = 0, ll c7 = 0)
{
    // base case
    if (i >= n && c4 == c7)
    {
        ans = min(ans, i);
        return;
    }
    if (i >= n * 100)
        return;
    // transition
    solve((i * 10) + 4, c4 + 1, c7);
    solve((i * 10) + 7, c4, c7 + 1);
}
int main()
{
    ABO_MAZEN;
    cin >> n;
    solve();
    cout << ans << endl;
    return 0;
}