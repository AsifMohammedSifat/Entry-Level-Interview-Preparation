
#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    string name;
    void eat(){
        cout<< name <<" Can eat"<<endl;
    }
};

class Cat:public Animal{
    public:
    Cat(string name){
        this->name = name;
    }
};
                    
int main(){
    Cat obj("Cat");
    obj.eat(); 
            
              
    return 0;
}



//                      Public Derivation         Private D            Protected D

// Public Member            Public             Private             Protected  

// Private Member          Not inherited      Not Inherited       Not inherited

// Protected Member        Protected           Private               Protected