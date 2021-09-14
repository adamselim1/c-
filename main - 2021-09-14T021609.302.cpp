#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
unsigned long long gcd(unsigned long long a, unsigned long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
unsigned long long lcm(unsigned long long a, unsigned long long b)
{
    return (a / gcd(a, b)) * b;
}
int main() {
	FIO
	int t;
	cin>>t;
	while(t--){
	    unsigned long long n,m,ma=1,mb=1;
	    cin>>n>>m;
	    int a[n],b[n];
	    for (int i = 0; i < n; i++) {
	        cin>>a[i];
	        ma*=a[i];
	    }
	    for (int i = 0; i < m; i++) {
	        cin>>b[i];
	        mb*=b[i];
	    }
	    cout<<gcd(ma,mb)<<' '<<lcm(ma,mb)<<"\n";
	}
	return 0;
}