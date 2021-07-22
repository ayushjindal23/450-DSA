#include <bits/stdc++.h>
using namespace std;

void fibu(int n){
    int i1=0,i2=1,i3;
    cout<<i1<<" "<<i2<<" ";
     for(int i=2;i<n;++i){
         i3 = i1+i2;
         cout<<i3<<" ";
         i1=i2;
         i2=i3;
         
     }
}

int main()
{
	int n;
	cin >>n;
	fibu(n);
	return 0;
}
