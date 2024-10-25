// ================================
// Hussein Hashiem
// إِنَّ اللَّهَ وَمَلائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمًا
// وَمَا لَنَا أَلَّا نَتَوَكَّلَ عَلَى اللَّهِ وَقَدْ هَدَانَا سُبُلَنَا
// ================================
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

vector<ll> divisors(ll n, ll b)
{
    if (n > b)
        swap(n, b);
    vector<ll> ans;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (b % i == 0)
                ans.push_back(i);
            ll reminder = n / i;
            if (reminder != i && b % reminder == 0)
                ans.push_back(reminder);
        }
    }
    return ans;
}

int main()
{
    ABO_MAZEN;
    ll a, b;
    cin >> a >> b;
    vector<ll> k = divisors(a, b);
    sort(k.begin(), k.end());
    int n;
    cin >> n;
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        auto it = upper_bound(k.begin(), k.end(), r);
        if (it != k.begin())
        {
            it--;
            if (*it >= l)
                cout << *it << endl;
            else
                cout << -1 << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}