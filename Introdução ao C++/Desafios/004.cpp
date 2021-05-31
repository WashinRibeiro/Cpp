#include <iostream>

using namespace std;

float potencia(float x, int y){
    float pot=1;
    int cont=1;
    while (cont <= y){
        pot*=x;
        cont++;
    }
    return pot;
}

int main(){
    float B, pot;
    int E;
    string resposta;
    
    while (1){
        cout << "Digite a base (numero real): ";
        cin >> B;
        cout << "Digite o expoente (numero natural): ";
        cin >> E;

        pot = potencia(B,E);

        cout << "O resultado de " << B << " elevado a " << E << " e igual a " << pot << endl << endl;
        cout << "Digite 'S' se quiser calcular outra potencia: ";
        cin >> resposta;
        if (resposta != "S"){
            cout << "Encerrando o programa...";
            break;
        }
    }

    return 0;
}