#include <iostream>
using namespace as std;

class LinkedList{
    private:
        Node* head;

    public:
        LinkedList() : lead(nullptr) {}
        Node* find(size_t pos);
        Node* insert(int val, size_t pos){
            if(pos == 0){
                Node* newNode(val, head);
            }
        }
        
        
        {
            Node* curr = find(pos - 1);
            Node* newNode = new Node(27, curr -> next);
            curr -> next = newNode;
        }
        bool remove(size_t pos);
        void print();
        ~LinkedList(){
            Node* curr = head;
            while(curr != nullptr){
                Node* temp = curr->next;
                delete curr;
                curr = temp;
            }
            head = nullptr;
        }

}



int main(){

}