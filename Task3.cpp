#include <iostream>

using namespace std;

int tickets(int adult, int child) {
    return adult + child;
}

int tickets(int adult, int child, int student) {
    return adult + child + student;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int adult, child, student;

    cout << "Введите количество взрослых и детей: ";
    cin >> adult >> child;
    cout << "Всего зрителей (без студентов): " << tickets(adult, child) << endl;

    cout << "\nВведите количество взрослых, детей и студентов: ";
    cin >> adult >> child >> student;
    cout << "Всего зрителей (со студентами): " << tickets(adult, child, student) << endl;

    return 0;
}
