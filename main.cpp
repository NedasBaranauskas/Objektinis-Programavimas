#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    string vardas;
    cout<<"Iveskite varda";
    cin>>vardas;
    for (int i=0; i<vardas.length()+14; i++){
        cout<<"*";
    };
    cout<<endl<<"*";
    for (int i=0; i<vardas.length()+12; i++){
        cout<<" ";
    };
    cout<<"*"<<endl;
    cout<<"* Sveikas, "<<vardas<<"! *";
    cout<<endl<<"*";
    for (int i=0; i<vardas.length()+12; i++){
        cout<<" ";
    };
    cout<<"*"<<endl;
    for (int i=0; i<vardas.length()+14; i++){
        cout<<"*";
    };

}