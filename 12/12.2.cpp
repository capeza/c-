//2) ������ �� ��������� ������.������������ ����������� ������ 
//����������� ���� ������ � ��������� ���������� �������.�� 
//���������, ��� ���������� �������� ��������������� ������� ������ 
//��� ������, ������� ����� ��������� ������������ � ��� ������� 
//�������� �������.����� ���������� �� ������ ��� ����������� 
//������� � �������� �������(�� ���������������).


#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");

    int x1, y1;
    cout << "������� ���������� ����� ������ �������: ";
    cin >> x1;
    cout << "������� ���������� ������� ������ �������: ";
    cin >> y1;

    int x2, y2;
    cout << "������� ���������� ����� ������ �������: ";
    cin >> x2;
    cout << "������� ���������� ������� ������ �������: ";
    cin >> y1;

    int** arr1 = new int* [x1];
    for (int i = 0; i < x1; i++)
    {
        arr1[i] = new int[y1];
    }

    int** arr2 = new int* [x2];
    for (int i = 0; i < x2; i++)
    {
        arr2[i] = new int[y2];
    }
    return 0;
}
