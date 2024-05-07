#include <iostream>

#include <string>
using namespace std;

template <typename type> 


class vector {
private:
  
  int number{};
  int *index{};
  type *temp; 

public:
  type *array;
  int size{};
  int capacity{};
  //создание пустого вектора
  vector() { array = new type[capacity]; }

  //создание вектора с необходимым количеством элементов
  vector(int capacity) : capacity(capacity) {
    array = new type[capacity+1];
    for (int i = 0; i < capacity; i++) {
      array[i] = 0;
    }
    this->size=capacity;
    this->capacity+=1;
  }

  //создание вектора с необходимым количеством элементов и необходимым нам числом
  vector(int capacity, int number) : capacity(capacity), number(number) {
    array = new type[capacity+1];
    for (int i = 0; i < capacity; i++) {
      array[i] = number;
    }
    this->size=capacity;
    this->capacity+=1;
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
    capacity = size + 2;
  }

  // создание вектора по принципу v{1,2,3,4}
  vector(initializer_list<type> list)
      : size(list.size()), array(new type[size+1]) {
    int i = 0;
    for (auto &element : list) {
      array[i++] = element;
    }
    this->capacity = size + 1;
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

//первый элемент массива
type front(){
    return array[0]; 
}

//крайний элемент массива
type back(){
    return array[size-1]; 
}

//добавление элемента
type push_back(type add){
  
  if (size == capacity) {
    capacity += 2;
    temp = new type[size + 1];
  for (int i = 0; i < size; i++) {
    temp[i] = array[i];
  }
  delete[] array;
     size += 1;
     array = new type[size];
  for (int i = 0; i < size - 1; i++) {
    array[i] = temp[i];
  }
  array[size - 1] = add;
  delete[] temp;
  } else {
  array[size]=add;
  size++;
  }
  
  
  
  
}

//добавление элемента на определенную позицию
type insert(type add,type volue){
  temp = new type[size+1];
  for (int i=0; i<size; i++) {
    temp[i]=array[i];
  }
  delete[] array;
  size=size+1;
  array = new type[size];
    for (int i = 0; i < size; i++) {
      
      if (i==volue-1) {
      array[i]=add;
      } else if (i<volue-1) {
      array[i] = temp[i];
      } else if (i>=volue) {
      array[i] = temp[i-1];
      }
    }
    delete[] temp;
}

// добавление ряда элементов на определенную позицию
type insert(type add, type n, type volue) {
  temp = new type[size];
  for (int i = 0; i < size; i++) {
    temp[i] = array[i];
  }

  delete[] array;
  size = size + n;
  array = new type[size];
  for (int i = 0; i < size; i++) {

    if (i == volue - 1) {
      for (int j = 0; j < n; j++, i++) {
        array[i] = add;
      }
      --i;
    } else if (i < volue - 1) {
      array[i] = temp[i];
    } else if (i >= volue + n - 1) {
      array[i] = temp[i - n];
    }
  }
  delete[] temp;
}

// перегрузка оператора []
type &operator[](int position) {
  index = &position;
  return array[position];
};

// перегрузка оператора =
type &operator=(int count) {
  array[*index] = count;
  index = nullptr;
  this->size+=1;
  return 0;
};


};

template<typename type>
void show(const vector<type>& vec){
  for (int i = 0; i<vec.size; ++i){
  cout <<vec.array[i]<<" ";
  }
  cout<<endl;
}

int main() {
  setlocale(LC_ALL, "ru");

  vector<int> numbers1{0,1,2,3,4};
  vector<int> numbers2(3, 4);
  vector<string> word("hello");

// numbers1[0] = 0;
// numbers1[1] = 1;
// numbers1[2] = 2;
// numbers1[3] = 3;


// cout << numbers1.at(4)<<endl;
// cout<<numbers1.back()<<endl;
// cout<<numbers1.front()<<endl;


cout<<numbers1.capacity<<endl;
cout<<numbers1.size<<endl;


show(numbers1);



// numbers1.push_back(4);
// cout<<numbers1.capacity<<endl;
// cout<<numbers1.size<<endl;
// show(numbers1);

// numbers1.push_back(5);
// cout<<numbers1.capacity<<endl;
// cout<<numbers1.size<<endl;
// show(numbers1);




// numbers1.insert(9, 4);
// numbers1.insert(5, 3);
// for (int i=0; i < 7; i++) {
//     cout << numbers1[i];
// }

// numbers1.insert(7,3,4);
// for (int i=0; i < 8; i++) {
//      cout << numbers1[i];
// }



//   cout<<word[3];

return 0;
}