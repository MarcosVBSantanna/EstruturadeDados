#include <iostream>
#include <string>

using namespace std;


typedef struct Animal {
    string nome;
    string especie;
    int idade;
    float peso;
} ListaAnimais;



int main() {

    setlocale(LC_ALL, "Portuguese");

    ListaAnimais animais[10];

    for (int i = 0; i < 10; i++) {
        cout << "Animal " << i + 1 << ":\n";
        cout << "Nome: ";
        getline(cin, animais[i].nome);
        cout << "Espécie: ";
        getline(cin, animais[i].especie);
        cout << "Idade: ";
        cin >> animais[i].idade;
        cout << "Peso (em kg): ";
        cin >> animais[i].peso;

        cin.ignore();
    }

    cout << "\nDados dos animais:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Animal " << i + 1 << ":\n";
        cout << "Nome: " << animais[i].nome << endl;
        cout << "Espécie: " << animais[i].especie << endl;
        cout << "Idade: " << animais[i].idade << " anos" << endl;
        cout << "Peso: " << animais[i].peso << " kg" << endl << endl;
    }

    return 0;
}
