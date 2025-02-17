#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> i, pair<int, int> j){
  return (i.first > j.first || (i.first == j.first && i.second < j.second));
}

int main() {
  vector <pair<int, int>> candidatos, consultas, aprovados;
  int N, Q, C;
 
  cin >> N >> Q;
  for(int i = 0; i < Q; i++){
    pair<int, int> cand;
    cin >> cand.first >> cand.second;
    candidatos.push_back(cand);
  }
  stable_sort(candidatos.begin(), candidatos.end(), cmp);
  for(int i = 0; i < N; i++){aprovados.push_back(candidatos[i]);}
 
  cin >> C;
  for(int i = 0; i < C; i++){
    pair<int, int> cand;
    cin >> cand.first >> cand.second;
    consultas.push_back(cand);
  }
  /* parte para debugar
  cout << "\nCandidatos ordenados:\n";
  for(int i = 0; i < Q; i++){
    cout << candidatos[i].first << " " << candidatos[i].second << endl;
  }
 
  cout << "\nAprovados:\n";
  for(int i = 0; i < N; i++){
    cout << aprovados[i].first << " " << aprovados[i].second << endl;
  }
  cout << endl;
  */
  for(int i = 0; i < C; i++){
    if(binary_search(aprovados.begin(), aprovados.end(), consultas[i], cmp)){
      cout << "Sim" << endl;
    }else{
      cout << "Nao" << endl;
    }
  }
 
  return 0;
}