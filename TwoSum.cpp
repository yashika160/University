#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n],target;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cin>>target;
    bool found=false;
    
    for(int i=0;i<n;i++) {
        for(int j=i+1 ;j<n ; j++) {

            if(arr[i]+arr[j]==target) {
                found=true;
                cout<<i<<' '<<j<<endl;
                break;
            }
        }
    }
    
    if(!found) return -1;
    return 0;
}
