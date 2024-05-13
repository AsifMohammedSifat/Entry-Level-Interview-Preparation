#include<bits/stdc++.h>

using namespace std;

class A{
    public:
    int value;
    //constructor
    A(int value){
        this->value = value;
        cout<<"Constructor Called"<<endl;
    }

    //inside the class definition
    void display(){
        cout<<"Hello\n";
    }

    int temp(int v);
};


//outside method definition
int A::temp(int v){
    return v;
}
                    
int main(){
    A obj(8);
    cout<<endl<<obj.temp(35);
            
              
    return 0;
}
