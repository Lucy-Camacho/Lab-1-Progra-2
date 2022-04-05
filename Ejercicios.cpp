#include <iostream>

using namespace std;


void atwood (float m1, float m2)
{
    const float gravedad= 9.8;

    cout<< "Tension= " << ((2*m1*m2)/(m1+m2))*gravedad << endl;

}

void conversion (float miles, float gallons)
{
    const float gal2Ltr= 3.785;
    float galConversion= gallons*gal2Ltr;
    
    float eficienciaMiGal= miles/gallons;
    float eficienciaLtrKm= gal2Ltr/100;

    cout << "La eficiencia del carro es: " << eficienciaMiGal << "Mi/Gal (equivalente a: " << eficienciaLtrKm << "L/100Km)." << endl;
}

int main()
{
    atwood(16, 18);
    conversion(22, 350);

    
    return 0;
}



