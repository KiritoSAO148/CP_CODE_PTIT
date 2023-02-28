#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define TC() int t; cin >> t; while (t--)
#define el cout << "\n"
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn 100000

const int MOD = (int) 1e9+7;

void FileIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int prime[maxn + 1];

void sieve(){
	f1 (i,maxn) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= sqrt(maxn); ++i){
		if (prime[i]){
			for (int j = i * i; j <= maxn; j += i){
				prime[j] = 0;
			}
		}
	}
}

int binpow(int a, int b){
	if (b == 0) return 1;
	int x = binpow(a, b / 2);
	if (b % 2 == 0) return x * x;
	return a * x * x;
}

ll count(int n){
	ll cnt = 1;
	for (int i = 2; i <= n; ++i){
		if (prime[i]){
			int exp = 1;
			while (n / binpow(i, exp) > 0) ++exp;
			cnt = (cnt * exp);
			cnt %= MOD;
		}
	}
	return cnt;
}

int main(){
    //FileIO();
    FastIO;
    sieve();
    TC(){
    	int n; cin >> n;
    	cout << count(n); el;
    }
    return 0;
}
