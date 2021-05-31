#include <iostream>

using namespace std;

int fatorial(int num){
    int fat = 1;
    for (int i=1 ; i<=num ; i+=1){
        fat *= i;
    }
    return fat;
}

int main() {
    int num, fat;
    while (true){
        cout << "Entre com um valor inteiro positivo: ";
        cin >> num;
        if (num <= 0){
            cout << "O numero informado nao e valido...\n";
        } else {
            break;
        }
    }

    fat = fatorial(num);
    cout << "O fatorial de " << num << " eh " << fat << endl;
 
    return 0;
}