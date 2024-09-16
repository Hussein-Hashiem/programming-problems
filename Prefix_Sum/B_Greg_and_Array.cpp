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
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#define ll long long
#define ld long double
#define newline cout << endl
#define Test_Cases \
    ll t;          \
    cin >> t;      \
    while (t--)
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
 
int a[100005];
long long q[100005];
long long p[100005];
 
int main()
{
 
    S7S7S7;
    int n, m, k;
    cin >> n >> m >> k; // one
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
 
    vector<pair<int, int>> range(m + 1);
    vector<long long> val(m + 1);
    // two
    for (int i = 1; i <= m; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        range[i] = {l, r};
        val[i] = x;
    }
 
    // three
    for (int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        q[x]++;
        q[y + 1]--;
    }
 
    // prefix
    for (int i = 1; i <= m; i++)
        q[i] += q[i - 1];
 
    for (int i = 1; i <= m; i++)
        val[i] = val[i] * q[i];
 
    for (int i = 1; i <= m; i++)
    {
        int l = range[i].first;
        int r = range[i].second;
 
        p[l] += (val[i]);
        p[r + 1] -= (val[i]);
    }
 
    for (int i = 1; i <= n; i++)
        p[i] += p[i - 1];
    for (int i = 1; i <= n; i++)
        cout << p[i] + a[i] << " ";
    newline;
 
    return 0;
}