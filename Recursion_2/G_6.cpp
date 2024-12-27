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
int a;
vector<int> nums(a);
bool solve(int index = 0, int sum = 0)
{
    // base case
    if (index == a && sum % 360 == 0)
        return 1;
    if (index == a)
        return 0;
    // transion
    return solve(index + 1, sum + nums[index]) || solve(index + 1, sum - nums[index]);
}
int main()
{
    ABO_MAZEN;
    cin >> a;
    nums.resize(a);
    enter(nums);
    if (solve())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}