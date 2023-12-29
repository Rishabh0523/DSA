#include <iostream>
#include<string.h>
using namespace std;

int findLength(char ch[] , int size){
    int Length=0;
    
    for(int i=0;i<size;i++){
        if(ch[i] == '\0'){
            break;
        }
        
        else {
            Length++;
        }
    }
    
    return Length;
}

int main()
{
    char ch[100];
    cin>>ch;
  
    
    int len =findLength(ch ,100);
    
    cout<<"Length of strings is : "<<len<<endl;
    cout<<strlen(ch);
   
   
   
    return 0;
}
