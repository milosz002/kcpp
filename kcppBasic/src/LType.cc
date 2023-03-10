/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.02.21
 * \brief Typy danych w C++
 * v0.02 (2021.03.01)
 */

#include<iostream>
#include <vector>
using namespace std;

#define println(x) std::cout<<x<<endl

void printvec(vector<int> vec){
  for(int i = 0; i < vec.size(); i++){
    //println(vec[i]);
    cout<<vec[i]<<" ";
    if(i%10 == 0){
      cout<<endl;
    }
  }
  cout<<endl;
}

int main()
{
  int fVarA;
  // fVarA = 7;
  fVarA = 7.3;

  cout <<"fVarA: "<< fVarA << endl;

  // float fVarA;              //Error
  // float fVarB;
  // fVarB = 7;
  // fVarB = 7.3;
  // cout <<"fVarB: "<< fVarB << endl;


  char fVarC[10];   //deklaracja stringu o długości 10 znaków
  char fVarD[] = "Tutaj jakis napis";  /*deklaracja napisu (następuje automatyczne przypisanie tekstu zmiennej oraz określenie jej długości) */
  //char *fVarE = "A tutaj inny napis";  //podobne do powyższej metody, deprecated
  //char fVarF = 'Inny'; // warning: multi-character constant; only one character 'I'

  /* cout << "Set fCharC variable" << endl;
   * cin >> fVarC; */


  cout << "fVarC: "<< fVarC << endl;
  cout << "fVarD: "<< fVarD << endl;
  //cout << "fVarE: "<< fVarE << endl;
  //cout << "fVarF: "<< fVarF << endl;
  
  
  // -----------------------------------------------
  std::vector < int > vec;
  for(int i = 0; i < 100; i++){
    vec.push_back(i);
  }
  printvec(vec);
  
  
  

  return 0;                              
}
