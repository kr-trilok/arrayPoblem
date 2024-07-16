
#include<iostream>
#include<vector>

using namespace std;

int indexSum(vector<int> ans, int l,int r){
    int size = ans.size();
    int temp=0;

    for(int i=0; i<size; i++){
        if(i>=l && i<=r){
            temp+=ans[i];
        }
    }
    return temp;
}

int main(){
    
    vector<int>ans;
    int n,r,l;
    cout<<"enter size of your array\n";
    cin>>n;

    cout <<"enter element in your array\n";
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        ans.push_back(ele);
    }
    cout<<"enter your staring and ending index number\n";
    cin>>l;
    cin>>r;

    cout<<indexSum(ans, l, r)<<endl;
    return 0;
}