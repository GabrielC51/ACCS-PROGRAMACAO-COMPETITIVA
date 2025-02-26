#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    vector<int> cap, novos;

    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        cap.push_back(x);
    }

    stable_sort(cap.begin(), cap.end());

    cin >> m;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        novos.push_back(x);
    }

    for(int i = 0; i < m; i++){
        int y = novos[i];
        if(binary_search(cap.begin(), cap.end(), y)){
            cout << "Repetido" << endl;
        }else{
            cout << "Temos que pegar!" << endl;
            cap.push_back(y);
            stable_sort(cap.begin(), cap.end());
        }
    }
}