#include <iostream>
#define Max 50
using namespace std;

int searchSmallestElement(int arr[],int size){
    int temp = 0;
    for(int i=1; i<size; i++){
        if(arr[temp]>arr[i]){
            temp=i;
        }
    }
    return temp;
}

int main() {
    int arr[Max],size,min=0;
    cout<<"enter size of your array(size<=50)\n";
    cin>>size;

    cout<<"enter the element in Array\n";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    min=searchSmallestElement(arr,size);

    if(min>0){
        int temp = arr[0];
        arr[0]=arr[min];
        arr[min]=temp;
    }else{
        cout<<"Smallest element of array is 0th element\n";
    }
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
