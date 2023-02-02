#include <stdio.h>
#include <math.h>

typedef long long ll;

int nt (int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int check (int n){
	int sum=0;
	while (n){
		int d=n%10;
		sum+=d;
		if (d!=2 && d!=3 && d!=5 && d!=7) return 0;
		n/=10;
	}
	if (!nt(sum)) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a,b;
		scanf("%d %d", &a, &b);
//		if (a>b){
//			int tmp=a;
//			a=b;
//			b=tmp;
//		}
		int cnt=0;
		for (int i=a; i<=b; i++){
			if (check(i) && nt(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
