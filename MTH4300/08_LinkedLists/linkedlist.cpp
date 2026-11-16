#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int d, Node* n = nullptr) : data(d), next(n) {}
};

class LinkedList{
    private:
        Node* head;
        size_t size; //size_t = positive integer

    public:
        LinkedList(): head(nullptr){}

        Node* find(size_t pos){
            Node* curr = head;
            int count = 0;
            while(count < pos && curr != nullptr){
                curr = curr -> next;
                count++
            }
        }
}