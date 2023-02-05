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
#define maxn 

const int MOD = (int) 1e9+7;

void FileIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

bool cmp (string a, string b){
	if (sz(a) != sz(b)) return sz(a) < sz(b);
	return a < b;
}

int main(){
    FileIO();
    FastIO;
    vector <string> v;
    TC(){
    	string s; cin >> s;
    	s += "@";
    	string res = "";
    	f0 (i,sz(s)){
    		if (isdigit(s[i])) res += s[i];
    		else{
    			if (res != ""){
    				v.pb(res);
    				res = "";
    			}
    		}
    	}
    }
    for (string x : v){
    	int cnt = 0;
    	for (char c : x){
    		if (c == '0') ++cnt;
    	}
    	if (cnt == sz(x)) v.pb("0");
    }
    sort(all(v), cmp);
    for (string x : v){
    	if (x == "0") cout << x;
    	else{
    		int idx = 0;
	    	if (x[0] == '0'){
	    		f0 (i,sz(x)){
	    			if (x[i] == '0') idx = i + 1;
	    			else break;
	    		}
	    	}
	    	for (int i = idx; i < sz(x); ++i) cout << x[i];
    	}
    	el;
    }
    return 0;
}