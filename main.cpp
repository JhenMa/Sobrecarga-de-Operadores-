#include <iostream>
#include "DynamicArray.h"
#include "Curso.h"

using namespace std;

int main() {
    Curso c1("CVV",15,15,"123456");
    Curso c2("CCII",20,20,"aprobar");
    Curso c3("Desarrollo Basado en Plataformas",0,40,"DBP");
    Curso c4("CCII",20,20,"0000000");//solo para que le profe no se enoje
    
    Curso arr[3]={c1, c2, c3};//
    int tam = sizeof(arr) / sizeof(arr[0]);

    cout << c1 << endl;

    DynamicArray<Curso> p(arr,tam);
    
    cout << p << endl;
    
    Point a(10,54);
    cout<<a<<endl;

    return 0;
}