#include <iostream>
using namespace std;
int main() 
{
    //primo esercizio
    {
        string nome;
        int i, n;
        cout << "Quanti atleti ci sono in gara?" << endl;
        cin >> n;
        for (i = 1; i <= n; i++) 
        {
            cout << "inserisci il nome dell'atleta" << endl;
            cin >> nome;
            cout << "ciao " << nome << endl;
        }
    }

    //secondo esercizio
    {
        srand(time(0));   //Seed random number generator
        
        int i, n, contPari, contDispari, restoDue, x;

        do {
            cout << "quanti numeri da generare?" << endl;
            cin >> n;
        } while (n < 0);
        contPari = 0;
        contDispari = 0;
        for (i = 1; i <= n; i++) {
            x = rand() % 1001;
            restoDue = x % 2;
            if (restoDue == 0) {
                contPari = contPari + 1;
            } else {
                contDispari = contDispari + 1;
            }
            cout << i << "° numero generato: " << x << endl;
        }
        cout << "sono stati generati " << contPari << " numeri pari e " << contDispari << " numeri dispari" << endl;

    }
    
    //terzo esercizio
    {
        int n, m, i;
        cout << "elenco i numeri da N a M con passo 2." << endl;
        cout << "inserisci N" << endl;
        cin >> n;
        cout << "inserisci M" << endl;
        cin >> m;
        for (i = n; i <= m; i += 2) 
        {
            cout << i << endl;
        }
    }

}
//LEGGERE LE ISTRUZIONI NEL FILE README.md
