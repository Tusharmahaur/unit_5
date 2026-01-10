#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Class_2;//forward declaration

class Class_1{
    int value1;
    public:
        void getData(int a){
            value1 = a;
        }
        void putData(void){
            cout<<value1<<endl;}

        friend void exchange(Class_1 &,Class_2 &); //friend function prototype 
};

class Class_2{
    int value2;
    public:
    void getData(int a){
        value2 = a;
    }
    void putData(void){
        cout<<value2<<endl;
    }

    friend void exchange(Class_1 &,Class_2 &);
}

void exchange(Class_1 x, Class_2 y){
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main(){
    Class_1 C1;
    Class_2 C2;

    C1.getData(100);
    C2.getData(200);

    cout<<"Value before exchange"<<endl;
    C1.putData();
    C2.putData();
    exchange(C1,C2);//swapping

    cout<<"Values after swapping/exchanging "<<endl;
    C1.putData();
    C2.putData();
    return 0;
}