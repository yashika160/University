#include <iostream>
using namespace std;

int maximum(int arr[],int n, int index, int max) {
    if(index==n) return max;
    
    if(max<arr[index]) {
        max=arr[index];
    }
    return maximum(arr,n,index+1,max);

}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int result= maximum(arr,n,0,arr[0]);
    cout<<result;
    return 0;
}
