#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"
const int N = 100000;
int mod = 1000ll * 1000ll * 1000ll + 7;
const int inf = 1000ll * 1000ll * 1000ll * 1000ll * 1000ll * 1000ll;
#define cout std::cout
#define cin std::cin
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
mt19937 rng2(chrono::high_resolution_clock::now().time_since_epoch().count());

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine randomShuffle(seed);
// std::shuffle(std::begin(a), std::end(a), randomShuffle);
// sort(pairs.begin(), pairs.end());
// pairs.resize(unique(pairs.begin(), pairs.end()) - pairs.begin());

int getRandomNumber(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
#ifndef ONLINE_JUDGE
  // freopen("input.txt","r",stdin);
  freopen("input.txt", "w", stdout);
#endif
  int t = getRandomNumber(1, 100);
  cout << t << endl;
  while (t--)
  {
    int n = getRandomNumber(2, 10); // length of the string
    for (int i = 1; i <= n; i++)
    {
      char ch = getRandomNumber(0, 25) + 'a'; // generating random lowercase char
      cout << ch;
    }
    cout << endl;
    int k = getRandomNumber(2, 15);
    cout << k << endl;
  }
  return 0;
}
