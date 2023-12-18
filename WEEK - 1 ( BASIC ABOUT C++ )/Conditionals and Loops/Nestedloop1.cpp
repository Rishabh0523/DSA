#include <iostream>
using namespace std;

int main()
{
   for(int i=0; i<5; i=i+1){
       cout<<endl<< "Outer Loop " <<i<<endl<<endl;
       
       for(int j=0;j<3;j=j+1){
           cout<< "Inner Loop " <<j<<endl;
       }
   }
   
    return 0;
}
