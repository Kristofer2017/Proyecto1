#include "iostream"

using namespace std;

int main(void)
{
int n;

cout << "\nIngrese un numero entero: ";
cin >> n;

if (n>0)
{
    cout << "\nEl numero es positivo diferente de cero\n";
}else{
    if (n<0)
    {
        cout << "\nEl numero es negativo diferente de cero\n";
    }else{
        cout << "\nEl numero es cero\n";
    }
}
}
