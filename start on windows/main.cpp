// 2. �������� ��������� �� ������ ���� double � ���������� ������������ 
// ������� ��� ������. ����� �������� ������ �������: ������ ������ 
// �������� ������ ��� �������, ������  � ��������� ������ �������, 
// ������ � �������� ������ �� �����, ��������� � ���������� ���������� 
// ������.  ��������� ������ ���������� ������������ ���������� ������ 
// (��������� ����� ������������ ������� ) ��� ����� �� ���������. 


#include <iostream>
#include <ctime>
using namespace std;

// ����������� �������
void new_memory(double*& link, int size);
void fill_arr(double* link, int size);
void show_arr(double* link, int size);
void delete_memory(double* link);

int main()
{
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));

    // ����� ����������
    int size{}, choose=1;
    double arr[1];
    double* link = arr;
    cout << "������� ����� �������: ";
    cin >> size;

    // ����� �������
    while (choose != 0)
    {
        new_memory(link, size);
        fill_arr(link, size);
        show_arr(link, size);
        delete_memory(link);

        cout << "��� ����������� ������� 1, ��� ������ 0: ";
        cin >> choose;
    }
    
    return 1;
}

// ���������� �������
void new_memory(double*& link, int size)
{
    link = new double[size];
}

void fill_arr(double* link, int size)
{
    for (int i = 0; i < size; ++i)
    {
        link[i] = rand() % 89 + 10;
    }
}

void show_arr(double* link, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << link[i] << " ";
    }
}

void delete_memory(double* link)
{
    delete[] link;
}