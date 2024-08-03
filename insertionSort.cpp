#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>&arr, int size){

    int i,j,k;

    for(i=1; i<size; i++){
        k=arr[i]; //k is to be inserted ar proper place
        for(j=i-1; j>=0 && k<arr[j]; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=k;
    }
}

int main(){
    vector<int>arr;
    cout<<"enter size of your array\n";
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cout<<"enter element "<<i+1<<endl;
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    insertionSort(arr,n);

    cout<<"sorted array is: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}