#include <iostream>
using namespace std;

int main() {
  
   float a=0;
   float b=0;
   int opzione=0;

    cin>>a;
    cin>>b;
    cin>>opzione;

    switch (opzione) {
        case 0: cout<<(a*b)/2;
        break;
        case 1: cout<<(a*a);
        break;
        case 2: cout<<(a*b);
        break;
        default:
            cout<<"stringa non valida";
    }
   
   
   
   return 0;
}
