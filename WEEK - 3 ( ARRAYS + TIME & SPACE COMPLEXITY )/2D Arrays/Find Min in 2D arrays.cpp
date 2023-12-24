#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int findmax(int arr[][3],int row,int col){
    int ans = INT_MAX;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] < ans){
                ans = arr[i][j];
            }
        }
    }
    
    return ans;
}


int main()
{
   int arr [3][3]={
       {2,3,5},
       {4,3,6},
       {2,5,1}
   };
   
   int row=3;
   int col=3;
   
//   findmax(arr,row,col);
   cout<<findmax(arr,row,col);
    
   return 0;
}