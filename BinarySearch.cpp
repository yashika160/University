#include <iostream>
using namespace std;

int Search(int arr[],int start, int end,int key) {
    if(start>end) return -1;
    int mid=start+(end-start)/2;
    if(arr[mid]==key) return mid;
    else if(arr[mid]<key) {
        start=mid+1;
        return Search(arr,start,end,key);
    }
    else{
        end=mid-1;
        return Search(arr,start,end,key);
    }
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
    cout<<Search(arr,0,n-1,key);
    return 0;
}
