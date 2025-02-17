#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<int> split(string str){ // função que divide uma string em um vetor de inteiros (importante que a string tenha somente numeros inteiros).
  vector<int> result;
  char ch;
  for(int i = 0; i < str.length(); i++){
    ch = str[i];
    result.push_back(ch - '0');
  }
  return result;
}

bool isOpposite(string s1, string s2){ //função para verificar se as strings são opostas
  vector<int> r1 = split(s1);
  vector<int> r2 = split(s2);
  for(int i = 0; i < r1.size(); i++){
    if(r1[i] == r2[i]){
      return false;
    }
  }
  return true;
}

int main (){
  //variaveis
  int n, m, score = 0, heigth = 0;
  string s;
  stack<string> game;
  cin >> n >> m;

  //jogo em si
  for(int i = 0; i < n; i++){
    cin >> s;

    if(!game.empty()){
      if(isOpposite(game.top(), s)){
        //caso sejam strings opostas ele remove a string do topo da pilha e soma os pontos
        heigth--;
        //s = "";
        game.pop();
        score++;
      }else{
        heigth++;
        game.push(s);
      }
    }else{
      //caso contrario, armazena mais uma string no topo da pilha
      heigth++;
      game.push(s);
    }
  }
  if(m <= heigth){
    cout << "game over";
  }else{
    cout << score * 10;
  }
/*

  trecho de teste para verificar status do jogo
  cout << endl << "jogo final:" << endl << "pontos: " << score << endl << "altura: " << heigth << endl;
  cout << "jogo: " << endl;
  while(!game.empty()){
    cout << game.top() << endl;
    game.pop();
  }
*/
  return 0;
}#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<int> split(string str){ // função que divide uma string em um vetor de inteiros (importante que a string tenha somente numeros inteiros).
  vector<int> result;
  char ch;
  for(int i = 0; i < str.length(); i++){
    ch = str[i];
    result.push_back(ch - '0');
  }
  return result;
}

bool isOpposite(string s1, string s2){ //função para verificar se as strings são opostas
  vector<int> r1 = split(s1);
  vector<int> r2 = split(s2);
  for(int i = 0; i < r1.size(); i++){
    if(r1[i] == r2[i]){
      return false;
    }
  }
  return true;
}

int main (){
  //variaveis
  int n, m, score = 0, heigth = 0;
  string s;
  stack<string> game;
  cin >> n >> m;

  //jogo em si
  for(int i = 0; i < n; i++){
    cin >> s;

    if(!game.empty()){
      if(isOpposite(game.top(), s)){
        //caso sejam strings opostas ele remove a string do topo da pilha e soma os pontos
        heigth--;
        //s = "";
        game.pop();
        score++;
      }else{
        heigth++;
        game.push(s);
      }
    }else{
      //caso contrario, armazena mais uma string no topo da pilha
      heigth++;
      game.push(s);
    }
  }
  if(m <= heigth){
    cout << "game over";
  }else{
    cout << score * 10;
  }
/*

  trecho de teste para verificar status do jogo
  cout << endl << "jogo final:" << endl << "pontos: " << score << endl << "altura: " << heigth << endl;
  cout << "jogo: " << endl;
  while(!game.empty()){
    cout << game.top() << endl;
    game.pop();
  }
*/
  return 0;
}