/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Bitowe operatory logiczne (define) w C++
 * v0.01
 */

#include <iostream>
using namespace std;

void printBinaryShort(const unsigned char val) {
	for(int i = 7; i >= 0; i--)
		if(val & (1 << i))
			//(1 << 0) "wstawia 1 na kolejnych pozycjach"
			//(zmienna << ilosc_miejsc)
			cout << "1";
		else
			cout << "0";
}

#define PR(STR, EXPR) \
	cout << EXPR << STR <<"\t"; printBinaryShort(EXPR); cout << endl;

int main(){

	for(int i = 0; i<= 10; i++) {

    PR(" in binary: ", i);
	  
    /* cout << i << " in binary: " <<"\t"; printBinaryShort(i); cout << endl; */
		
    /* cout << i <<"\t";
     * printBinaryShort(i);
     * cout << endl; */
    
  }

	//PR("a in binary: ", a);

    return 0;
}
