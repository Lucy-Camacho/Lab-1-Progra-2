#include <iostream>

using namespace std;

int main()
{
    return 0;
    
}

void atwood (float m1, float m2)
{
    const float gravedad= 9.8;

    cout<< "Atwood: " << ((2*m1*m2)/(m1+m2))*gravedad << endl;

}