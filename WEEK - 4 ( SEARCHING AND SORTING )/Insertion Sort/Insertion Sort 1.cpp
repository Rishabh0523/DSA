#include <iostream>
#include<vector>
using namespace std;

void print(vector<int>&v) {
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
}

void insertionSort(vector<int>&v){
    int n = v.size();
    for(int i=1; i<n;i++){
        int key=v[i];
        int j=i-1;
        
        while(j>=0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j + 1]=key;
    }
}


int main()
{
    vector<int>v={44,33,55,22,11};
    insertionSort(v);
    print(v);
    
    return 0;
}