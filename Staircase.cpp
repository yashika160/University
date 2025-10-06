#include <iostream>
using namespace std;
int one(int n,int index);
int two(int n,int index);



int one(int n,int index) {
    if(index>=n-1) return 1;
    return one(n,index+1)+two(n,index+2);
}

int two(int n,int index) {
    if(index>=n-1) return 1;
    return one(n,index+1)+two(n,index+2);
}

int main() {
    int n;
    cin>>n;
    int result=one(n,0);
    cout<<result;
    return 0;
}
