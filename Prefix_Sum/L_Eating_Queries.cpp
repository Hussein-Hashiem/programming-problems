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
    Test_Cases
    {
        int n, q;
        cin >> n >> q;
        vector<int> candies(n);
        for (int i = 0; i < n; ++i)
            cin >> candies[i];
        sort(candies.rbegin(), candies.rend());
        vector<long long> prefix_sums(n);
        prefix_sums[0] = candies[0];
        for (int i = 1; i < n; ++i)
            prefix_sums[i] = prefix_sums[i - 1] + candies[i];
        for (int i = 0; i < q; ++i)
        {
            long long x;
            cin >> x;
            auto it = lower_bound(prefix_sums.begin(), prefix_sums.end(), x);
            if (it == prefix_sums.end())
                cout << -1 << endl;
            else
                cout << (it - prefix_sums.begin() + 1) << endl;
        }
    }
    return 0;
}