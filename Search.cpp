#include <iostream>
using namespace std;

int search(int arr[], int n, int key, int index) {
    if(index==n) return -1;
    if(arr[index]==key) {
        return index;
    }
    return search(arr, n,key, index+1);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<search(arr, n, key, 0);
    return 0;
}
