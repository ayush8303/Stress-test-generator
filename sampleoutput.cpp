#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"
int mod = 1000ll * 1000ll * 1000ll + 7;
#define cout std::cout
#define cin std::cin

class mySolution
{
public:
    // paste your solution here
    string dummy(string &s, int &k)
    {
        k--;
        s = "hello world";
        return s;
    }
};

class authorSolution
{
public:
    // paste author's correct solution here
    string dummy(string &s, int &k)
    {
        k -= 2;
        s = "hello";
        return s;
    }
};
void solve()
{
    string s;
    int k;
    cin >> s >> k;

    // Copy the original input values if the function changes them
    string original_s = s;
    int original_k = k;
    string copyS = s;
    int copyK = k;

    mySolution me;
    string myAnswer = me.dummy(s, k);
    authorSolution author;
    string authorAnwer = author.dummy(copyS, copyK);

    if (myAnswer != authorAnwer)
    {
        cout << "Input :- " << endl;
        cout << "S = " << original_s << endl;
        cout << "K = " << original_k << endl;
        cout << "Your output = " << (myAnswer.length() == 0 ? "empty string" : myAnswer) << endl;
        cout << "Expected output = " << (authorAnwer.length() == 0 ? "empty string" : authorAnwer) << endl;
        cout << "------------" << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("wrong_ans.txt", "w", stdout);
#endif
    int t = 100;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
