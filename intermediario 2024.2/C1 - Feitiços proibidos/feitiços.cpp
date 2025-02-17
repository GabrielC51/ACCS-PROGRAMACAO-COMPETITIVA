#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int Ng, Np, Nb;
  vector<string> proibidos, gerais, busca, resultado;
  cin >> Ng;
  //vector<string> gerais(Ng);
  for(int i = 0; i < Ng; i++){
    string palavra;
    cin >> palavra;
    gerais.push_back(palavra);
  }
  cin >> Np;
  //ector<string> proibidos(Np);
  for(int i = 0; i < Np; i++){
    string palavra;
    cin >> palavra;
    proibidos.push_back(palavra);
  }
  cin >> Nb;
  //vector<string> busca(Nb), resultado(Nb);
  for(int i = 0; i < Nb; i++){
    string palavra;
    cin >> palavra;
    busca.push_back(palavra);
  }
  for(int i = 0; i < Nb; i++){
    if(binary_search(gerais.begin(), gerais.end(), busca[i])){
      resultado.push_back("Geral");
    }else{
      resultado.push_back("Proibido");
    }
  }
  
  for(int i = 0; i < resultado.size(); i++){
    cout << resultado[i] << endl;
  }
}