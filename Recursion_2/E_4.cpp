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

int main()
{
    ABO_MAZEN;
    ll a = 1234567, b = 123456, c = 1234, n;
    cin >> n;
    for (int i = 0; i * a <= n; i++)
    {
        for (int j = 0; j * b <= n; j++)
        {
            if ((n - (i * a) - (j * b)) % c == 0 && (n - (i * a) - (j * b)) >= 0)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}