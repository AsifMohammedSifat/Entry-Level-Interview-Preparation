/*
||-----------------------||
||  All Praise to Allah  ||
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/
#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
#define nl '\n' 
using namespace std;


class Calculator{
    public:
    Calculator(){
        cout<<"I am Calculator"<<endl;
    }

    void d(int x,int y){
        cout<<x+y<<endl;
    }


    void d(int x,int y,int z){
        cout<<x+y+z<<endl;
    }
    
};
                    
int main(){
    Calculator A;
    A.d(1,2);
    A.d(1,2,3);
            
              
    return 0;
}
