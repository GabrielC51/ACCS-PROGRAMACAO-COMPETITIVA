#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct jedi {
  string nome;
  int total;
  int falta;
};
bool cmp(jedi i, jedi j){
  return (i.nome < j.nome);
}

int main() {
  vector<jedi> vetor;
  jedi j;

  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> j.nome >> j.total >> j.falta;
    vetor.push_back(j);
  }
  for(int i = 0; i < n; i++){
    vetor[i].total -= vetor[i].falta;
  }
  stable_sort(vetor.begin(), vetor.end(), cmp);
  for(int i = 0; i < n; i++){
    cout << vetor[i].nome << " " << vetor[i].total << endl;
  }
}