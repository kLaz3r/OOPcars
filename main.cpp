#include <string>
#include <iostream>

class Car
{
public:
  std::string marca;
  std::string model;
  int an;
  int nrLocuri;
  int putere;
  int pret;
  std::string culoare;
  std::string combustibil;
  std::string cutieViteze;

  Car(std::string marca, std::string model, int an, int nrLocuri, int putere, int pret, std::string culoare, std::string combustibil, std::string cutieViteze)
  {
    this->marca = marca;
    this->model = model;
    this->an = an;
    this->nrLocuri = nrLocuri;
    this->putere = putere;
    this->culoare = culoare;
    this->pret = pret;
    this->combustibil = combustibil;
    this->cutieViteze = cutieViteze;
  }

  Car() = default;

  void setPret(int pret)
  {
    this->pret = pret;
  }
};

int main()
{

  std::cout << "Introdu numarul de masini: ";
  int n;
  std::cin >> n;
  Car *masini = new Car[n];

  // Citire date
  for (int i = 0; i < n; i++)
  {
    std::cout << "Introdu datele pentru masina " << i + 1 << std::endl;
    std::cout << "Marca: ";
    std::cin >> masini[i].marca;
    std::cout << "Model: ";
    std::cin >> masini[i].model;
    std::cout << "An: ";
    std::cin >> masini[i].an;
    std::cout << "Numar locuri: ";
    std::cin >> masini[i].nrLocuri;
    std::cout << "Putere: ";
    std::cin >> masini[i].putere;
    std::cout << "Pret: ";
    std::cin >> masini[i].pret;
    std::cout << "Culoare: ";
    std::cin >> masini[i].culoare;
    std::cout << "Combustibil: ";
    std::cin >> masini[i].combustibil;
    std::cout << "Cutie viteze: ";
    std::cin >> masini[i].cutieViteze;
  }

  // afiseaza toate automobilele dintr-un anumit an dat
  std::cout << "Afisam toate automobilele dintr-un an dat \n";
  std::cout << "Introdu anul: ";
  int an;
  std::cin >> an;
  for (int i = 0; i < n; i++)
  {
    if (masini[i].an == an)
    {
      std::cout << masini[i].marca << " " << masini[i].model << std::endl;
    }
  }

  // afiseaza toate automobilele cu un anumit pret mai mic decat un pret dat
  std::cout << "Afisam toate automobilele cu un anumit pret mai mic decat un pret dat \n";
  std::cout << "Introdu pretul: ";
  int pret;
  std::cin >> pret;
  for (int i = 0; i < n; i++)
  {
    if (masini[i].pret < pret)
    {
      std::cout << masini[i].marca << " " << masini[i].model << std::endl;
    }
  }

  // afiseaza toate automobilele cu un anumit pret mai mare decat un pret dat
  std::cout << "Afisam toate automobilele cu un anumit pret mai mare decat un pret dat \n";
  std::cout << "Introdu pretul: ";
  std::cin >> pret;
  for (int i = 0; i < n; i++)
  {
    if (masini[i].pret > pret)
    {
      std::cout << masini[i].marca << " " << masini[i].model << std::endl;
    }
  }

  return 0;
}