#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>
#include <utility>

using namespace std;

struct planeta{
    string nome, sistema;
    int pop;
};


planeta maiorPop(vector<planeta>& copia){ //função que retorna o planeta com maior população
    planeta maior, comp;

    //interando vetor para exercitar o uso de itarator
    for(vector<planeta>::iterator it = copia.begin(); it != copia.end(); it++){
        if(it == copia.begin()){
            maior = *it;
        }else{
            comp = *it;
            if(comp.pop > maior.pop){
                maior = comp;
            }
        }
    }
    return maior;
}

map<string, int> capitais(vector<planeta>& copia){
    map<string, int> capitais;
    for(vector<planeta>::iterator it = copia.begin(); it != copia.end(); it++){
        map<string, int>::iterator it2 = capitais.find(it->sistema);
        if(it2 == capitais.end()){
            capitais.insert(make_pair(it->sistema, it->pop));
        }else if(it2->second < it->pop){
            it2->second = it->pop;
        }
    }
    return capitais;
}

int main(){
    int n;
    vector<planeta> lista;
    planeta capital;
    map<string, int> capitaisGalaxia;
    cin >> n;

    for(int i = 0; i < n; i++){
        planeta p;
        cin >> p.sistema >> p.nome >> p.pop;
        lista.push_back(p);
    }

    //cout << "Planeta com maior população: " << maiorPop(lista).nome << endl << endl;
    capital = maiorPop(lista);
    cout << capital.sistema << " " << capital.pop << endl;

    capitaisGalaxia = capitais(lista);
    for(map<string, int>::iterator it = capitaisGalaxia.begin(); it != capitaisGalaxia.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}