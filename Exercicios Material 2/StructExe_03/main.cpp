#include <iostream>
#include <string>

using namespace std;

struct Filme {
    string nome;
    int enredo;
    int atuacao;
    int efeitos;
};

int nota = 0;

int main() {

    setlocale(LC_ALL, "Portuguese");
    Filme filme;
    char continuar;

    do {
        cout << "Digite o nome do Filme para avaliação: ";
        getline(cin, filme.nome);
        cout << "Avalie o enredo do Filme (0-5): ";
        cin >> filme.enredo;
        cin.ignore();
        cout << "Avalie a atuação dos personagens do Filme (0-5): ";
        cin >> filme.atuacao;
        cout << "Avalie os efeitos do Filme (0-5): ";
        cin >> filme.efeitos;

        nota = (filme.enredo + filme.atuacao + filme.efeitos)/3;

        cout << "Filme: " << filme.nome << " - Nota enredo: " << filme.enredo << " - Nota atuação: " << filme.atuacao << " - Nota efeitos: " << filme.efeitos << "- Nota Final: " << nota << endl;

        cout << "Deseja adicionar outro Filme? (s/n): ";
        cin >> continuar;
        cin.ignore();  // Limpa o buffer após a entrada do caractere

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
