#include <iostream>
#include <string>
#include <vector>
using namespace std;

class porta{
public:
bool aberta;
string cor;
float dimensaoX, dimensaoY, dimensaoZ;
porta(bool aberta, string cor, float dimensaoX, float dimensaoY, float dimensaoZ){
  this->aberta = aberta;
  this->cor = cor;
  this->dimensaoX = dimensaoX;
  this->dimensaoY = dimensaoY;
  this->dimensaoZ = dimensaoZ;
}
void abrir(){
  aberta = true;
}
void fechar(){
  aberta = false;
}
void pintar(string inputCor){
  cor = inputCor;
}
bool estaAberta(){
  return aberta;
}
void alterarX(float inputX){
  dimensaoX = inputX;
}
void alterarY(float inputY){
  dimensaoY = inputY;
}
void alterarZ(float inputZ){
  dimensaoZ = inputZ;
}
};

class casa{
public:
string cor;
porta porta1, porta2, porta3;
casa(string cor, porta porta1, porta porta2, porta porta3) : cor(cor), porta1(porta1), porta2(porta2), porta3(porta3){
  this->cor = cor;
  this->porta1 = porta1;
  this->porta2 = porta2;
  this->porta3 = porta3;
}
void pintar(string inputCor){
  cor = inputCor;
}
int totalPortas(){
  return 3;
}
int quantDePortasAbertas(){
  int cont = 0;
  if(porta1.estaAberta()){
    cont++;
  }
  if(porta2.estaAberta()){
    cont++;
  }
  if(porta3.estaAberta()){
    cont++;
  }
  return cont;
}
};

class edificio{
public:
string cor;
int TotalDePortas = 0, TotalDeAndares = 0;
vector<porta>portasEdificio;

edificio(string cor){
  this->cor = cor;
}
void pintar(string inputCor){
  cor = inputCor;
}
int totalPortas(){
  return portasEdificio.size();
}
int quantasPortasAbertas(){
  int cont = 0;
  for (int i = 0; i < portasEdificio.size(); i++){
    if(portasEdificio[i].estaAberta()){
      cont++;
    }
  }
  return cont;
}
void adicionarAndar(){
  TotalDeAndares++;
}
void adicionaPorta(porta objetoPorta){
  portasEdificio.push_back(objetoPorta);
}
int totalAndares(){
  return TotalDeAndares;
}
};



int main() {
  //a
  porta p1(true, "verde", 1.5, 2.5, 3.5);
  p1.abrir();
  p1.fechar();
  p1.pintar("azul");
  p1.pintar("branco");
  p1.alterarX(1.3);
  p1.alterarY(2.3);
  p1.alterarZ(3.3);
  if (p1.estaAberta() == true){
    cout << "A porta está aberta" << endl;
  }else{
    cout << "A porta está fechada" << endl;
  }

  //b
  porta p2(false, "verde", 1.5, 2.5, 3.5);
  porta p3(false, "azul", 2.5, 3.5, 4.5);
  porta p4(false, "laranja", 3.5, 4.5, 5.5);
  p2.abrir();
  casa c1("preto",p2,p3,p4);
  
  cout << "Portas abertas: " <<c1.quantDePortasAbertas() << endl;

  //d
  edificio e1("vermelho");
  e1.pintar("azul");
  porta p5(true, "azul", 5.1, 3.2, 2.7);
  porta p6(false, "branco", 2.8, 4.3, 5.2);
  porta p7(true, "vermelho", 4.4, 1.9, 3.8);
  porta p8(false, "azul", 6.1, 5.3, 4.2);
  porta p9(true, "laranja", 3.6, 2.1, 1.8);
  porta p10(false, "verde", 5.5, 4.2, 3.7);
  e1.adicionaPorta(p5);
  e1.adicionaPorta(p6);
  e1.adicionaPorta(p7);
  e1.adicionaPorta(p8);
  e1.adicionaPorta(p9);
  e1.adicionaPorta(p10);
  p5.fechar();
  cout << "Portas abertas: " << e1.quantasPortasAbertas() << endl;
  cout << "Total portas: " << e1.totalPortas() << endl;
  e1.adicionarAndar();
  e1.adicionarAndar();
  cout << "Total andares: " << e1.totalAndares();
}
