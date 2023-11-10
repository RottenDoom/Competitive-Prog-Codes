// 1879A rigged

// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <map>
// #include <set>
// #include <unordered_map>
// #include <unordered_set>
// #include <deque>
// #include <list>
// #include <bitset>
// #include <functional>
// #include <numeric>
// #include <utility>
// using namespace std;

// #define USE_CS

// #ifdef USE_CS

// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int,int> pi;

// #define f first
// #define s second
// #define push push_back
// #define mp make_pair
// #define loop(i,a,b) for (int i = a; i < b; i++)

// const int N = 109;
// int t = 0, n = 0, s[N] = {}, e[N] = {};

// inline void solve() {
//     scanf("%d", &n);
//     loop(i, 0, n) scanf("%d %d", &s[i], &e[i]);

//     bool ok = true;
//     loop(i, 1, n) {
//         if ((s[i] >= s[0]) && (e[i] >= e[0])) ok = false;
//     }
//     if (!ok) {
//         printf("%d\n", -1);
//     } else {
//         printf("%d\n", s[0]);
//     }
// }


// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     scanf("%d", &t);
//     loop(i, 0, t) solve();
//     // Solution Comes Here

//     return 0;
// }

// #else

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     // Your code without macros and typedefs

//     return 0;
// }

// #endif


// 1879B chips on the board.

// #include <bits/stdc++.h>
 
// using namespace std;

// using li = long long;

// int main() {
//   ios::sync_with_stdio(false); cin.tie(0);
//   int t;
//   cin >> t;
//   while (t--) {
//     int n;
//     cin >> n;
//     vector<li> a(n), b(n);
//     for (auto& x : a) cin >> x;
//     for (auto& x : b) cin >> x;
//     li mnA = *min_element(a.begin(), a.end());
//     li sA = accumulate(a.begin(), a.end(), 0LL);
//     li mnB = *min_element(b.begin(), b.end());
//     li sB = accumulate(b.begin(), b.end(), 0LL);
//     li ans = min(mnA * n + sB, mnB * n + sA);
//     cout << ans << '\n';
//   }
// }

// MEXanized array 1870A

// #define f first
// #define s second
// #define push push_back
// #define mp make_pair
// #define loop(i, a, b) for (int i = a; i < b; i++)
// #define lloop(i, a, b) for (long long int i = a, i < b; i++)

// int n = 0, k = 0, x = 0;
// int ans = 0;

// inline void solve()
// {
//     scanf("%d %d %d", &n, &k, &x);
//     int r = k * (k - 1) / 2;
//     if (min(n, x + 1) < k) {
//         printf("%d\n", -1);
//     } else if (k == x) {
//         printf("%d\n", (r + (n - k)*(k - 1)));
//     } else if (k != x) {
//         printf("%d\n", (r + (x * (n - k))));
//     }
// }

// int T = 0;
// int main()
// {
//     scanf("%d", &T);
//     loop(i, 0, T) solve();
//     return 0;
// }

// 1873B

// inline void solve()
// {
//     scanf("%d", &n);
//     loop(i, 0, n) scanf("%d", &a[i]);
//     int prod = 0;
//     loop(i, 0, n) {
//         a[i]++;
//         int val = 1;
//         loop(j, 0, n) {
//             val *= a[j];
//         }
//         prod = max(val, prod);
//         a[i]--;
//     }
//     printf("%d\n", prod);
// }

// int T = 0;
// int main()
// {
//     scanf("%d", &T);
//     loop(i, 0, T) solve();
//     return 0;
// }

// 1873D
// #include <bits/stdc++.h>
 
// using namespace std;
 
// const int MAX = 200007;
// const int MOD = 1000000007;
 
// int score[10][10] = {
// 	{1,1,1,1,1,1,1,1,1,1},
// 	{1,2,2,2,2,2,2,2,2,1},
// 	{1,2,3,3,3,3,3,3,2,1},
// 	{1,2,3,4,4,4,4,3,2,1},
// 	{1,2,3,4,5,5,4,3,2,1},
// 	{1,2,3,4,5,5,4,3,2,1},
// 	{1,2,3,4,4,4,4,3,2,1},
// 	{1,2,3,3,3,3,3,3,2,1},
// 	{1,2,2,2,2,2,2,2,2,1},
// 	{1,1,1,1,1,1,1,1,1,1}
// };
 
// void solve() {
// 	int ans = 0;
// 	for (int i = 0; i < 10; i++) {
// 		for (int j = 0; j < 10; j++) {
// 			char c;
// 			cin >> c;
// 			if (c == 'X') {ans += score[i][j];}
// 		}
// 	}
// 	cout << ans << '\n';
// }
 
// int main() {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
// 	// solve();
// }

// 1873D

// int n = 0, k = 0;

// inline void solve()
// {
//     cin >> n >> k;
//     string strip;
//     cin >> strip;
//     int res = 0;
//     loop(i, 0, n) {
//         if (strip[i] == 'B') {
//             res++;
//             i += k - 1;
//         }
//     }
//     printf("%d\n", res);
// }

// int T = 0;
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cin >> T;
//     loop(i, 0, T) solve();
//     return 0;
// }

// 1873E

// const int N = 200007;

// inline void solve()
// {
//     int n;
//     ll x;
//     cin >> n >> x;
//     ll a[N];
//     loop(i, 0, n) cin >> a[i];
//     ll lo = 0, hi = 2000000007;
//     while (lo < hi)
//     {
//         ll mid = lo + (hi - lo + 1) / 2;
//         ll tot = 0;
//         loop(i, 0, n) {
//             tot += max(mid - a[i], 0LL);
//         }
//         if (tot <= x) lo = mid;
//         else hi = mid - 1;
//     }
//     cout << lo << "\n";
// }

// 1873A
// inline void solve()
// {
//     string s;
//     cin >> s;

//     if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') cout << "YES\n";
//     else cout << "NO\n";
// }