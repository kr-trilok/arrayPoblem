#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int LinearSearch(vector<int>v,int searchItem,int size){
    int i=0;
    while(i<size && v[i] != searchItem){
        i++;
    }
    if(i<size){
        return i;
    }
    else{
        return -1;
    } 
}
void menu(){
	cout<<"\n\n\n"<<"-----------: MENUE :--------------\n\n";
    cout<<"1. Search"<<endl<<endl;
    cout<<"0. Exit"<<endl<<endl;
}

int main(){
    int size, searchItem,choice;
    cout<<"Enter Size of your array\n";
    cin>>size;

    vector<int>v;
    cout<<"Enter Element in your array\n";

    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<"Enter your Search Item\n";
    cin>>searchItem;

    int index = LinearSearch(v,searchItem,size);

    if(index == -1){
        cout<<"Item Note Found\n";
    }else{
        cout<<searchItem<<" Found at index "<<index<<endl;
    }

    while(true){     //Used a menu for multiple time search.
        menu();
        cout<<"Enter Your Choice\n";
        cin>>choice;

        switch (choice){

            case 0:
                exit(0);

            case 1:
                cout<<"Enter your Search Item\n";
                cin>>searchItem;

                index = LinearSearch(v, size, searchItem);

                if(index == -1){
                    cout<<"Item Note Found\n";
                }else{
                    cout<<searchItem<<" Found at index "<<index<<endl;
                }
                break;

            default:
                cout<<"You have Selected Wrong Option\n";
                break;
            }
    }
    
    return 0;
}