#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void imprimiLista(list<int> lista)
{

	list<int>::const_iterator valores; // [classe]::[metodo]

	if (lista.empty())
	{
		cout << "IMPOSSIVEL IMPRESSAO - LISTA VAZIA";
	}
	else {
		valores = lista.begin(); //aponta para o 1º elemento da lista
        do{
            cout << *valores << " ";
			valores++;
		}
		while (valores != lista.end());
	}
}

int main()
{
    list<int> lista;
    int num;

    for(int i = 0;i < 5; i++){
        cout << "Insira o numero " << i + 1 << ": " << endl;
        cin >> num;

        lista.push_back(num);

    }
        imprimiLista(lista);

        cout << endl;
        cout << endl;

        lista.reverse();
        imprimiLista(lista);
}
