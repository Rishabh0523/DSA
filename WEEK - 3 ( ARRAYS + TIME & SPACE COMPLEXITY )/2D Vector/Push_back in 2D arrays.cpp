#include<iostream>
#include<vector>
using namespace std;



int main()
{
    
    vector<vector<int> > brr;
    
    vector<int>vec1(10,0);
    vector<int>vec2(5,1);
    vector<int>vec3(6,4);
    vector<int>vec4(5,3);
    vector<int>vec5(10,5);
    
    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);
    
    for(int i=0;i<brr.size();i++){
        for(int j=0;j<brr[i].size();j++){
            cout<<brr[i][j]<<" ";
        }
        
        cout<<endl;
    }
   return 0;
}