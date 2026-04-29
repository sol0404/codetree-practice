#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr1[100], arr2[100], n=0, a=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
        if(arr1[i]%2==0){
        arr2[a]=arr1[i];
        a++;
        }
    }
    for(int i=0; i<a; i++){
        cout<<arr2[i]<<" ";
    }
    
    return 0;
}