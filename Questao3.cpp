#include <iostream>
#include <vector>
using namespace std;

class bicicleta{
public:
float velocidade;
int marcha;
float velocidadeMaxima;

bicicleta(float velocidade, int marcha, float velocidadeMaxima){
  this -> velocidade = velocidade;
  this -> marcha = marcha;
  this -> velocidadeMaxima = velocidadeMaxima;
}

void acelerar(){
  velocidade += 5;
  marcha += 1;
  if (velocidade > velocidadeMaxima){
  velocidade = velocidadeMaxima;
  }
}
void frear(){
  if (velocidade > 0){
  velocidade -= 5;
  marcha -= 1;
  }
}

void imprimirEstados(){
  cout << "Velocidade: " << velocidade << endl << "Marcha: " << marcha << endl << "Velocidade Máxima: " << velocidadeMaxima << endl;
}
};

class principal{
public:
vector<bicicleta>listaBicicletas;
void main() {
  int numbicis;
  cout << "Digite o número de bicicletas : ";
  cin >> numbicis;
  
  for (int i = 0; i < numbicis; i++){
    float inputVelocidade, inputVelocidadeMaxima;
    int inputMarcha;
    cin >> inputVelocidade >> inputMarcha >> inputVelocidadeMaxima;
    bicicleta bici(inputVelocidade, inputMarcha, inputVelocidadeMaxima);
    listaBicicletas.push_back(bici);
    bici.acelerar();
    bici.acelerar();
    bici.frear();
    bici.acelerar();
    bici.imprimirEstados();
    cout << "Bicicleta manipulada: " << i+1 << endl;
  }
}
};

int main(){
  principal p;
  p.main();
}
