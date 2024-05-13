#include<bits/stdc++.h>

using namespace std;

class A{
    int value;

    public:
    string name;
    A(string name){
        this->name = name;
    }   

    void setter(int v){
        value = v;
    }

    void getter(){
        cout<<value<<endl;
    }

};
                
int main(){
    A obj("Asif");
    // obj.value = 5;
    obj.setter(15);
    obj.getter();
    cout<<obj.name<<endl; 
            
              
    return 0;
}
