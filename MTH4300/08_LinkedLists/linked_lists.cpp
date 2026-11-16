#include <iostream>

class Node {
public:
    int m_value;
    Node* m_next;

    Node(int value, Node* next = nullptr) : m_value(value), m_next(next) {}
};

class LinkedList {
public:
    LinkedList() : m_head(nullptr) {}

    // Destructor to prevent memory leaks
    ~LinkedList() {
        clear();
    }

    // Prevent unintentional shallow copying
    LinkedList(const LinkedList&) = delete;
    LinkedList& operator=(const LinkedList&) = delete;

    void addToFront(int value) {
        m_head = new Node(value, m_head);
    }

    void addToBack(int value) {
        if (!m_head) {
            m_head = new Node(value);
            return;
        }

        Node* current = m_head;
        while (current->m_next != nullptr) {
            current = current->m_next;
        }
        current->m_next = new Node(value);
    }

    void addNode(int value) {
        if (!m_head || value <= m_head->m_value) {
            addToFront(value);
            return;
        }

        Node* current = m_head;
        while (current->m_next != nullptr && current->m_next->m_value < value) {
            current = current->m_next;
        }

        current->m_next = new Node(value, current->m_next);
    }

    void removeNode(int value) {
        if (!m_head) return;

        // If the node to delete is the head
        if (m_head->m_value == value) {
            Node* toDelete = m_head;
            m_head = m_head->m_next;
            delete toDelete;
            return;
        }

        // Search for the node preceding the one to delete
        Node* current = m_head;
        while (current->m_next != nullptr && current->m_next->m_value != value) {
            current = current->m_next;
        }

        // If node was found
        if (current->m_next != nullptr) {
            Node* toDelete = current->m_next;
            current->m_next = current->m_next->m_next;
            delete toDelete;
        }
    }

    void printList() const {
        Node* current = m_head;
        while (current != nullptr) {
            std::cout << current->m_value << '\n';
            current = current->m_next;
        }
    }

    void clear() {
        while (m_head != nullptr) {
            Node* temp = m_head;
            m_head = m_head->m_next;
            delete temp;
        }
    }

private:
    Node* m_head;
};

int main() {
    LinkedList myLL;
    myLL.addNode(1);
    myLL.addNode(2);
    myLL.addNode(3);
    myLL.removeNode(2);
    myLL.printList(); // Correctly prints 1 then 3
    return 0;
}