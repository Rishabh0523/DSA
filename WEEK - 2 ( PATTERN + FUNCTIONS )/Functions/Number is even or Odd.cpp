
#include<iostream>
using namespace std;


void isevenorodd(int n){
    if(n%2==0){
        cout<<"Even "<<endl;
    }
    
    else{
        cout<<"Odd "<<endl;
    }
}


int main()
{
    
int n;
cin>>n;

isevenorodd(n);

   
}

// Bitwise Method -  2nd way



#include<iostream>
using namespace std;


void isevenorodd(int n){
    if((n&1)==0){
        cout<<"Even "<<endl;
    }
    
    else{
        cout<<"Odd "<<endl;
    }
}


int main()
{
    
int n;
cin>>n;

isevenorodd(n);

   
}
