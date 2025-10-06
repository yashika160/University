#include <iostream>
using namespace std;

int missing(int arr[],int n, int index, int sum) {
    if(index==n) return sum;
    sum+=arr[index];
    return missing(arr,n,index+1,sum);
}

int missing2(int arr[], int n, int index, int sum2) {
    if(index==n+1) return sum2;
    sum2+=index;
    return missing2(arr,n,index+1,sum2);
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int result= missing2(arr,n,0,0)-missing(arr,n,0,0);
    cout<<result;
    return 0;
}
