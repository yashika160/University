#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>> n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    int top=0;
    int bottom=n-1;
    int row=0;
    int maxsum=0;
    
    while(top<=bottom) {
        int sum=0;
        for(int j=0;j<m;j++) {
            sum+=arr[top][j];
        }
        if(maxsum<sum) {
            maxsum=sum;
            row=top;
        }
        top++;
        
    }
    cout<<maxsum<<" "<<row;
    return 0;
    
}
