#include <iostream>
using namespace std;
void fn_1() {
    cout << "fn_1" << endl;
}
void fn_2() {
    cout << "fn_2" << endl;
}
void fn_3() {
    cout << "fn_3" << endl;
}

int main(int argc, char *argv[]) {

	for(int i = 1; i < argc; i++) {
		switch(*argv[i]) {
			case '1': 
                fn_1(); 
                break;
			case '2': 
                fn_2(); 
                break;
            case '3': 
                fn_3(); 
                break; 
            default:
                cout<< "Niepoprawny argument" << endl;
                break;
		}
	}
	return 0;
}