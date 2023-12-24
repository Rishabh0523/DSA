#include <iostream>
#include<vector>
using namespace std;


bool findTarget(int arr[][3],int row ,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == target){
                return true ;
            }
        }
    }
        return false;
}



int main()
{
   int arr [3][3]={
       {2,3,5},
       {4,3,6},
       {2,5,7}
   };
   
   int row=3;
   int col=3;
   int target =3;
   
    bool find= findTarget(arr,row,col,target);
  cout<<find<<endl;

    
   return 0;
}
  