#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define ms(s,n) memset(s,n,sizeof(s))
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int legendre (int n, int p){
    int ans=0;
    for (int i=p; i<=n; i*=p)
        ans+=n/i;
    return ans;
}

int main(){
    int n, k; scanf("%d%d", &n, &k);
    if (legendre(n, 2) >= k) printf("Yes");
    else printf("No");
    return 0;
}