 #include<iostream>
 #include<vector>

using namespace std;


int binarySearch(vector<int>&v, int searchItem){
    int low=0, up=v.size()-1, mid;
    while(low<=up){
        mid=(low+up)/2;
        if(searchItem>v[mid]){
            low = mid+1;
        }if(searchItem<v[mid]){
            up = mid-1;
        }if(searchItem == v[mid]){
            return mid;
        }
    }
    return -1;
}

int main(){

    int size, searchItem;

    cout<<"enter size of your vector :\n";
    cin>>size;

    cout<<"enter the element in vector(in sorted order) :\n";

    vector<int>v;

    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"enter your Search Item\n";
    cin>>searchItem;

    int index=binarySearch(v,searchItem);

    if(index == -1){
        cout<<searchItem<<" Not Found\n";
    }else{
        cout<<endl<<searchItem<<" found at position "<<index<<endl;
    }

    return 0;
}
