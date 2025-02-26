#include <iostream>
#include <string>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b){
    return a.first > b.first || (a.first == b.first && a.second > b.second);
}


int main(){
    int n, g, s, m;
    priority_queue<pair<int, string>, vector<pair<int, string>,bool(*)(pair<int,string>,pair<int, string>)>> grifinoria(cmp);
    priority_queue<pair<int, string>> sonserina;
    string duplas = "";

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> g >> s >> m;
        for(int j = 0; j < g; j++){
            pair<int, string> aluno;
            cin >> aluno.first >> aluno.second;
            grifinoria.push(aluno);
        }
        for(int j = 0; j < s; j++){
            pair<int, string> aluno;
            cin >> aluno.first >> aluno.second;
            sonserina.push(aluno);
        }
        for(int j = 0; j < m; j++){
            if(!grifinoria.empty() && !sonserina.empty()){
                duplas += grifinoria.top().second + " e " + sonserina.top().second + "\n";
                grifinoria.pop();
                sonserina.pop();
            }
        }
    }
    cout << duplas;
    return 0;
}