/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Przekazywanie przez wartosc w C++
 * v0.01
 */

#include<iostream>
using namespace std;



//---------------------------------------------------------------------
void swapA(int a, int b) { /// Przekazywanie zmiennych przez wartość
	cout <<"\n---> Przez wartosc:"<< endl;
	int temp = a;
	a = b;
	b = temp;    
	cout <<"W: A = "<< a <<" B = "<< b << endl;
}

//---------------------------------------------------------------------
void swapB(int &a, int &b) { /// Przekazywanie przez referencje
	cout <<"\n---> Przez referencje:"<< endl;
	int temp = a;
	a = b;
	b = temp;
}

//---------------------------------------------------------------------
void swapC(int *a, int *b) { /// Przekazywanie przez wskaźnik
  cout <<"\n---> Przez wskaznik:"<< endl;
  int temp = *a;
  *a = *b;
  *b = temp;
  /* *a = *a * 3;
   * *b = *b * 3; */
	cout <<"W swapC: A = "<< *a   <<" B = "<< *b << endl;
	//cout <<"W swapC: A = "<< temp <<" B = "<< *b << endl;
}



//---------------------------------------------------------------------
int main() {

	int A = 4;   
	int B = 6;

	cout <<"Przed: A = "<< A <<" B = "<< B << endl;

  //--- przez zmienne (copia) --------------
  swapA(A, B);
	cout <<"Po:    A = "<< A <<" B = "<< B << endl;


  //--- przez referencje -------------------
	swapB(A, B);    
	cout <<"Po:    A = "<< A <<" B = "<< B << endl;


	//--- przez wskaznik ----------------------
	int *wskA = &A;
	int *wskB = &B;
	swapC(wskA, wskB);    
	cout <<"Po:    A = "<< A <<" B = "<< B << endl;

	swapC(&A, &B);    
	cout <<"Po:    A = "<< A <<" B = "<< B << endl;


	return 0;
}
