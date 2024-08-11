#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    //vetores
    vector<string> clientes;
    vector<int> idades;

    //variaveis
    int loop=0;
    int idade;
    int quantidade;
    int escolha;
    string nomes;

    while(loop==0){
        cout << "O que deseja fazer? \n[1]cadastrar clientes;           [2]editar." << endl;
        cin >> escolha;
        cin.ignore();

        if (escolha == 1){
            cout << "Quantos clientes deseja cadastrar? " << endl;
            cin >> quantidade;
            cin.ignore();

            for (int i=0; i < quantidade; ++i){
                cout << "\nNome" << i+1 << ": " << endl;
                getline(cin, nomes);

                cout <<"\nidade" << i+1 << ": " << endl;
                cin >> idade;
                cin.ignore();

                idades.push_back(idade);
                clientes.push_back(nomes);
            }

            cout << "\nOs dados cadastrados são: \n" << endl;

            for(size_t i=0; i < clientes.size(); ++i){
                const string nomes = clientes[i];
                int idade = idades[i];

                cout << "Cliente" << i+1 <<" Nome: " << nomes << "  Idade: " << idade << endl;
            }
        }else if (escolha == 2){
            while (escolha == 2){
                int n;
                cout << "Qual linha quer editar?" << endl;
                cin >> n;
                cin.ignore();

            cout << "EDITAR " << n << "  " << clientes[n] << endl;
            getline(cin, nomes);
            cin.ignore();

            cout << "IDADE " << n << "  " << idades[n] << endl;
            cin >> idade;
            cin.ignore();

                idades.push_back(idade);
                clientes.push_back(nomes);
            }



        }
    }
    return 0;
}
