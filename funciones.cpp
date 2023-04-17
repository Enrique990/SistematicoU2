#include<iostream>

using namespace std;

void angulos();
void triangulos();
void area();

int largo, ancho, ar;

int main(int argc, char const *argv[])
{
    int opcion =0;
    while (opcion !=4)
    {
        cout << "1. Identificar la clasificacion de un ángulo segun su medida." << endl;
        cout << "2. Identifica que tipo de clasificacion es un triángulo segun la medida de sus lados." << endl;
        cout << "3. Calcular area." << endl;
        cout << "4. Salir." << endl;
        cin >> opcion;
    }
    
    switch (opcion)
    {
    case 1{
        cout << "Ingrese el angulo: ";
        cin >> num;
        void angulos();
        break;
    }
        
    
    default:
        break;
    }
    return 0;
}

void angulos(){
    if (int i > 0; i< 90)
    {
        cout<<"el angulo es agudo " <<endl;
    }if (int i=90)
    {
        cout<<"el angulo es recto " <<endl;
    }if (int i > 90; i< 180)
    {
        cout<<"el angulo es obtuso " <<endl;
    }if (int i=180)
    {
        cout<<"el angulo es extendido " <<endl;
    }
}

void triangulos(){
    if (int a = 3)
    {
        cout<<"es un triangulo equilatero " <<endl;
    }if (int a = 2)
    {
        cout<<"el triangulo  es Isosceles " <<endl;
    }if (int a = 0)
    {
        cout<<"el triangulo es Escaleno " <<endl;
    }
}

void area(){
    cout<<"ingrese el largo ";
    cin>> largo;
    cout<<"ingrese el ancho ";
    cin>> ancho;
    largo * ancho = ar;
    cout<<"el area es: "<< ar <<endl;
}