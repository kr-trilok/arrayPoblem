#include<iostream>
#include<vector>
using namespace std;

void inserting(vector<int>&v,int size,int temp){
    int i;
    for( i=size-2; v[i]>temp && i>=0; i--){
        v[i+1] = v[i];
    }
    v[i+1]=temp;

}


int main(){

    int size;
    vector<int>arr;
    
    cout<<"enter size of your vector\n";
    cin>>size;

    cout<<"enter element in your vecctor in sorted manners\n";

    for(int i=0; i<size-1; i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    int temp;
    cout<<"enter the element which you want to insert:\n";
    cin>>temp;

    inserting(arr,size,temp);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
