#include <iostream>

using namespace std;

int main(){
    int idade;
    float renda;

    cout << "TESTE PARA PROGRAMA DE MORADIA POPULAR" << endl;

    cout << "Diga sua idade: ";
    cin >> idade;
    cout << "Diga qual a sua renda: ";
    cin >> renda;

    if (idade > 21 && renda >= 1200){
        cout << "Voce nao pode participar do programa de moradia popular"; 
    } else{
        cout << "Voce esta apto para participar do programa de moradia popular";
    }

    return 0;
}
