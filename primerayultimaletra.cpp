#include "iostream"
#include "string"

using namespace std;

int main(void)
{

string palabra, l1, l2;
int n;

cout << "\nIngresar una palabra: ";
cin >> palabra;

n = palabra.length();

l1 = palabra[0];
l2 = palabra[n-1];

if (l1 == l2)
{
    cout << "\nInicia y termina con la misma letra\n";
}
else
{
    cout << "\nInicia y termina con letras diferentes\n";
}

return 0;
}
