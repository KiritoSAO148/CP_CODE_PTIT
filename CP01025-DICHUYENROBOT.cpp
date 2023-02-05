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

int n; 
string s;
char c = 'B';
int cnt = 0;

void Try(int i, int x, int y) {
    if (i == n) {
        if(cnt == 0)
        cout << x << " " << y << endl;
        cnt++;
        return;
    }
    if (c == 'B') {
        if (s[i] == 'G') {
            c = 'B';
            Try(i + 1, x, y + 1);
        }
        if (s[i] == 'B'){
            c = 'N';
            Try(i + 1, x, y - 1);
        }
        if (s[i] == 'L') {
            c = 'T';
            Try(i + 1, x - 1, y);
        }
        if (s[i] == 'R') {
            c = 'D';
            Try(i + 1, x + 1, y);
        }
    }
    if (c == 'N') {
        if (s[i] == 'G') {
            c = 'N';
            Try(i + 1, x, y - 1);
        }
        if (s[i] == 'B') {
            c = 'B';
            Try(i + 1, x, y + 1);
        }
        if (s[i] == 'L') {
            c = 'D';
            Try(i + 1, x + 1, y);
        }
        if (s[i] == 'R') {
            c = 'T';
            Try(i + 1, x - 1, y);
        }
    }
    if (c == 'T') {
        if (s[i] == 'G') {
            c = 'T';
            Try(i + 1, x-1, y);
        }
        if (s[i] == 'B') {
            c = 'D';
            Try(i + 1, x+1, y);
        }
        if (s[i] == 'L') {
            c = 'N';
            Try(i + 1, x , y-1);
        }
        if (s[i] == 'R') {
            c = 'B';
            Try(i + 1, x, y+1);
        }
    }
    if (c == 'D') {
        if (s[i] == 'G') {
            c = 'D';
            Try(i + 1, x+1, y);
        }
        if (s[i] == 'B') {
            c = 'T';
            Try(i + 1, x-1, y);
        }
        if (s[i] == 'L') {
            c = 'B';
            Try(i + 1, x, y+1);
        }
        if (s[i] == 'R') {
            c = 'N';
            Try(i + 1, x , y-1);
        }
    }
}

int main(){
    FileIO();
    FastIO;
    cin >> n >> s;
    Try(0, 0, 0);
    return 0;
}