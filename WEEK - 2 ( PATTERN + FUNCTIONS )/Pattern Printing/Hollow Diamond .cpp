#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
         for(int col=0;col<row+1;col++){
             
             if(col==0 || col== row + 1 - 1){
             
            cout<<"* ";
        }
        
        else{
            cout<< "  ";
        }
         }
        cout<<endl;
    }
    
    
    
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        int totalCol = n-row;
        for(int col=0;col<totalCol;col++){
            if(col==0 || col == totalCol-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        
        cout<<endl;
    }
}