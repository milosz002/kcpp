#include<iostream>

using namespace std;

class MyClass
{
 public:
  MyClass(){
  	cout<<"Object created"<<endl;
  };
  ~MyClass(){
  	cout<<"Object deleted"<<endl;
  };

  void SetValue1(int val1){
  	Value1 = val1;
  };
  
  void SetValue2(int val2){
  	Value2 = val2;
  };
  
  void Print(){
  	cout<<"Value1 : "<<Value1<<endl;
  	cout<<"Value2 : "<<Value1<<endl; 
  };
  
  int GetValue1(){
  	return Value1;
  };
  
  int GetValue2(){
  	return Value2;
  };
  
  

  private:
  int Value1;
  int Value2;
  
};



int main() {
  MyClass *myClass = new MyClass();
  myClass->SetValue1(1111111000);
  myClass->SetValue2(20202020);
  myClass->Print();

  cout <<"Value1 from GetValue1: "<< myClass->GetValue1()<< endl;
  cout <<"Value2 from GetValue2: "<< myClass->GetValue2()<< endl;
	
  delete(myClass);
}





