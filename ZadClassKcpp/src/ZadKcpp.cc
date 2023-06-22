/*
Zadanie 6.1
--------------------------------------
- Zaprojektuj klasę/klasy i umieść funkcje z 5 wybranych zadań z zakresu 1.1-5.6
  jako metody danej klasy/klas
- Deklaracja metod w ciele klasy, a definicja poza,
- Definicje metod w osobnym pliku nagłówkowym
- nazwij klasę nadrzędną: ZadKcpp (plik: ZadKcpp.cc)
- używaj dyrektywy preprocesora #define w plikach nagłówkowych aby zapobiec powtórnemu umieszczaniu treści pliku nagłówkowego
- wszystko w osobnym katalogu: ZadClassKcpp
  - main.cc w ZadClassKcpp,
  - pliki nagłówkowe (*.h) w katalogu: ZadClassKcpp/include,
  - pliki źródłowe (*.cc) w katalogu: ZadClassKcpp/src
- Program powinien zawierać interaktywne menu z możliwością wyboru zadania do wywołania 
  - menu:
   - sekcja
   - numer zadania w sekcji i opis w kilu słowach co dana funkcja (zadanie) zawiera
*/

#include "ZadKcpp.h"
#include <iostream>
#include <ctime>

using namespace std;

void ZadKcpp::set_data() {
  cout << "Podaj imie: ";
  cin >> name;
  cout << endl;

  cout << "Podaj wiek (liczba calkowita): ";
  cin >> age;
  cout << endl;

  cout << "Podaj plec (0 - mezczyzna, 1 - kobieta): ";
  cin >> gender;
  cout << endl;
    
  cout << "Podaj wysokosc w metrach (liczba zmiennoprzecinkowa): ";
  cin >> height;
  cout << endl;

  cout << "Podaj wage w kg (liczba zmiennoprzecinkowa): ";
  cin >> weight;
  cout << endl;
    
  cout << "Podaj hobby: ";
  cin >> hobby;
  cout << endl;
    
}

void ZadKcpp::year_of_birth() {
  time_t czas = time(nullptr);
  tm* czasTM = localtime(&czas);
  
  int rok = czasTM->tm_year + 1900;

  int year_of_birth = rok - age;
  cout << "Twoj rok urodzenia to: " << year_of_birth << endl;
}

void ZadKcpp::calculate_bmi() {
  if (age < 0 || height < 0.0 || weight < 0.0){
    cout<< "Brak danych do obliczenia BMI."<<endl;
    return;
  }
  double bmi = (weight/(height * height));
  // if (gender == 0) {
  //     bmi = 66.5 + (13.75 * weight) + (5.003 * height) - (6.755 * age);
  // } else if (gender == 'k' || gender == 'K') {
  //     bmi = 655.1 + (9.563 * weight) + (1.850 * height) - (4.676 * age);
  // }
  // else{
  //   return;
  // }

  cout << "Twoje BMI wynosi: " << bmi << " | Klasyfikujesz sie do kategorii: ";
  if (bmi < 16.0){
    cout << "wyglodzenie"<<endl;
  }
  else if (bmi >= 16.0 && bmi < 17.0){
    cout << "wychudzenie"<<endl;
  }
  else if (bmi >= 17.0 && bmi < 18.5){
    cout << "niedowaga"<<endl;
  }
  else if (bmi >= 18.5 && bmi < 25.0){
    cout << "pozadana masa ciala"<<endl;
  }
  else if (bmi >= 25.0 && bmi < 30.0){
    cout << "nadwaga"<<endl;
  }
  else if (bmi >= 30.0 && bmi < 35.0){
    cout << "otylosc I stopnia"<<endl;
  }
  else if (bmi >= 35.0 && bmi < 40.0){
    cout << "otylosc II stopnia (duza)"<<endl;
  }
  else if (bmi >= 40.0){
    cout << "otylosc III stopnia (chorobliwa)"<<endl;
  }

}

void ZadKcpp::show_data() {
  cout << "Imie: "<< name << endl;
  cout << "Wiek: "<< age << endl;
  string new_gender = "";
  if (gender == 0){ new_gender = "mezczyzna";}
  else if (gender == 1){ new_gender = "kobieta";}
  else{new_gender="?";}
  cout << "Plec: "<< new_gender << endl;
  cout << "Wzrost: "<< height << endl;
  cout << "Waga: "<< weight << endl;
  cout << "Hobby: "<< hobby << endl;
  cout<<endl;
}

void ZadKcpp::show_date_and_time() {
  time_t czas = time(nullptr);
  tm* czasTM = localtime(&czas);
  char buf[80];
  strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", czasTM);

  cout << "Aktualna data i czas: "<<buf<<endl;
}
