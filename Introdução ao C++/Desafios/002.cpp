#include <iostream>

using namespace std;

int main() {
    float n1, n2, n3, mediaAluno, mediaTurma;

    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n2;
    cout << "Media da Turma: ";
    cin >> mediaTurma;

    mediaAluno = (n1+n2+n3)/3;
    cout << "Media do aluno: " << mediaAluno << endl;


    if (mediaAluno > mediaTurma){
        cout << "O aluno esta acima da media da turma";
    } else if (mediaAluno < mediaTurma){
        cout << "O aluno esta abaixo da media da turma";
    } else {
        cout << "O aluno está na media da turma";
    }

    return 0;
}   