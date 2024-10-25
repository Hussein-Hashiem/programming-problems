// Number Theory Func
vector<ll> divisors(ll n)
{
    vector<ll> ans;
    for (ll i = 1; i * i <= n; i++)
        if (n % i == 0)
        {
            ans.push_back(i);
            if (i * i != n)
                ans.push_back(n / i);
        }
    return ans;
}

ll gcd(ll a, ll b) // log(n)
{
    if (a < b)
        swap(a, b);
    if (b == 0)
        return a;
    return gcd(a % b, b);
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

bool isprime(ll n)
{
    if (n == 1)
        return 0;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

vector<pair<ll, ll>> primefactor(ll n)
{
    vector<pair<ll, ll>> ret;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int c = 0;
            while (n % i == 0)
                n /= i, c++;
            ret.push_back({i, c});
        }
    }
    if (n > 1)
        ret.push_back({n, 1});
    return ret;
}

const int N = 1e5 + 5;
ll freq1[N], freq2[N];
void add(ll n, ll freq[])
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int c = 0;
            while (n % i == 0)
                n /= i, c++;
            freq[i] += c;
        }
    }
    if (n > 1)
        freq[n]++;
}

ll power(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll x = power(a, b / 2);
    x *= x;
    if (b % 2 != 0)
        x *= a;
    return x;
}

const int mod = 1e9 + 7;
ll powermod(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll x = powermod(a, b / 2);
    x *= x;
    if (b % 2 != 0)
        x *= a;
    return x % mod;
}

const int MAX_N = 3000;
vector<int> sieve(MAX_N + 1, 0);
void compute_prime_factors()
{
    for (int i = 2; i <= MAX_N; i++)
    {
        if (sieve[i] == 0)
        {
            for (int j = i; j <= MAX_N; j += i)
            {
                sieve[j]++;
            }
        }
    }
}