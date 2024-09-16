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
    cout.tie(NULL);
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
    S7S7S7
    int n;
    string s;
    set<char> freq;
    cin >> n >> s;
    for (size_t i = 0; i < s.size(); i++)
    {
        freq.insert(s[i]);
    }
    if (freq.size() >= n)
    {
        cout << "YES" << endl;
        vector<string> result(n);
        set<char> used;
        int current_string = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (used.find(s[i]) == used.end() && current_string < n)
            {
                used.insert(s[i]);
                current_string++;
            }
            result[current_string - 1] += s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << result[i] << endl;
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}