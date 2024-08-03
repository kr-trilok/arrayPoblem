#include<iostream>
#include<vector>
using namespace std;

void inserting(vector<int>&v,int &size){
    int i,item,index;
    cout<<"enter element your want to insert\n";
    cin>>item;
    cout<<"enter index no where element is to be inserted\n";
    cin>>index;
    for( i= size-2;i>=index;i--){
        
        v[i+1]=v[i];
    }
    v[i+1]=item;
}

int main(){

    int size;
    vector<int>v;

    cout<<"enter size of your vector\n";
    cin>>size;

    cout<<"enter element in vector\n";
    for(int i=0; i<size-1; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    inserting(v,size);

    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}