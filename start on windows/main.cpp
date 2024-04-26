#include <iostream>
using namespace std;
template<typename type>
class vector
{
private:
	type* array;
	int size{};
	int number{};
public:

	vector()
	{
		array = new type[size];
	}
	vector(int size) : size(size)
	{
		array = new type[size];
	}
	vector(int size, int number) : size(size), number(number)
	{
		array = new type[size];
		for (int i = 0; i < size; i++)
		{
			array[i] = number;
		}
	}
	~vector()
	{
		delete []array;
	}
};





int main()
{
    setlocale(LC_ALL, "ru");
	
	vector<int> numbers1(3);
	vector<int> numbers2(3, 2);

    return 0;
}

