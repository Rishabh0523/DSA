#include <iostream>
using namespace std;

int main()
{
    char ch[10];
    cin>>ch;
    
   cout<<"Printing the values of : "<<ch<<endl;
   
   for(int i=0;i<10;i++){
       cout<<"At index : "<<i <<" "<<ch[i]<<endl;
   }
   
   char temp =ch[6];
   
   int value =(int)temp;
   
   cout<<"Printing integer value : "<<value<<endl;
   
   
    return 0;
}
