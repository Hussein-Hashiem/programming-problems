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
    vector<string> captain;
    vector<string> child_woman;
    vector<string> man;
    vector<string> rat;
    int n;
    cin >> n;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s2 == "captain")
            captain.push_back(s1);
        else if (s2 == "woman" || s2 == "child")
            child_woman.push_back(s1);
        else if (s2 == "man")
            man.push_back(s1);
        else if (s2 == "rat")
            rat.push_back(s1);
    }
    for (auto i : rat)
        cout << i << endl;
    for (auto i : child_woman)
        cout << i << endl;
    for (auto i : man)
        cout << i << endl;
    for (auto i : captain)
        cout << i << endl;
    return 0;
}