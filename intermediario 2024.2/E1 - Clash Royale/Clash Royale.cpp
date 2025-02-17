#include <iostream>
#include <queue>

using namespace std;

int main (){
  queue<int> eu, ad;
  int qtdEu, qtdAd, aux, mortos = 0;

  cin >> qtdEu;
  for(int i = 0; i < qtdEu; i++){
    cin >> aux;
    eu.push(aux);
  }

  cin >> qtdAd;
  for(int i = 0; i < qtdAd; i++){
    cin >> aux;
    ad.push(aux);
  }

  while(!eu.empty() && !ad.empty()){
    if(eu.front() >= ad.front()){
      aux = eu.front();
      eu.pop();
      ad.pop();
      eu.push(aux);
    }else{
      eu.pop();
      ad.pop();
      mortos++;
    }
  }
  cout << mortos;
}