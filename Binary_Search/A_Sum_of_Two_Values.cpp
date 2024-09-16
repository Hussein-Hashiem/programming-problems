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
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> nums;
    for (size_t i = 0; i < n; i++)
    {
        TEMP;
        nums.push_back({temp, i + 1});
    }
    sort(nums.begin(), nums.end());
    int l = 0, r = n - 1;
    pair<int, int> ans;
    while (l < r)
    {
        if (nums[l].first + nums[r].first == k)
        {
            ans = {nums[l].second++, nums[r].second++};
            break;
        }
        else if (nums[l].first + nums[r].first < k)
            l++;
        else
            r--;
    }
    if (ans.first == 0)
        cout << -1 << endl;
    else
        cout << ans.first << ' ' << ans.second << endl;
    return 0;
}