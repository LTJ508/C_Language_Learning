#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class FullStack{

};

class EmptyStack{

};

template <class ItemType>
class StackType{
    struct NodeType{
        ItemType info;
        NodeType* next;
    };
public:
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
private:
    NodeType* topPtr;
};

template <class ItemType>
StackType<ItemType>::StackType(){
    topPtr = NULL;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty(){
    return (topPtr == NULL);
}

template <class ItemType>
ItemType StackType<ItemType>::Top(){
    if(IsEmpty())
        throw EmptyStack();
    else
        return topPtr->info;
}

template <class ItemType>
bool StackType<ItemType>::IsFull(){
    NodeType* location;
    try{
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception){
        return true;
    }
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem){
    if(IsFull())
        throw FullStack();
    else{
        NodeType* location;
        location = new NodeType;
        location->info = newItem;
        location->next = topPtr;
        topPtr = location;
    }
}

template <class ItemType>
void StackType<ItemType>::Pop(){
    if(IsEmpty())
        throw EmptyStack();
    else{
        NodeType* tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class ItemType>
StackType<ItemType>::~StackType(){
    NodeType* tempPtr;
    while(topPtr != NULL) {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}



bool isValidExpression(string expression)
{
    StackType<char> temp;
    for(int i = 0; i < expression.length(); i++){
        if(expression[i] == ' ') continue;
        if(expression[i] == '+' || expression[i] == '-' ||expression[i] == '*' ||expression[i] == '/'){
            int j = i+1;
            while(expression[j] == ' ') j++;
            if(expression[j] == '+' || expression[j] == '-' || expression[j] == '*' || expression[j] == '/')
                return false;
        }

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

int getPrecedence(string ch)
{
    if(ch == "/") return 3;
    else if(ch == "*") return 2;
    else if(ch == "+" || ch == "-") return 1;
    else return -1;
}

bool isOperator(string op)
{
    if(op == "+" || op == "-" || op == "*" || op == "/" || op == "(" || op == ")") return true;
    else return false;
}

string infixToPostfix(string infix)
{
    StackType<string> stackOfOperator;
    string postfix = "";

    stringstream splitInfix(infix);
    string inf;
    while(splitInfix >> inf){

        if(!isOperator(inf)){
            postfix += (inf + " ");
        }

        else if(inf == "(") stackOfOperator.Push("(");

        else if(inf == ")"){
            while(stackOfOperator.Top() != "("){
                postfix += (stackOfOperator.Top() + " ");
                stackOfOperator.Pop();
            }
            stackOfOperator.Pop();
        }

        else{
            while(!stackOfOperator.IsEmpty() && getPrecedence(inf) <= getPrecedence(stackOfOperator.Top())){
                postfix += (stackOfOperator.Top() + " ");
                stackOfOperator.Pop();
            }
            stackOfOperator.Push(inf);
        }
    }

    while(!stackOfOperator.IsEmpty()){
        postfix += (stackOfOperator.Top() + " ");
        stackOfOperator.Pop();
    }

    return postfix;
}

double evaluate(double a, double b, char ch)
{
    switch(ch)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        return -1;
    }
}

double evaluatePostfix(string postfix)
{
    double a, b;
    StackType<double> stackOfOperand;

    stringstream splitInfix(postfix);
    string inf;
    while(splitInfix >> inf){

        if(!isOperator(inf)){
            stackOfOperand.Push(stod(inf));
        }

        else{
            b = stackOfOperand.Top();
            stackOfOperand.Pop();
            a = stackOfOperand.Top();
            stackOfOperand.Pop();

            stackOfOperand.Push(evaluate(a, b, inf[0]));
        }
    }

    return stackOfOperand.Top();
}


int main()
{
    string expression;

    for(int i = 0; i < 4; i++){
        cout << "Enter expression: ";
        getline(cin, expression);

        if(isValidExpression(expression)){
            cout << "Result: ";
            cout << evaluatePostfix(infixToPostfix(expression)) << "\n\n";
        }
        else{
            cout << "Invalid Expression!!\n\n";
        }
    }

    return 0;
}
