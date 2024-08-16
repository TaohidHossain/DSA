#include<iostream>
using namespace std;

template <typename Object>
class List{
private:
    struct Node{
        Object data;
        Node *prev;
        Node *next;

        Node(const Object& d = Object{}, Node *p = nullptr, Node *n = nullptr): data{d}, prev{p}, next{n} {}
        Node(const Object&& d, Node *p = nullptr, Node *n = nullptr): data{move(d)}, prev{p}, next{n} {}
    };
public:
    class const_iterator{
    public:
        const_iterator(): current{nullptr} {}
        const Object& operator*() const{
            return retrive();
        }
        const_iterator& operator++(){
            current = current->next;
            return *this;
        }
        const_iterator& operator++(int){
            const_iterator old = *this;
            ++(*this);
            return old;
        }
        bool operator==(const const_iterator& rhs) const{
            return current == rhs.current;
        }
        bool operator!=(const const_iterator& rhs) const{
            return !(*this == rhs);
        }
    protected:
        Node *current;
        Object& retrive() const{
            return current->data;
        }
        const_iterator(Node *p): current{p}
        {}
        friend class List<Object>;
    };
    class iterator: public const_iterator{
    public:
        iterator(){}
        Object& operator*(){
            return const_iterator::retrive();
        }
        const Object& operator*() const{
            return const_iterator::operator*();
        }
        iterator& operator++(){
            this->current = this->current->next;
            return *this;
        }
        iterator& operator++(int){
            iterator old = *this;
            ++(*this);
            return old;
        }
    protected:
        iterator(Node *p): const_iterator{p} {}
        friend class List<Object>;
    };
public:
    List(){
    }
    List(const List& rhs){
    }
    List(List&& rhs){
    }
    ~List(){
    }
    List& operator=(const List& rhs){
    }
    List& operator=(List&& rhs){
    }

    iterator begin(){

    }
    const_iterator begin() const{

    }
    iterator end(){

    }
    const_iterator end() const{

    }

    int size() const{

    }
    bool empty() const {

    }

    void clear(){

    }

    Object& front(){

    }
    const Object& front() const{

    }
    Object& back(){

    }
    const Object& back() const{

    }
    void push_front(const Object& x){

    }
    void push_front(Object&& x){

    }
    void push_back(Object& x){

    }
    void push_back(Object&& x){

    }
    void pop_front(){

    }
    void pop_back(){

    }

    iterator insert(iterator itr, const Object& x){

    }
    iterator insert(iterator itr, Object&& x){

    }
    iterator erase(iterator itr){

    }
    iterator erase(iterator from, iterator to){

    }

private:
    int theSize;
    Node *head;
    Node *tail;
    void init(){

    }
};
int main(){
    //cout << "fafasf";
    return 0;
}
// git add ./CPP/LinkedList
