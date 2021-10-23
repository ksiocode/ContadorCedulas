#include <iostream>
using namespace std;

//URI Online Judge | 1018

int main()
{ 

    const int QntMaxCedulas = 7;

    int cedulas[QntMaxCedulas] = {1, 2, 5, 10, 20, 50, 100};
    int CountNotas[QntMaxCedulas] = {0};

    int valorDinheiro;

    cin >> valorDinheiro;

    cout << valorDinheiro << endl;
    for (int i = QntMaxCedulas - 1; i >= 0; i--)
    {
        CountNotas[i] = valorDinheiro / cedulas[i];
        valorDinheiro -= (CountNotas[i]*cedulas[i]);

        cout << CountNotas[i] << " nota(s) de R$ " << cedulas[i] <<",00" << endl;
    }


    return 0;
} 
