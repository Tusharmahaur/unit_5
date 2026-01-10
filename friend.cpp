#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Sample{
    int a,b;
    public:
        void setvalue(void){
            cout<<"Enter the value of a : ";
            cin>>a;
            cout<<"Enter the value of b : ";
            cin>>b;
        }
        friend float mean(Sample s);

};

float mean(Sample s){
    return float(s.a +s.b)/2.0;
}
int main(){
    Sample x;
    x.setvalue();
    cout<<"Mean value = "<<mean(x)<<endl;
    return 0;
}