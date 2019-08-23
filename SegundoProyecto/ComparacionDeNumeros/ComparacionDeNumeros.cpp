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

        if(a>b){
        cout<<a<<" es mayor que "<<b<<endl;

    }
    else{
        cout<<b<<" es mayor que "<<a<<endl;

    }
    return 0;
}
