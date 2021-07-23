#include <bits/stdc++.h>
using namespace std;

void fibu(int n){
    
    static int i1=0,i2=1,i3;
    if(n>0){
         i3 = i1+i2;
         i1=i2;
         i2=i3;
         cout<<i3<<" ";
         
         fibu(n-1);
     }
}

int main()
{
	int n;
	cin >>n;
	cout<<0<<" "<<1<<" ";
	fibu(n-2);  //as we have already printed 0 & 1
	return 0;
}

// If we declare a variable as static, it exists till the end of the program once initialized.
// For example, if we declare an int variable in a function, then that variable is a local variable
// for that function which gets destroyed as the function ends. 
// But if we declare an int variable in a function also as static,
// then that variable will not get destroyed as the function ends and 
// will not get destroyed until the program ends.