#include <iostream>
#include <ctime>

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

void heightConversion (float feet, float inches)
{
    float ft2M= feet/3.281;
    float in2M= inches/39.37;

    float heightCon= ft2M+in2M;

    cout << "La altura es: " << feet << " pies con " << inches << " pulgada(s). Y en metros: " << heightCon << "m" << endl;

}

void britishCurrency (float pound, float shillings, float pence)
{
    float pence2Pound= pence/240;
    float shillings2Pound= shillings/20;
    float total= pound+shillings2Pound+pence2Pound;

    cout<< "La cantidad de dinero en el sistema actual es: " << total << "gbp" << endl;
}

/**
 * @brief Generates a random value between 0 and 1 (inclusive)
 * @return float random floating point value.
 */
float myRrandom(){
  srand(time(0));
  return static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}

void randNum (int n, int m)
{
    float randFloat= myRrandom();
    srand(time(0));
    int intRand= rand() % ((m-n)+1)+n;
    float finalRand= intRand+randFloat;
    if(intRand==m)
    {
        finalRand= m;
    }
    cout << "El numero aleatorio es: " << finalRand << endl;

}

int main()
{
    atwood(16, 18);
    conversion(22, 350);
    heightConversion(6, 1);
    britishCurrency(20,10,6);
    randNum(1,6);
    return 0;
}




