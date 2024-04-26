#include <iostream>
#include<string>
using namespace std;

class Animalia{
public:
void animalia(){
  cout << "Animalia" << endl;
}
string ObterDescricao(){
  return "Reino Animalia";
}
};

class Chordata: public Animalia{
public:
void chordata(){
  cout << "Chordata" << endl;
}
string ObterDescricao(){
  return Animalia::ObterDescricao() + '\n' + "Reino Chordata";
  
}

};

class Mammalia: public Chordata{
public:
void mammalia(){
cout << "Mammalia" << endl;
}
string ObterDescricao(){
  return Chordata::ObterDescricao() + '\n' + "Reino Mammalia";
}
};

class Homem: public Mammalia{
public:
void homem(){
  cout << "Homem" << endl;
}
string ObterDescricao(){
  return Mammalia::ObterDescricao() + '\n' + "Homem";
}
};

class Cao: public Mammalia{
public:
void cao(){
  cout << "Cao" << endl;
}
string ObterDescricao(){
  return Mammalia::ObterDescricao() + '\n' + "Cao";

}
};

class Arthropoda: public Animalia{
public:
void arthropoda(){
  cout << "Arthropoda" << endl;
}
string ObterDescricao(){
  return Animalia::ObterDescricao() + '\n' + "Reino Arthropoda";
}
};


class Insecta: public Arthropoda{
public:
void insecta(){
  cout << "Insecta" << endl;
}
string ObterDescricao(){
  return Arthropoda::ObterDescricao() + '\n' + "Reino Insecta";

}
};

class Mosca: public Insecta{
public:
void mosca(){
  cout << "Mosca" << endl;
}
string ObterDescricao(){
  return Insecta::ObterDescricao() + '\n' + "Mosca";

}
};

int main() {
  Homem homem;
  Cao cao;
  Mosca mosca;
  cout << homem.ObterDescricao() << endl;
  cout << cao.ObterDescricao() << endl;
  cout << mosca.ObterDescricao() << endl;
}
