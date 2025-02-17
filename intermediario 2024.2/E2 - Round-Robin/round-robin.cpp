#include <iostream>
#include <queue>

using namespace std;

int main (){
  int n, m, aux;
  queue<int> fila;
  cin >> n >> m;
  for(int i = 1; i <= n; i++){
    cin >> aux;
    fila.push(aux);
  }
  while(!fila.empty() && m > 0){
    aux = fila.front();
    aux--;
    m--;
    fila.pop();
    if(aux > 0){
      fila.push(aux);
    }
  }
  if(fila.empty()){
    cout << "pronto" << endl;
  }else{
    cout << fila.size() << endl;
    while(!fila.empty()){
      cout << fila.front() << " ";
      fila.pop();
    }
  }
  
}