#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, count = 0;
    vector<int> caixa;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        caixa.push_back(x);
    }
    stable_sort(caixa.begin(), caixa.end());

    for(int i = 0; i < n-1; i++){   
        if(caixa[i] != caixa[i+1]){
            count++;
        }
    }
    if (caixa[n-1] != caixa[0]){ //verifica o ultimo elemento com o primeiro
        count++;
    }
    
    if(count == n){
        cout << "Sortudo, ganhou dois potes";
    }else if(count >= (n/2)+1 && count < n){
        cout << "Ganhou um pote";
    }else if(count == n/2){
        cout << "Azarado";
    }
    cout << endl;
    return 0;
}