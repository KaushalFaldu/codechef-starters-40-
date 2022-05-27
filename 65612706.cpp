// #include <iostream>
#include<bits/stdc++.h>
#define  kp int
using namespace std;


int main()
{
	int a;
	cin>>a;
	while(a--)
	{
	    long long ans = 0;
	    int n;
        cin >> n;
        int a[n] , b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        map<long, long> mp;
        for(int i = 0; i < n; i++){
            ans += mp[a[i] ^ b[i]];
            mp[a[i] ^ b[i]]++;
        }
        cout << ans << endl;
	}
	return 0;
}