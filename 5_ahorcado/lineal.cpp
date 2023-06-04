#include <iostream>
using namespace std;

float funLineal(float x)
{
    return 3 * x + 4;
}

int main()
{
    for(float i = 0; i < 20; i += 0.5){
        cout << i << "=" << funLineal(i) << endl;
    }
    return 0;
}

