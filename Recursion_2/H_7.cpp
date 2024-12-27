// Hussein Abo Mazen
// وَمَا لَنَا أَلَّا نَتَوَكَّلَ عَلَى اللَّهِ وَقَدْ هَدَانَا سُبُلَنَا
#include <bits/stdc++.h>
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
#define ABO_MAZEN                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define TEMP \
    ll temp; \
    cin >> temp
#define PAIR_TEMP               \
    ll first_temp, second_temp; \
    cin >> first_temp >> second_temp
#define be(_) _.begin(), _.end()
#define rbre(_) _.rbegin(), _.rend()
#define enter(_)       \
    for (auto &it : _) \
        cin >> it;
// Understand...Read carefully...Test...Analyze
int n;
map<int, int> freq;
int fib(int n)
{
    if (n <= 1)
    {
        freq[n - 1]++;
        return n;
    }
    int j = fib(n - 1) + fib(n - 2);
    freq[j - 1]++;
    return j;
}
int main()
{
    ABO_MAZEN;
    cin >> n;
    fib(20);
    for (int i = 0; i < n; i++)
        if (freq[i])
            cout << 'O';
        else
            cout << 'o';
    newline;
    return 0;
}