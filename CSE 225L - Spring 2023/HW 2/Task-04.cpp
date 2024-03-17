#include <iostream>
using namespace std;

const int MAX_ITEMS = 5;
class FullStack{
// Exception class thrown
// by Push when stack is full.
};

class EmptyStack{
// Exception class thrown
// by Pop and Top when stack is empty.
};


template <class ItemType>
class StackType{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType);
    void Pop();
    ItemType Top();
private:
    int top;
    ItemType items[MAX_ITEMS];
};



template <class ItemType>
StackType<ItemType>::StackType(){
    top = -1;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty(){
    return (top == -1);
}

template <class ItemType>
bool StackType<ItemType>::IsFull(){
    return (top == MAX_ITEMS-1);
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem){
    if(IsFull())
        throw FullStack();
    top++;
    items[top] = newItem;
}

template <class ItemType>
void StackType<ItemType>::Pop(){
    if(IsEmpty())
        throw EmptyStack();
    top--;
}

template <class ItemType>
ItemType StackType<ItemType>::Top(){
    if (IsEmpty())
        throw EmptyStack();
    return items[top];
}


// Function to check if a set of parentheses is balanced or not
bool isBalanced(string expression){
    StackType<char> temp;
    for(int i = 0; i < expression.length(); i++){
        if(expression[i] == '('){
            temp.Push(expression[i]);
        }
        else if(expression[i] == ')'){
            if(temp.IsEmpty() || temp.Top() != '('){
                return false;
            }
            temp.Pop();
        }
    }
    return temp.IsEmpty();
}

int main()
{
    string expression;

    for(int i = 0; i < 4; i++){
        cout << "Enter Expression: ";
        cin >> expression;
        if(isBalanced(expression)){
            cout << "Results: Balanced." << endl << endl;
        }
        else{
            cout << "Results: Not Balanced." << endl << endl;
        }
    }

    return 0;
}
