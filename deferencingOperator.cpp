// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class M{
//     int x,y;
//     public: 
//     void set_xy(int a,int b){
//         x = a;
//         y = b;
//     }
//     friend int sum(M m);

// };

// int sum(M m){
//     int M ::* px = &M::x;
//     int M ::* py = &M ::y;
//     M *pm = &m;
//     int S = m.*px + pm->*py;
//     return S;
// }
// int main(){
//     M n;
//     void(M:: *pf)(int ,int) = &M :: set_xy;
//     (n.*pf)(10,20);
//     cout<<"Sum = "<<sum(n)<<endl;
//     M*op = &n;
//     (op->*pf)(30,40);
//     cout<<"Sum = "<<sum(n)<<endl;
    
//     return 0;
// }


//pointer to pointer address 
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 3,b=4;
    
//     int *ptr = &a;//pointer store to address 

//     int **parentPtr = &ptr;//pointer to pointer address store

//     int ***ppPtr = &parentPtr;//pointer to pointer to pointer address store 

//     int ****pppPtr = &ppPtr;//pointer to pointer to pointer to pointer address store in four times

//     cout<<&ptr<<endl;
//     cout<<parentPtr<<endl;
//     cout<<&parentPtr<<endl;
//     cout<<ppPtr<<endl;
//     cout<<&ppPtr<<endl;
//     cout<<pppPtr<<endl;
    
//     return 0;
// }

//dereferencing operator -> ka matlab sirf itna hai ki value ko print kara dena jo uss address par hai 

// #include <iostream>
// using namespace std;

// int main(){ 
//     int a = 3,b=4;
    
//     int *ptr = &a;//pointer store to address 

//     int **parentPtr = &ptr;//pointer to pointer address store

//     int ***ppPtr = &parentPtr;//pointer to pointer to pointer address store 

//     int ****pppPtr = &ppPtr;//pointer to pointer to pointer to pointer address store in four times

//     cout<<*(&a)<<endl     // |
//         <<a<<endl        // | -> Same value print is 3
//         <<*ptr<<endl;   // |
//     cout<<**parentPtr<<endl;
//     cout<<***ppPtr<<endl;
//     cout<<****pppPtr<<endl;
//     return 0;
// }

//null pointer 
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a = 10;
//     int *ptr = NULL;
//     cout<<ptr<<endl;
//     return 0;
// }

//class object array 

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Complex{
//     int real,img;
//     public:
//         void getData(){
//             cout<<"The real part is : "<<real<<endl;
//             cout<<"The imaginary part is : "<<img<<endl;
//         }

//         void setData(int a, int b){
//             real = a;
//             img = b;
//         }
// };

// int main(){
//     // Complex c1;         //|case 1
//     // Complex *ptr = &c1;   |   
//     Complex *ptr = new Complex;
//     // c1.setData(1,3);
//     // c1.getData();
//     // (*ptr).setData(1,3); //(*ptr).setData(1,3) = ptr->setData(1,3)
//     ptr->setData(1,3); 
//     (*ptr).getData();
//     Complex *ptr1 = new Complex[4];//That is the object array

//     (ptr1+1)->setData(3,5);
//     (ptr1+1)->getData();    
//     return 0;
// }