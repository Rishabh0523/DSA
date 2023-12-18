#include <iostream>
using namespace std;

int main() {

int i =0;

{
   for(; ; ){
       if(i<5){
       cout<<endl<< "Outer Loop " <<i<<endl<<endl;
       
       for(int j=0;j<3;j=j+1){
           cout<< "Inner Loop " <<j<<endl;
       }
       i=i+1;
   }
   
   }
   
    
}

return 0;

}
