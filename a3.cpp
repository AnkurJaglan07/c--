#include<iostream>
using namespace std;

class employee{

       public:
        int id;
        string name;
        float sal;
        void setdetails(int a, string b,float c){
            id =a;
            name=b;
            sal=c;
        }

    
};

int main(){
    employee e1,e2,e3;
    e1.setdetails(1001,"amit",12000);
    cout<<"name:"<<e1.id<<endl;
    cout<<"name:"<<e1.name<<endl;
    cout<<"name:"<<e1.sal<<endl;
    return 0;
}