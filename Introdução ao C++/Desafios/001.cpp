#include <iostream>

using namespace std;

float equacao(float x){
    float funcao;
    funcao = (x*x) - (3*x) + 5;     
    return funcao;
}


int main() {
    float valor, a;
    cout << "Entre com o valor de x: ";
    cin >> a;

    valor = equacao(a);
    cout << "A equacao vale: " << valor << endl;
    
    return 0;
}