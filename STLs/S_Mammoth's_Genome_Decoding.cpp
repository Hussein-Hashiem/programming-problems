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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    if (n % 4 != 0)
    {
        cout << "===";
        return 0;
    }
    mp['C'] = 0;
    mp['A'] = 0;
    mp['G'] = 0;
    mp['T'] = 0;
    for (int i = 0; i < s.size(); i++)
        mp[s[i]]++;
    int mx = 0;
    for (auto it : mp)
    {
        if (it.first != '?')
            mx = max(mx, it.second);
    }
    int q = mp['?'];
    for (auto it : mp)
    {
        if (it.first != '?')
            q -= (mx - it.second);
    }
    if (q < 0 || q % 4 != 0)
        cout << "===";
    else
    {
        q /= 4;
        mx += q;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                for (auto it : mp)
                {
                    if (it.second < mx && it.first != '?')
                    {
                        cout << it.first;
                        mp[it.first]++;
                        break;
                    }
                }
            }
            else
                cout << s[i];
        }
    }
    return 0;
}