#include <iostream>
#include <string>

using namespace std;

struct Paciente {
    string nome;
    int idade;
    string sintoma;
};

int main() {

    setlocale(LC_ALL, "Portuguese");
    Paciente paciente;
    char continuar;

    do {
        cout << "Digite o nome do Paciente: ";
        getline(cin, paciente.nome);
        cout << "Digite a idade do paciente: ";
        cin >> paciente.idade;
        cin.ignore();
        cout << "Digite o sintoma do paciente: ";
        getline(cin, paciente.sintoma);

        cout << "Paciente: " << paciente.nome << " - Idade: " << paciente.idade << " - Sintomas: " << paciente.sintoma << endl;

        cout << "Deseja adicionar outro paciente? (s/n): ";
        cin >> continuar;
        cin.ignore();  // Limpa o buffer após a entrada do caractere

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
