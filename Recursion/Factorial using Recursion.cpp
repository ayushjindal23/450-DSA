#include <bits/stdc++.h>
using namespace std;

unsigned int fact(unsigned int n){
    
    if (n == 0){
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
	unsigned int n;
	cin >>n;
    cout<<fact(n);
	return 0;
}
