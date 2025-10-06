#include <iostream>
using namespace std;

bool sorted(int arr[], int n, int index) {
    if(index==n-1) return true;
    
    if(arr[index]>arr[index+1]) return false;
    return sorted(arr, n, index+1);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    bool output=false;
    if(sorted(arr, n,0)) {
        cout<<"true";
    }
    else
        cout<<"false";
    return 0;
}
