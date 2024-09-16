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
    string had, needed;
    int ans = 0;
    cin >> had;
    map<char, int> freqhad;
    map<char, int> freqneeded;
    for (size_t i = 0; i < had.size(); i++)
        freqhad[had[i]]++;
    cin >> needed;
    for (size_t i = 0; i < needed.size(); i++)
    {
        freqneeded[needed[i]]++;
    }
    char k = 'a';
    for (size_t i = 0; i < 26; i++)
    {
        if (freqneeded[k] > 0 && freqhad[k] == 0)
        {
            ans = -1;
            break;
        }
        else
            ans += min(freqhad[k], freqneeded[k]);
        k++;
    }
    cout << ans << endl;
    return 0;
}