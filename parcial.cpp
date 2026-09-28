#include <iostream>
using namespace std;
float voltaje,resistencia,corriente;

int main(){
     cout<<"ingresar voltaje:"<<endl;
     cin>>voltaje;
     cout<<"ingresar resistencia:"<<endl;
     cin>>resistencia;

     if (voltaje < 0){
        cout<<"el dato es erroneo."<<endl;
     }
     else if(resistencia < 0){
        cout<<"el dato es erroneo."<<endl;
     }
     else{
        corriente= voltaje/resistencia;
        cout<<"El resultado es: "<< corriente << endl;
     }
    return 0;
}