#include "iostream"

using namespace std;

int main(void)
{
int n;

cout << "\nIngrese un numero: ";
cin >> n;
cout << endl;

if (n%2==0){
    cout << "El numero es par" << endl;
}else{
    cout << "El numero es impar" << endl;
}
return 0;
}
