#include <iostream>

using namespace std;

extern "C" void f1() {
  printf("f1\n");
}

void f2() {
  cout <<"f2"<<endl;
}

extern "C" void f3() {
  printf("f3\n");
}

void f4() {
  cout <<"f4"<<endl;
}

void f5() {
  cout <<"f5"<<endl;
}

int main(int argc, char* argv[]) {
  for (int i = 1; i < argc; ++i) {
    if (string(argv[i]) == "f1") {
      f1();
    } else if (string(argv[i]) == "f2") {
      f2();
    } else if (string(argv[i]) == "f3") {
      f3();
    } else if (string(argv[i]) == "f4") {
      f4();
    } else if (string(argv[i]) == "f5") {
      f5();
    } else {
      cout << "Unknown function: " << argv[i] << endl;
    }
  }

  return 0;
}