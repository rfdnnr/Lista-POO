#include <iostream>
#include <vector>
#include <string>
using namespace std;

class jogador{
public:
string posicao;
int numeroCamisa;
string nome;
enum PosicaoTatica{Goleiro = 1, Zagueiro, Lateral, Meia, Atacante};

jogador(string posicao, int numeroCamisa, string nome){
  this -> posicao = posicao;
  this -> numeroCamisa = numeroCamisa;
  this -> nome = nome;
}

void consultarEstados(){
  cout << "Posição: " << posicao << endl;
  cout << "Número da camisa: " << numeroCamisa << endl;
  cout << "Nome: " << nome << endl << endl;
}
};

class time{
public:
vector<jogador>jogadores;

time(vector<jogador> jogadores){
  this -> jogadores = jogadores;
}

void substituicao(string substituido, string substituto){
  for (int i = 0; i < jogadores.size(); i++){
    if (jogadores[i].nome == substituido){
      jogadores[i].nome = substituto;
    }
  }
}
void consulta(){
  cout << "Jogadores atuais: " <<  endl;
  for (int i = 0; i < jogadores.size(); i++){
    cout << "Jogador " << i + 1 << ": " << jogadores[i].nome << endl;
  }
}
};



int main() {
  jogador j1("goleiro", 1, "josiel");
  jogador j2("lateral", 2, "joao");
  jogador j3("zagueiro", 3, "joao pedro");
  jogador j4("zagueiro", 4, "jonatha");
  jogador j5("lateral", 5, "nicolas");
  jogador j6("meia", 6, "pedro");
  jogador j7("meia", 7, "gabriel");
  jogador j8("meia", 8, "valera");
  jogador j9("atacante", 9, "bruno");
  jogador j10("atacante", 10, "diego");
  jogador j11("atacante", 11, "pulga");

  vector<jogador>jogadores = {j1,j2,j3,j4,j5,j6,j7,j8,j9,j10,j11};
  class time t1(jogadores);

  j1.consultarEstados();
  t1.substituicao("valera","jorge");
  t1.consulta();
}
