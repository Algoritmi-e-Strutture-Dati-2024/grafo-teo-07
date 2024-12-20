#include <iostream>
#include <string>
#include "Grafo.cpp"
using namespace std;

int main() {
    Grafo<string> grafo;

    grafo.aggiungiNodo("A");
    grafo.aggiungiNodo("B");
    grafo.aggiungiNodo("C");
    grafo.aggiungiNodo("D");
    grafo.aggiungiNodo("E");

    grafo.aggiungiArco("A", "B", 5);
    grafo.aggiungiArco("A", "C", 8);
    grafo.aggiungiArco("B", "D", 3);
    grafo.aggiungiArco("C", "E", 2);
    grafo.aggiungiArco("D", "A", 7);
    grafo.aggiungiArco("E", "B", 4);

    grafo.stampa();

    if (grafo.verificaNodo("C")) {
        cout << "\nIl nodo 'C' esiste.\n";
    } else {
        cout << "\nIl nodo 'C' non esiste.\n";
    }

    if (grafo.verificaNodo("F")) {
        cout << "Il nodo 'F' esiste.\n";
    } else {
        cout << "Il nodo 'F' non esiste.\n";
    }

    grafo.nodiAdiacenti("A");

    if (grafo.verificaArco("A", "B")) {
        cout << "\nEsiste un arco tra 'A' e 'B'.\n";
    } else {
        cout << "\nNon esiste un arco tra 'A' e 'B'.\n";
    }

    if (grafo.verificaArco("B", "A")) {
        cout << "Esiste un arco tra 'B' e 'A'.\n";
    } else {
        cout << "Non esiste un arco tra 'B' e 'A'.\n";
    }

    grafo.rimuoviArco("A", "B");
    cout << "\nDopo aver rimosso l'arco tra 'A' e 'B':\n";
    grafo.stampa();

    grafo.rimuoviNodo("D");
    cout << "\nDopo aver rimosso il nodo 'D':\n";
    grafo.stampa();

    grafo.aggiungiNodo("F");
    grafo.aggiungiArco("F", "A", 6);
    cout << "\nDopo aver aggiunto il nodo 'F' e l'arco ('F', 'A') con peso 6:\n";
    grafo.stampa();

    grafo.aggiungiArco("B", "F", 2);
    grafo.aggiungiArco("C", "F", 1);
    cout << "\nDopo aver aggiunto gli archi ('B', 'F') e ('C', 'F'):\n";
    grafo.stampa();

    return 0;
}
