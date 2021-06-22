#include <iostream>
using namespace std;

int main() {
    int n,sum;
    cin>>n;
	cin>>sum;
	
	int arr[n];
	
	for (int i = 0; i < n; i++)
	    cin>>arr[i];
	
	int count = 0; 
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                count++;
 
     cout<<"Count pairs with given sum "<<sum<<" is "<<count;	
	return 0;
}