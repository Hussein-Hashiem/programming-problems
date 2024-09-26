// Hussein Hashiem
// إِنَّ اللَّهَ وَمَلائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمًا
#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string>
#include <cstring>
#include <array>
#include <vector>
#include <set>
#include <iomanip>
#include <optional>
#include <iterator>
#include <deque>
#include <list>
#include <forward_list>
#include <utility>
#include <map>
#include <numeric>
#include <bitset>
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
#define S7S7S7                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define TEMP \
    ll temp; \
    cin >> temp
#define PAIR_TEMP               \
    ll first_temp, second_temp; \
    cin >> first_temp >> second_temp

// BEFORE coding are you sure you understood the statement correctly?
// PLEASE do not forget to read the sample explanation carefully.
// WATCH out for overflows & RTs in general.
// TEST your idea or code on the corner cases.
// ANALYZE each idea you have thoroughly.

// ================================
// ================================

// Bitmask Operation
bool Knowbit(ll n, int i)
{
    return (n >> i) & 1;
}
ll Setbit(ll n, int i)
{
    return n | (1 << i);
}
ll Resetbit(ll n, int i)
{
    return n & (~(1 << i));
}
ll flip(ll n, int i)
{
    return n ^ (1 << i);
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    return !(n & (n - 1));
}

// ================================
// ================================

int main()
{
    S7S7S7;
    ll n, l, r, x, ans = 0;
    cin >> n >> l >> r >> x;
    vector<ll> problems(n);
    for (ll i = 0; i < n; i++)
        cin >> problems[i];
    ll nums_sub = (1 << n);
    for (ll mask = 1; mask < nums_sub; mask++)
    {
        ll one = 0, total_diff = 0, mini = LONG_MAX, maxi = LONG_MIN;
        for (ll j = 0; j < n; j++)
        {
            if (Knowbit(mask, j))
            {
                one++;
                total_diff += problems[j];
                mini = min(mini, problems[j]);
                maxi = max(maxi, problems[j]);
            }
        }
        if (one >= 2 && total_diff >= l && total_diff <= r && maxi - mini >= x)
            ans++;
    }
    cout << ans << endl;
    return 0;
}