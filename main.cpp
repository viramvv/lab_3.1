#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* top;
    Node* bottom;
};

int main() {
    // Створення вузлів
    Node* p1 = new Node{1, nullptr, nullptr};
    Node* p2 = new Node{2, nullptr, nullptr};
    Node* p3 = new Node{3, nullptr, nullptr};
    Node* p4 = new Node{4, nullptr, nullptr};

    // Побудова зв'язків Варіанту 14
    p1->top = nullptr;    p1->bottom = p2;
    p2->top = p1;         p2->bottom = p4;
    p3->top = p2;         p3->bottom = p1;
    p4->top = p1;         p4->bottom = p3;

    cout << "Мережна структура побудована успішно." << endl;

    // Видалення
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    cout << "Пам'ять звільнена." << endl;
    return 0;
}