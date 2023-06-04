#include <iostream>
using namespace std;

bool esPositivo (float numero)
{
    return numero > 0;
}

int main()
{
    cout << "es positivo? " << esPositivo(0.5) << endl;
    return 0;
}

