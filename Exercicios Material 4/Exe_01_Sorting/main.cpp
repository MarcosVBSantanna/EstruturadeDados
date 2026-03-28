#include <iostream>
using namespace std;

// Função de troca
void trocar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função de partição
int particao(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (vetor[j] <= pivo) {
            i++;
            trocar(vetor[i], vetor[j]);
        }
    }

    trocar(vetor[i + 1], vetor[fim]);
    return i + 1;
}

// Quick Sort
void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int posPivo = particao(vetor, inicio, fim);
        quickSort(vetor, inicio, posPivo - 1);
        quickSort(vetor, posPivo + 1, fim);
    }
}

int main() {
    int numeros[10];

    // Entrada
    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    // Ordenação com Quick Sort
    quickSort(numeros, 0, 9);

    // Menor e maior
    int menor = numeros[0];
    int maior = numeros[9];

    int contMenor = 0;
    int contMaior = 0;

    // Contagem
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == menor) contMenor++;
        if (numeros[i] == maior) contMaior++;
    }

    // Saída
    cout << "\nMenor numero: " << menor;
    cout << " | Aparece: " << contMenor << " vezes\n";

    cout << "Maior numero: " << maior;
    cout << " | Aparece: " << contMaior << " vezes\n";

    return 0;
}
