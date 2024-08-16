#include<iostream>
using namespace std;

template <typename Object>
class List{
private:
    struct Node{
        Object data;
        Node *prev;
        Node *next;

        Node(const Object& d = Object{}, Node *p = nullptr, Node *n = nullptr): data{d}, prev{p}, next{n}
        {}
        Node(const Object&& d, Node *p = nullptr, Node *n = nullptr): data{move(d}, prev{p}, next{n}
        {}
    };
public:
    class const_iterator{
    public:
        const_iterator(): current{nullptr}
        {}
        const Object& operator*() const{
            return retrive();
        }
        const_iterator& operator++(){

        }
        const_iterator& operator++(int){

        }
        bool operator==(const_iterator& rhs) const{

        }
        bool operator==(const_iterator&& rhs) const{

        }
    protected:
        Node *current;
        Object retrive() const{
            return current->data;
        }
        const_iterator(Node *p): current{p}
        {}
        friend class List<Object>;
    };
    class iterator: public const_iterator{

    };


private:
    int theSize;
    Node *head;
    Node *tail;
};
int main(){
    //cout << "fafasf";
    return 0;
}
