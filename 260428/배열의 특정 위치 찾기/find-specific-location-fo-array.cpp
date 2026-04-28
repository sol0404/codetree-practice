#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10], sum=0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    for(int i=1; i<10; i+=2){
        sum+=arr[i];
    }
    int s=0, a=0;
    for(int i=2; i<10; i+=3){
        s+=arr[i];
        a++;
    }
    cout<<sum<<" ";
    cout<<fixed;
    cout.precision(1);
    cout<<(double)s/a;
    return 0;
}