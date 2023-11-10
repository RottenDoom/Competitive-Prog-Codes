#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <list>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
using namespace std;

#define USE_CS

#ifdef USE_CS

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define push push_back
#define mp make_pair
#define loop(i, a, b) for (int i = a; i < b; i++)
#define lloop(i, a, b) for (long long int i = a, i < b; i++)

const long long int Inf = 0x3f3f3f3f3f3f3f3f;
// Define your variables here

inline void solve()
{
    // Solve here
}

int T = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    loop(i, 0, T) solve();
    return 0;
}

#else

const long long int Inf = 0x3f3f3f3f3f3f3f3f;
// Define your variables here

inline void solve()
{
    // Solve here
}

int T = 0;
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    scanf("%d", T);
    loop(i, 0, T) solve();
    return 0;
}
#endif