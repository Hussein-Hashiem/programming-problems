/* Hussein Hashiem */
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <array>
#include <vector>
#include <set>
#include <iomanip>
#define ll long long
#define ld long double
#define Test_Cases \
    int t;         \
    cin >> t;      \
    while (t--)
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int homeColors[n];
    int guestColors[n];
    for (int i = 0; i < n; i++)
    {
        cin >> homeColors[i] >> guestColors[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && homeColors[i] == guestColors[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}