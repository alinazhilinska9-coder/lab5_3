#include <iostream>

using namespace std;

int ticketsCost(int price, int tickets) {
    return price * tickets;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int price1, count1;
    cout << "Набор 1. Введите цену билета и их количество: ";
    cin >> price1 >> count1;
    cout << "Стоимость первого набора: " << ticketsCost(price1, count1) << " руб." << endl;

    int price2, count2;
    cout << "\nНабор 2. Введите цену билета и их количество: ";
    cin >> price2 >> count2;
    cout << "Стоимость второго набора: " << ticketsCost(price2, count2) << " руб." << endl;

    return 0;
}
