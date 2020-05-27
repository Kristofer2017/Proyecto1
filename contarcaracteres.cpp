#include "iostream"
#include "string"

using namespace std;

int main(void)
{
string palabra;
int n;

cout << "Ingresar una palabra: ";
cin >> palabra;

n = palabra.length();

if (n > 10)
{
    cout << "\nLa palabra ingresada es mayor a 10 caracteres\n";
}else{
    cout << "\nLa palabra ingresada es menor o igual a 10 caracteres\n";
}

if (n%2 == 0)
{
    cout << "\nLa longitud de la palabra es par\n";
}else{
    cout << "\nLa longitud de la palabra es impar\n";
}

return 0;
}
