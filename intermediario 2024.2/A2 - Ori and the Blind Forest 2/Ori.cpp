#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

//função para separar string recebida em um vetor de inteiros
vector<int> split(const string& str){ 
	vector<int> vetor;
	string palavra;
	for(char c : str){
		if(c == ' '){
			if(!palavra.empty()){
				vetor.push_back(stoi(palavra));
				palavra.clear();
			}
		}else{
			palavra += c; 
		}
	}
	if(!palavra.empty()){
		vetor.push_back(stoi(palavra));
	}
	
	
	return vetor;
}

int main(){
	int n, total;
	vector<int> xp, mul, pontos;
	string xpStr, mulStr;
	pair<int,int> sum;
	
	cin >> n;
	cin.ignore();
	getline(cin, xpStr);
	getline(cin, mulStr);
	cin >> sum.first >> sum.second;
	
	xp = split(xpStr);
	mul = split(mulStr);
	for(int i = 0; i < n; i++){
		//first == xp * (mul + sec);
		pontos.push_back(xp[i]*(mul[1] + sum.second));
		total += pontos[i];
	}
	
	if(total >= sum.first){
		cout << "Upou de Nivel!";
	}else{
		cout << "Nao foi dessa vez!";
	}
	
	return 0;
}