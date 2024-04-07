// 4.  Объявить и заполнить двумерный динамический массив случайными
// числами от 10 до 50. Показать его на экран. Для заполнения и показа на
// экран написать отдельные функции. (подсказка: функции должны принимать
// три параметра – указатель на динамический массив, количество строк,
// количество столбцов).  Количество строк и столбцов выбирает пользователь.
// 4.  Объявить и заполнить двумерный динамический массив случайными
// числами от 10 до 50. Показать его на экран. Для заполнения и показа на
// экран написать отдельные функции. (подсказка: функции должны принимать
// три параметра – указатель на динамический массив, количество строк,
// количество столбцов).  Количество строк и столбцов выбирает пользователь.

#include <iostream>
#include <ctime>
using namespace std;

int fill(int** matrix, int rows, int cols);

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	// Задаем размеры массива
	int rows{};
	int cols{};
	cout << "Введите количество строк: ";
	cin >> rows;
	cout << "Введите количество колон: ";
	cin >> cols;


	// Создаем массив указателей на указатели (двумерный массив указателей)
	int** matrix = new int* [rows];

	// Выделение памяти под строки
	for (int i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}

	// Инициализация элементов массива
	fill(matrix, rows, cols);

	// Вывод элементов массива
	cout << "Массив:" << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	// Освобождение памяти
	for (int i = 0; i < rows; ++i) {
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}

int fill(int** matrix, int rows, int cols)
{
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			matrix[i][j] = rand() % 40 + 10; // Пример значения
		}
	}
	return 0;
}