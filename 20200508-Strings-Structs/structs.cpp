#include <iostream>
#include <string>

/*
  Perro:
  - Nombre (string)
  - Peso (double)
  - raza (string)
  - vacunas -> otra estructura
*/

struct Perro {
  std::string nombre, raza;
  double peso;
  bool vacunarabia; 
};

int main(void)
{
  std::vector<Perro> lista(2); 
  
  Perro tmp; 
  lista.push_back(tmp);
  std::cout << lista[0] << std::endl; // error

  lista[0].nombre = "firulais";
  lista[0].raza = "criollo";
  lista[0].peso = 5.4;
  lista[0].vacunarabia = false;

  lista[1].nombre = "lulu";
  lista[1].raza = "criolla";
  lista[1].peso = 8.4;
  lista[1].vacunarabia = true;

  Perro dog2;

  Perro nuevo = lista[0] + lista[1];
  nuevo.peso = 1.2;

  return 0;
}