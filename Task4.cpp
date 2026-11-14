#include <iostream>

using namespace std;

void printHall(int hall, int floor = 1) {
    cout << "Зал №" << hall << ", этаж: " << floor << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int hall1;
    cout << "Введите номер зала (этаж будет по умолчанию): ";
    cin >> hall1;
    printHall(hall1);

    int hall2, floor2;
    cout << "\nВведите номер зала и этаж: ";
    cin >> hall2 >> floor2;
    printHall(hall2, floor2);

    return 0;
}
