#include "iostream"

using namespace std;

int main(void)
{
int n1, n2;

cout << "\nEs un numero divisible entre otro?\n";
cout << "\nIngrese el numerador: ";
cin >> n1;

cout << "\nIngrese el denominador: ";
cin >> n2;

if (n1%n2 == 0)
{
    cout << "\nEl numero si es divisible\n";
}else{
 cout << "\nEl numero no es divisible\n";
}
return 0;
}
