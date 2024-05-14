#include <iostream>
#include <string>
using namespace std;

template <typename type>


class vector {
private:

    int number{};
    int* index{};
    type* temp;

public:
    type* array;
    int size{};
    int capacity{};
    //создание пустого вектора
    vector() { array = new type[capacity]; }

    //создание вектора с необходимым количеством элементов
    vector(int capacity) : capacity(capacity) {
        array = new type[capacity + 1];
        for (int i = 0; i < capacity; i++) {
            array[i] = 0;
        }
        this->size = capacity;
        this->capacity += 1;
    }

    //создание вектора с необходимым количеством элементов и необходимым нам числом
    vector(int capacity, int number) : capacity(capacity), number(number) {
        array = new type[capacity + 1];
        for (int i = 0; i < capacity; i++) {
            array[i] = number;
        }
        this->size = capacity;
        this->capacity += 1;
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
    vector(std::initializer_list<type> list) : size(0), array(nullptr), capacity(0) {
        size = list.size();
        array = new type[size + 1];
        int i = 0;
        for (auto& element : list) {
            array[i++] = element;
        }
        this->capacity = size + 1;
    }


    //очищение памяти
    ~vector() {
        delete[] array;
    }

    //элемент по индексу с проверкой
    type at(type position) {
        if (position < 0 || position >= size) {
            cout << "Error, wrong index" << endl;
            return 0;
        }
        else {
            return array[position];
        }

    }

    //первый элемент массива
    type front() {
        return array[0];
    }

    //крайний элемент массива
    type back() {
        return array[size - 1];
    }

    //добавление элемента
    void push_back(type add) {

        if (size == capacity) {
            capacity += 2;
            temp = new type[size + 1];
            for (int i = 0; i < size; i++) {
                temp[i] = array[i];
            }
            delete[] array;
            size += 1;
            array = new type[capacity];
            for (int i = 0; i < size - 1; i++) {
                array[i] = temp[i];
            }
            array[size - 1] = add;
            array[size] = 0;
            delete[] temp;
        }
        else {
            array[size] = add;
            size++;
        }
    }

    //добавление элемента на определенную позицию
    void insert(type add, type volue) {

        temp = new type[size];
        for (int i = 0; i < size; i++) {
            temp[i] = array[i];
        }

        if (size == capacity) {
            delete[] array;
            size += 1;
            capacity += 2;
            array = new type[capacity];
            for (int i = 0; i < size; i++) {

                if (i == volue) {
                    array[i] = add;
                }
                else if (i < volue) {
                    array[i] = temp[i];
                }
                else if (i > volue) {
                    array[i] = temp[i - 1];
                }
            }
            array[size] = 0;

        }
        else {
            size += 1;
            array[volue] = add;
            for (int i = volue + 1; i < size; i++) {
                array[i] = temp[i - 1];
            }
        }
        delete[] temp;
    }

    // добавление ряда элементов на определенную позицию
    void insert(type add, type n, type volue) {
        temp = new type[size];
        for (int i = 0; i < size; i++) {
            temp[i] = array[i];
        }

        if (size + n >= capacity) {
            delete[] array;
            size = size + n;
            capacity = size + 1;
            array = new type[capacity];

            for (int i = 0; i < size; i++) {

                if (i == volue) {
                    for (int j = 0; j < n; j++, i++) {
                        array[i] = add;
                    }
                    --i;
                }
                else if (i < volue) {
                    array[i] = temp[i];
                }
                else if (i > volue + n - 1) {
                    array[i] = temp[i - n];
                }
            }
        }
        else {
            size += n;
            for (int j = 0, i = volue; j < n; j++, i++) {
                array[i] = add;
            }
            for (int i = volue + n; i < size; i++) {
                array[i] = temp[i - n];
            }
        }

        delete[] temp;
    }

    //очищение вектора
    void clear() {
        for (int i = 0; i < size; i++) {
            array[i] = 0;
        }
        size = 0;
    }

    //удаление последнего элемента
    void pop_back() {
        array[size - 1] = 0;
        size -= 1;
    }

    //удаление элемента под номером
    void erase(int n) {

        for (int i = n; i < size - 1; i++) {
            array[i - 1] = array[i];
        }
        size--;
    }

    //удаление диапозона элементов
    void erase(int begin, int end) {

        for (int i = begin; i < size - (end - begin); i++) {
            array[i - 1] = array[i + (end - begin)];
        }
        size = size - (end - begin + 1);
        for (int i = size; i < capacity; i++) {
            array[size] = 0;
        }
    }

    //проверка пустой ли вектор
    int empty() {
        if (size == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }

    // изменение размера вектора
    void resize(int n) {
        if (n > size) {
            if (n > capacity) {
                capacity = n + 1;
                temp = new type[size];
                for (int i = 0; i < size; i++) {
                    temp[i] = array[i];
                }
                delete[] array;
                
                array = new type[capacity];
                for (int i = 0; i < size; i++) {
                    array[i] = temp[i];
                }
                delete[] temp;
                for (int i = size; i < n+1; i++)
                {
                    array[i] = 0;
                }
                size = n;
            }
            else if (n > size) {
                for (int i = size; i < n; i++) {
                    array[i] = 0;
                }
                size = n;
            }

        }
        else if (n < size) {

            for (int i = n; i < size; i++) {
                array[i] = 0;
            }
            size = n;
        }
    }

    // перегрузка оператора []
    type& operator[](int position) {
        index = &position;
        return array[position];
    };

    // перегрузка оператора =
    type& operator=(type count) {
        array[*index] = count;
        index = nullptr;
        this->size += 1;
        return 0;
    };
};

template<typename type>
void show(const vector<type>& vec) {
    for (int i = 0; i < vec.size; ++i) {
        cout << vec.array[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "ru");

    vector<int> numbers1{0, 1, 2, 3, 4};
    vector<int> numbers2(3, 4);
    vector<string> word("hello");

    // numbers1[0] = 0;
    // numbers1[1] = 1;
    // numbers1[2] = 2;
    // numbers1[3] = 3;


    // cout << numbers1.at(4)<<endl;
    // cout<<numbers1.back()<<endl;
    // cout<<numbers1.front()<<endl;


    // cout<<numbers1.capacity<<endl;
    // cout<<numbers1.size<<endl;


    // show(numbers1);



    // numbers1.push_back(4);
    // cout<<numbers1.capacity<<endl;
    // cout<<numbers1.size<<endl;
    // show(numbers1);

    // numbers1.push_back(5);
    // cout<<numbers1.capacity<<endl;
    // cout<<numbers1.size<<endl;
    // show(numbers1);




    // numbers1.insert(9, 4);
    // cout<<numbers1.capacity<<endl;
    // cout<<numbers1.size<<endl;
    // show(numbers1);

    // numbers1.insert(5, 3);
    // cout<<numbers1.capacity<<endl;
    // cout<<numbers1.size<<endl;
    // show(numbers1);

    numbers1.insert(7, 3, 4);
    cout << numbers1.capacity << endl;
    cout << numbers1.size << endl;
    show(numbers1);

    // numbers1.clear();
    // show(numbers1);
    // cout<<numbers1.capacity<<endl;
    // cout<<numbers1.size<<endl;

    // numbers1.pop_back();
    // cout<<numbers1.capacity<<endl;
    // cout<<numbers1.size<<endl;
    // show(numbers1);

    // numbers1.erase(3);
    // cout<<numbers1.capacity<<endl;
    // cout<<numbers1.size<<endl;
    // show(numbers1);

    // numbers1.erase(3,5);
    // cout<<numbers1.capacity<<endl;
    // cout<<numbers1.size<<endl;
    // show(numbers1);

    // if(numbers1.empty())
    //         cout << "Vector is empty" << endl;
    //     else
    //         cout << "Vector has size " << numbers1.size << endl;

    numbers1.resize(10);
    cout << numbers1.capacity << endl;
    cout << numbers1.size << endl;
    show(numbers1);

    numbers1.resize(5);
    cout << numbers1.capacity << endl;
    cout << numbers1.size << endl;
    show(numbers1);

    //   cout<<word[3];

    return 0;
}