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

// BEFORE coding are you sure you understood the statement correctly?
// PLEASE do not forget to read the sample explanation carefully.
// WATCH out for overflows & RTs in general.
// TEST your idea or code on the corner cases.
// ANALYZE each idea you have thoroughly.

// =========================
// =========================

vector<ll> divisors(ll n)
{
    vector<ll> ans;
    for (ll i = 1; i * i <= n; i++)
        if (n % i == 0)
        {
            ans.push_back(i);
            if (i * i != n)
                ans.push_back(n / i);
        }
    return ans;
}

int main()
{
    ABO_MAZEN;
    ll n, q;
    cin >> n >> q;
    vector<ll> ans = divisors(n);
    sort(ans.begin(), ans.end());
    if (q > ans.size())
        cout << -1 << endl;
    else
        cout << ans[q - 1] << endl;
    return 0;
}