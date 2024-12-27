// Hussein Abo Mazen
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
bool Knowbit(ll n, int i) { return (n >> i) & 1; }
int main()
{
    ABO_MAZEN;
    ll n, l, r, x, ans = 0;
    cin >> n >> l >> r >> x;
    vector<ll> nums(n);
    enter(nums);
    for (int i = 0; i < pow(2, n); i++)
    {
        ll mini = INT_MAX, maxi = INT_MIN, cnt = 0, t = 0;
        for (int j = 0; j < n; j++)
        {
            if (Knowbit(i, j))
                t += nums[j], cnt++, mini = min(mini, nums[j]), maxi = max(maxi, nums[j]);
        }
        if (cnt >= 2 && t >= l && t <= r && maxi - mini >= x)
            ans++;
    }
    cout << ans << endl;
    return 0;
}