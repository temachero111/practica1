#include <iostream>
#include <stdlib.h>

using namespace std;

class Neuronas{
private://attributos
   int id;
   float voltaje;
    int posicionx;
    int posiciony;
    int red;
    int green;
    int  blue;
public://metodos
    Neuronas(int,float,int,int,int,int,int);
    Neuronas();
    void read();
    void write();

};


Neuronas::Neuronas(int _id,float _voltaje,int _posicionx,int _posiciony,int _red,int _green,int _blue)
{
    id= _id;
   voltaje = _voltaje;
    posicionx = _posicionx;
    posiciony = _posiciony;
    red = _red;
    green = _green;
    blue = _blue;
}
Neuronas::Neuronas(){
}
void Neuronas::read(){
    cout<<"the id is:"<<id<<endl;
    cout<<"the posicion in x is:"<<posicionx<<endl;
    cout<<"the posicion in y is:"<<posiciony<<endl;
    cout<<"Red:"<<red<<endl;
    cout<<"Green:"<<green<<endl;
    cout<<"Blue:"<<blue<<endl;
}
void Neuronas::write(){

        cout<<"what is the ID?"<<endl;
        cin>>id;
        cout<<"What is the voltaje?"<<endl;
        cin>>voltaje;
        cout<<"what is posicion in X?"<<endl;
        cin>>posicionx;
        cout<<"what is posicion in Y?"<<endl;
        cin>>posiciony;
        cout<<"RED"<<endl;
         cin>>red;
        cout<<"GREEN"<<endl;
        cin>>green;
        cout<<"BLUE"<<endl;
        cin>>blue;
}
class Lista{
    private:

        Neuronas Adm[50];
        int first=0;
        int fin=0;
    public:
        Lista();
        void add_to_beginning(Neuronas);
        void add_to_the_end(Neuronas);
        void see_list();

};

Lista::Lista(){
}

void Lista::add_to_beginning(Neuronas a)
{
    Neuronas aux[50];
    if(first==fin){
        Adm[first]=a;
        fin++;
    }
    else{
        for(int i=0; i<fin; i++ ){
           aux[i+1]=Adm[i];

        }
        for(int i=0; i<fin; i++ ){
          Adm[i+1]= aux[i+1];

        }
        Adm[first]=a;
        fin++;
    }

}
void Lista::add_to_the_end(Neuronas a)
{
    Adm[fin]=a;
      fin++;

}
void Lista::see_list()
{
    for(int i=0; i<fin; i++ ){
    Adm[i].read();
    }

}
int main()
{
    int opc=0,acum=0;
    Neuronas O[50];

    Lista a;

do{
        cout<<"menu creacion neuronas"<<endl;
        cout<<"1. agregar al inicio"<<endl;
        cout<<"2. agregar al final"<<endl;
        cout<<"3. imprimir  tpdos los objetos"<<endl;
        cout<<"4. salir"<<endl;
         std::cin >> opc;
        switch(opc){
        case 1:
            O[acum].write();
            a.add_to_beginning(O[acum]);
            acum++;
            break;
        case 2:
            O[acum].write();
            a.add_to_the_end(O[acum]);
            acum++;
            break;
        case 3:
            a.see_list();
            break;
        case 4:
            cout<<"adios"<<endl;
            break;
        default:

            break;

        }

}while(opc<4);



    return 0;
}
