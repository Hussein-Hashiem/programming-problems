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

int main()
{
    S7S7S7;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> t(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> t[i];
    int total_awake_theorems = 0;
    for (int i = 0; i < n; ++i)
    {
        if (t[i] == 1)
            total_awake_theorems += a[i];
    }
    int extra_theorems = 0;
    int current_theorems = 0;
    for (int i = 0; i < k; ++i)
    {
        if (t[i] == 0)
        {
            current_theorems += a[i];
        }
    }
    extra_theorems = current_theorems;
    for (int i = k; i < n; ++i)
    {
        if (t[i - k] == 0)
            current_theorems -= a[i - k];
        if (t[i] == 0)
            current_theorems += a[i];
        extra_theorems = max(extra_theorems, current_theorems);
    }
    cout << total_awake_theorems + extra_theorems << endl;
    return 0;
}