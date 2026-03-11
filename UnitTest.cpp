#include <gtest/gtest.h>

struct Node {
    int data;
    Node* top;
    Node* bottom;
};

TEST(Lab3_1_Variant14, ConnectionsTest) {
    Node* p1 = new Node{1, nullptr, nullptr};
    Node* p2 = new Node{2, nullptr, nullptr};
    Node* p3 = new Node{3, nullptr, nullptr};
    Node* p4 = new Node{4, nullptr, nullptr};

    // Побудова
    p1->top = nullptr;    p1->bottom = p2;
    p2->top = p1;         p2->bottom = p4;
    p3->top = p2;         p3->bottom = p1;
    p4->top = p1;         p4->bottom = p3;

    // Перевірки
    EXPECT_EQ(p1->top, nullptr);
    EXPECT_EQ(p4->bottom->data, 3);
    EXPECT_EQ(p3->bottom, p1);
    EXPECT_EQ(p2->bottom, p4);

    delete p1; delete p2; delete p3; delete p4;
}