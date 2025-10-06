#include <iostream>
using namespace std;

int main() {
    int n,m;
    int arr[10][10];
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
           cin>>arr[i][j]; 
        }
    }
    int t=0;
    int b=n-1;
    int r=m-1;
    int l=0;
    
    
    while(t<=b && l<=r) {    
        
        for(int j=l;j<=r;j++) {
            cout<<arr[t][j]<<" ";
        }
        t++;
        
        for(int i=t;i<=b;i++) {
            cout<<arr[i][r]<<" ";
        }
        r--;
        
        if(t<=b) {
            for(int j=r;j>=l;j--) {
                cout<<arr[b][j]<<" ";
            }
                b--;
        }
        
        if(l<=r) {
            for(int i=b;i>=t;i--) {
                cout<<arr[i][l]<<" ";
            }
            l++;
        }
        
    }
    return 0;
        
}
