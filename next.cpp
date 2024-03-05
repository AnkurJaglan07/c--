#include<iostream>
using namespace std;
class Test{
    public:
    void show();
    
}
void show(){
    cout<<"show function called"<<endl; 
}
int x=23;
int main(){
    int x=12;
    // int &y=x;
    int y=55;
    int c=::x+y;


    Test

    cout<<"x="<<c<<"\n";
    cout<<"x="<<::x<<"\n";
    cout<<"y="<<y<<"\n";
}

