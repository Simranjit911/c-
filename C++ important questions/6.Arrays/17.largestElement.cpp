#include<iostream>
using namespace std;
int main(){
    // find the laRGEST ELELEMENT IN THE ARRAY
    int n;
    cout<<"Enter:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The max elemnent is "<<max;
}