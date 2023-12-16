#include <iostream>
#include<cmath>
using namespace std;

int binaryno = 0;
int i =0;

int decimalToBinaryMethod1(int n) {
    // Bitwise method
    
    while(n>0){
        int bit = ( n & 1 );
        binaryno = bit*pow(10,i++) + binaryno;
        
        n = n>>1;
    }
    
    return binaryno;
}

int main()
{
    
    int n;
    cin>>n;
    int binary =decimalToBinaryMethod1(n);
    cout<<binary;

    return 0;
}
