/**************************************
* Автор: Калинин Андрей               *
* Лабораторная №11                    *
* Дата: 03.12.2023                    *
* Название: Арифметика длинных чисел  *
* https://onlinegdb.com/rLqwhbalC-    *
**************************************/

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <string>

using namespace std;
using namespace boost::multiprecision;

int main() {
  string choice = "0";
  cpp_int firstNumber;
  cpp_int secondNumber;
    
  cout << "List of actions: "
       << endl << "s = summ, " << "dif = difference"
       << endl << "m - multiplication, " << "div - division"
       << endl << "c - comparsion" << endl;
  cout << "Your action: ";
  cin >> choice;
  cout << endl;
    
  cout << "First number: ";
  cin >> firstNumber;
  cout << endl; 
  cout << "Second number:  ";
  cin >> secondNumber;
    
    
  if (choice == "s") {
    cout << "Result = " << (firstNumber + secondNumber);
  } else if (choice == "dif") {
    cout << "Result = " << (firstNumber - secondNumber);
  } else if (choice == "m") {
    cout << "Result = " << (firstNumber * secondNumber);
  } else if (choice == "div") {
    cout << "Result = " << (firstNumber / secondNumber);
  } else if(choice == "c") {
    if (firstNumber < secondNumber) {
      cout << firstNumber << " < " << secondNumber;  
    }
        
    if (firstNumber > secondNumber) {
      cout << firstNumber << " > " << secondNumber;
    }
        
    if (firstNumber == secondNumber) {
      cout << firstNumber << " = " << secondNumber;
    }
    
  } else {
    cout << "Wrong action type";  
  }
    
  return 0;
}

