#include<iostream>
#include<vector>
using namespace std;


//bubble sort operation excution function

void bubbleSort(vector<int>&arr,int size){
    
    int temp;
    for(int i=0; i<size-1; i++){

        int xchange=0; //every loop iteration reintialize 0.

        for(int j=0; j<size-1-i; j++){

            if(arr[j]>arr[j+1]){

                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                xchange++;

            }
        }if(xchange == 0){    // comparing the no occurences of xchanges with 0s true then loop will terminated
            break;
        } 
    }
}

int main(){

    int size;
    vector<int>arr;

    cout<<"enter size of your vector\n";
    cin>>size;

    cout<<"enter element in your vector\n";
    
    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    bubbleSort(arr,size);//function called

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}

