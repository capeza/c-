#include <iostream>
#include <ostream>
#include <string>
using namespace std;
template <typename type> 

class vector {
private:
  type *array;
  int size{};
  int number{};
  int *index{};

public:
  //создание пустого вектора
  vector() { array = new type[size]; }

  //создание вектора с необходимым количеством элементов
  vector(int size) : size(size) {
    array = new type[size];
    for (int i = 0; i < size; i++) {
      array[i] = 0;
    }
  }

  //создание вектора с необходимым количеством элементов и необходимым нам числом
  vector(int size, int number) : size(size), number(number) {
    array = new type[size];
    for (int i = 0; i < size; i++) {
      array[i] = number;
    }
  }

  //создание вектора состоящего из символов
  vector(string word) {
        size = word.size();
        array = new type[size + 1]; // Добавляем 1 для нулевого символа '\0'
        // Копируем содержимое строки в массив
        for (int i = 0; i < size; ++i) {
            array[i] = word[i];
        }
        array[size] = '\0'; // Добавляем нулевой символ в конец массива
    }

  //очищение памяти
  ~vector() { 
    delete[] array; 
    }
  
//элемент по индексу с проверкой
type at(type position){
    if (position<0||position>=size) {
        cout<<"Error, wrong index"<<endl;
return 0; 
    }else {
    return array[position];
    }
    
}

type front(){
    return array[0]; 
}

type back(){
    return array[size-1]; 
}


  //перегрузка оператора []
  type& operator[](int position) {
    index=&position;
    return array[position];
  };
  //перегрузка оператора =
  type& operator=(int count) {
    array[*index]=count;
    index=nullptr;
   return 0;
};

  
};

int main() {
  setlocale(LC_ALL, "ru");

  vector<int> numbers1(3);
  vector<int> numbers2(3, 4);
  vector<string> word("hello");

numbers1[0] = 0;
numbers1[1] = 1;
numbers1[2] = 2;


cout << numbers1.at(4)<<endl;
cout<<numbers1.back()<<endl;
cout<<numbers1.front()<<endl;
//   for (int i=0; i < 3; i++) {
//     cout << numbers2[i];
//   }

//   cout<<word[3];




//   return 0;
}

// push_back
// insert

// clear

// pop_back
// erase

// size
// empty
// resize

// assign
// swap