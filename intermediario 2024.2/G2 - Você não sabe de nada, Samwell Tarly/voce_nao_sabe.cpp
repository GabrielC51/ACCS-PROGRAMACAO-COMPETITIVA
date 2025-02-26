#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>

using namespace std;

string tradudor(map<string, string>& dicionario, vector<string>& str){
    string resultado = "";
    for(int i = 0; i < str.size(); i++){
        map<string, string>::iterator it = dicionario.find(str[i]);

        if(it != dicionario.end()){
            resultado += it->second + " ";
        }else{
            resultado += str[i] + " ";
        }

        //uso do operador ternario para verificar se a palavra está no dicionario
        //resultado += it != dicionario.end() ? it->second  + " ": str[i] + " ";
    }

    return resultado;
}

int main(){
    int n, m;
    map<string, string> dicionario;
    vector<string> palavras;

    cin >> n;
    for(int i = 0; i < n; i++){
        string palavra, significado;
        cin >> palavra >> significado;
        dicionario.insert(make_pair(palavra, significado));
    }

    cin >> m;
    for(int n = 0; n < m; n++){
        string p;
        cin >> p;
        palavras.push_back(p);
    }

    //cout << endl << "msg: " << msg << endl;
    cout << tradudor(dicionario, palavras) << endl;

}