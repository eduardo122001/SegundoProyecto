#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Ingrese el primer numero"<<endl;
    cin>> a;
    if(a>10)
        cout<<"!GRACIAS! "<<"el numero es:"<<a<<endl;


    cout<<"Ingrese el segundo numero"<<endl;
    int b;
    cin>> b;
    if(b>10)
        cout<<"!GRACIAS! "<<"el numero es:"<<b<<endl;
    int c;
    cout<<"Ingrese el tercer numero"<<endl;
    cin>> c;
    if(c>10)
        cout<<"!GRACIAS! "<<"el numero es:"<<c<<endl;

        if(a>b){
        if (a>c){cout<<a<<" es mayor"<<endl;}


    }
    else{
    if (b>c){
    cout<<b<<" es mayor"<<endl;}
    else{cout<<c<<" es mayor"<<endl;}

    }

    return 0;
}
