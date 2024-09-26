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

int main()
{
    S7S7S7;
    Test_Cases
    {
        string s;
        cin >> s;
        ll one = 0, zero = 0;
        int cnt = (s[0] == '0');
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
            if (i != 0)
            {
                if (s[i] == '0' && s[i - 1] == '1')
                    cnt++;
            }
        }
        if (one == s.size())
            cout << 0 << endl;
        else if (zero == s.size())
            cout << 1 << endl;
        else
            cout << min(cnt, 2) << endl;
    }
    return 0;
}