#include <iostream>
#include<vector>
using namespace std;



int main()
{
    vector<int>arr;
    
    // cout<<arr.size();
    // cout<<arr.capacity();
    
    // INSERT
    
    arr.push_back(5);
    arr.push_back(6);
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
    // DELETE 
    
    arr.pop_back();
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
   
    return 0 ;

}
