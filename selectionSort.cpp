#include<iostream>
#include<vector>

using namespace std;
//5 6 2 1 8
void  sortArrySelectioSort(vector<int>&v,int size){
    int temp,min;
    for(int i=0; i<size-1; i++){

        min=i;
        for(int j=i+1; j<size; j++){
            if(v[min]>v[j]){
                min = j;
            }
        }
        if(i!=min){
            temp = v[i];
            v[i]= v[min];
            v[min]=temp;
        }
    }
}

int main(){

    vector<int>v;
    int size;
    cout<<"enter size of your array\n";
    cin>>size;

    cout<<"enter element\n";

    for(int i=0; i<size; i++){
        int ele ;
        cin>>ele;
        v.push_back(ele);
    }
    sortArrySelectioSort(v,size);

    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}