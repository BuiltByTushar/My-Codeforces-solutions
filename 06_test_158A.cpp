#include <iostream>
#include <vector> 
using namespace std;

int main() {
    int n,k;
    int count = 0;
    cin >> n >>k;
    vector<int> arr(n);
    for(int i=0 ;i < n;i++)
    {
        cin >> arr[i];
        if(arr.at(k-1) <= arr.at(i) && arr.at(i) > 0)
        {
            count++;
        }
    }
	cout << count;
	
	return 0;
}
