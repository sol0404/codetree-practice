#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    int sum=0;
    for(int i=0; i<10; i++){
        cin>>a[i];
    }
    sum=a[2]+a[4]+a[9];
    cout<<sum;

    return 0;
}