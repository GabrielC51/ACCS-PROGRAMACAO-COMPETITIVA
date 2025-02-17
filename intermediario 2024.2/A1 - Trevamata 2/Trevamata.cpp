#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct personagem{
	int peso;
	string nome;
};

int main(){
	int q, maximo;
	vector<personagem> amigos;
	vector<string> pesados;
	personagem amg;
	bool verif = false;
	
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> amg.nome >> amg.peso;
		amigos.push_back(amg);
	}
	cin >> maximo;
	for(int i = 0;i < q; i++){
		if(amigos[i].peso > maximo){
			verif = true;
			pesados.push_back(amigos[i].nome);			
		}
	}
	if(verif){
		cout << "Vamos virar almoço de aranhas gigantes!" << endl;
		for(int i = 0; i < pesados.size(); i++){
			cout << pesados[i] << endl;
		}
	}else{
		cout << "Vamos todos encontrar a montanha!";
	}
	
	return 0;
}