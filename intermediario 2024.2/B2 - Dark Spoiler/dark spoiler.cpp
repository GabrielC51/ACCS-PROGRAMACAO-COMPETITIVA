#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//struct para armazenar as datas
struct dia {
  int d;
  int m;
  int a;
};

//função de comparacao para ordenar as datas
bool cmp(dia i, dia j) {
  if (i.a != j.a) {
    return (i.a < j.a);
  }
  if (i.m != j.m) {
    return (i.m < j.m);
  }
  return (i.d < j.d);
}

int main() {
  vector<dia> datas;
  dia d;

  while (cin >> d.d >> d.m >> d.a) {
    datas.push_back(d);
  }

  stable_sort(datas.begin(), datas.end(), cmp);

  //imprimindo as datas ordenadas
  for (int i = 0; i < datas.size(); i++) {
    cout << datas[i].d << " ";
    cout << datas[i].m << " ";
    cout << datas[i].a << endl;
  }
}