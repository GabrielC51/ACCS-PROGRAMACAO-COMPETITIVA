#include <iostream>
#include <string>
#include <utility>
#include <queue>

using namespace std;

int main(){
    int dias, atend, qtd;
    priority_queue<pair<int, string>> fila;
    string atendidos;

    cin >> dias >> atend;
    for(int i = 0; i < dias; i++){
        cin >> qtd;
        for(int j = 0; j < qtd; j++){
            pair<int, string> cliente;
            cin >> cliente.second >> cliente.first;
            fila.push(cliente);
        }
        for(int j = 0; j < atend || fila.empty(); j++){
            atendidos += fila.top().second + "\n";
            fila.pop();
        }
    }
    cout << atendidos;
    return 0;
}