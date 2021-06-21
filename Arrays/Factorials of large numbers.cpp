#include <iostream>
using namespace std;

int fact(int n){
        if(n == 0){
			return 1;
		}
		int smallAns = fact(n - 1);
		return n * smallAns;
    }

int main() {
    int n;
    cin>>n;
	int ans = fact(n);
	cout<<"The factorial of "<<n<<" is "<<ans;	
	return 0;
}