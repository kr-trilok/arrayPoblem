#include<iostream>
#include<vector>

using namespace std;

int xchangeAdjacentElement(vector<int>arr, int size){
    int xchange=0;
    int temp;
    for(int i=0; i<size; i++){

        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            xchange++;

        }
    }

    return xchange;

}
int main(){

    vector<int>arr;
    int size;
    
    cout<<"enter size of array\n";
    cin>>size;

    cout<<"enter element in array\n";

    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    cout<<"Total xchanges occured =  "<<xchangeAdjacentElement(arr,size);
    return 0;
}