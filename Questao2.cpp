#include <iostream>
#include <vector>
using namespace std;

class bicicleta{
public:
float velocidade;
int marcha;

bicicleta(float velocidade, int marcha){
  this -> velocidade = velocidade;
  this -> marcha = marcha;
}

void acelerar(){
  velocidade += 5;
  marcha += 1;
}
void frear(){
  if (velocidade > 0){
  velocidade -= 5;
  marcha -= 1;
  }
}

void imprimirEstados(){
  cout << "Velocidade: " << velocidade << endl << "Marcha: " << marcha << endl;
}
};

class principal{
public:
vector<bicicleta>listaBicicletas;
void main() {
  int numbicis;
  cin >> numbicis;
  for (int i = 0; i < numbicis; i++){
    bicicleta bici(0,0);
    listaBicicletas.push_back(bici);
    bici.acelerar();
    bici.acelerar();
    bici.acelerar();
    bici.frear();
    bici.imprimirEstados();
    cout << "Bicicleta manipulada: " << i+1 << endl;
  }
}
};

int main(){
  principal p;
  p.main();
}
