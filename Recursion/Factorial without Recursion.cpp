#include <bits/stdc++.h>
using namespace std;

void fact(int n){
    
    int ans = 1;
    for (int i=2;i<=n;i++){
        
        ans= ans*i; 
    }
    cout<< ans;
}

int main()
{
	int n;
	cin >>n;
    fact(n);
	return 0;
}
