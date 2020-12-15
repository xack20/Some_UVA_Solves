#include <bits/stdc++.h>
using namespace std;
// #include <bits/stdtr1c++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

/// Typedef
typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define itr iterator
#define SQR(x) ((x) * (x))
#define loop(i, y) for (int i = 0; i < int(y); i++)
#define FOR(i, x, y) for (int i = int(x); i <= int(y); i++)
#define ROF(i, y, x) for (int i = int(y); i >= int(x); i--)
#define ALL(c) c.begin(), c.end()
#define SZ(c) int(c.size())
#define CLR(x, y) memset(x, y, sizeof(x))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define si(x) scanf("%d", &x)
#define sii(x, y) scanf("%d %d", &x, &y)
#define siii(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define sl(x) scanf("%lld", &x)
#define sll(x, y) scanf("%lld %lld", &x, &y)
#define slll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)
#define sllll(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
#define FileIO                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define FixedPrecision(x)        \
    ios::sync_with_stdio(false); \
    cout.setf(ios::fixed);       \
    cout.precision(x);           \
    cin.tie(0);
#define bitCheck(N, in) ((bool)(N & (1LL << (in))))
#define bitOff(N, in) (N & (~(1LL << (in))))
#define bitOn(N, in) (N | (1LL << (in)))
#define bitFlip(a, k) (a ^ (1LL << (k)))
#define start_time clock_t tStart = clock();
#define execution_time printf("\n>>Time taken: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#define popCount(x) __builtin_popcount(x)
#define int2Bin(x, y) \
    bitset<y> z = x;  \
    cout << z.to_string() << endl;
#define tr(it, container) for (auto it = container.begin(); it != container.end(); it++)
#define unq(v) (v).erase(unique(ALL(v)), v.end())
#define common(a, b) sort(ALL(a)), sort(ALL(b)), a.erase(set_intersection(ALL(a), ALL(b), a.begin()), a.end())
#define uncommon(a, b) sort(ALL(a)), sort(ALL(b)), a.erase(set_symmetric_difference(ALL(a), ALL(b), a.begin()), a.end())
#define DB(x) cout << #x << " = " << x << endl
#define DDB(x, y) cout << #x << " = " << x << "   " << #y << " = " << y << endl
#define DDDB(x, y, z) cout << #x << " = " << x << "   " << #y << " = " << y << "   " << #z << " = " << z << endl
/// template <typename T> using orderset = tree <T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
/// *X.find_by_order(k) //returns the kth largest element.(0-based)
/// X.order_of_key(val) //returns the no. of values less than val

/// uniform random generator -->
/// uniform_int_distribution<int> dist(0, 1);
/// default_random_engine gen;

template <class T>
inline T bigMod(T p, T e, T M)
{
    ll ret = 1;
    for (; e > 0; e >>= 1)
    {
        if (e & 1)
            ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}
template <class T>
inline T modInverse(T a, T M) { return bigMod(a, M - 2, M); }
template <class T>
inline T gcd(T a, T b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
template <class T>
inline T lcm(T a, T b)
{
    a = abs(a);
    b = abs(b);
    return (a / gcd(a, b)) * b;
}
template <class T>
inline T diss(T x1, T x2, T y1, T y2) { return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2))); }
template <class T>
inline T disss(T x1, T x2, T z1, T y1, T y2, T z2) { return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)) + ((z1 - z2) * (z1 - z2))); }
template <class T>
inline string int2String(T a)
{
    ostringstream str;
    str << a;
    return str.str();
}
template <class T>
inline T string2int(string a)
{
    stringstream str(a);
    T b;
    str >> b;
    return b;
}
const int dr[] = {0, 1, 0, -1, -1, 1, 1, -1, -2, -2, 2, 2, -1, -1, 1, 1};
const int dc[] = {1, 0, -1, 0, 1, 1, -1, -1, -1, 1, -1, 1, -2, 2, -2, 2};

/// Constants

#define MAXN 1000005
#define MAX 200005
#define MOD 1000000007
#define BASE 1000000009
#define eps 1e-9
#define INF 1llu << 61 // 2,305,843,009,213,693,952
#define inf 1 << 29    // 536,870,912
#define PI acos(-1.0)  // 3.1415926535897932
#define E 2.71828182845904523536

bool is_prime(long long n)
{

    if (n == 1)
        return false;
    for (long long i = 2; (i * i) <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}


int main()
{


#ifndef ONLINE_JUDGE
    start_time;
    FileIO;
#else
//FastIO;
#endif



ll t; sl(t);
while(t--)
{
    ll n; sl(n);
    ll a,b,c; slll(a,b,c);

    double val = (( a+b )/2.0) + (c&1 ? 0 : n);
    slll(a,b,c);

    if( val < ((( a+b )/2.0)+ (c&1 ? 0 : n) ) )cout << "Guarte" <<endl;
    else if ( val > ((( a+b )/2.0)+(c&1 ? 0 : n)) ) cout << "Dabriel" <<endl;
    else cout << "Empate" <<endl;

}









#ifndef ONLINE_JUDGE
    execution_time;
#endif



    return 0;
}