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
    int n, k, j, a;
    ll ans = LONG_MAX;
    cin >> n >> k;
    vector<int> nums;
    vector<ll> sum(n);
    for (size_t i = 0; i < n; i++)
    {
        TEMP;
        nums.push_back(temp);
        if (i == 0)
            sum[i] = nums[i];
        else
            sum[i] = nums[i] + sum[i - 1];
    }
    for (size_t i = 0; i < n - k + 1; i++)
    {
        if (i == 0)
            j = sum[k - 1];
        else
            j = sum[i + k - 1] - sum[i - 1];
        if (j < ans)
        {
            ans = j;
            a = i;
        }
    }
    cout << a + 1 << endl;
    return 0;
}