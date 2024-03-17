#include <iostream>
#include <vector>
using namespace std;

class FullQueue
{

};

class EmptyQueue
{

};

template <class ItemType>
class QueType{
    struct NodeType{
        ItemType info;
        NodeType* next;
    };
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty();
    bool IsFull();
private:
    NodeType *front, *rear;
};

template <class ItemType>
QueType<ItemType>::QueType(){
    front = NULL;
    rear = NULL;
}

template <class ItemType>
bool QueType<ItemType>::IsEmpty(){
    return (front == NULL);
}

template<class ItemType>
bool QueType<ItemType>::IsFull(){
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
void QueType<ItemType>::Enqueue(ItemType newItem){
    if(IsFull())
        throw FullQueue();
    else{
        NodeType* newNode;
        newNode = new NodeType;
        newNode->info = newItem;
        newNode->next = NULL;
        if (rear == NULL)
            front = newNode;
        else
            rear->next = newNode;
        rear = newNode;
    }
}

template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item){
    if(IsEmpty())
        throw EmptyQueue();
    else{
        NodeType* tempPtr;
        tempPtr = front;
        item = front->info;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete tempPtr;
    }
}

template <class ItemType>
void QueType<ItemType>::MakeEmpty(){
    NodeType* tempPtr;
    while(front != NULL){
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}

template <class ItemType>
QueType<ItemType>::~QueType(){
    MakeEmpty();
}

void QueueCopy(QueType<int>& where, QueType<int>& from)
{
    QueType<int> tempQueue;
    int item;

    while(!from.IsEmpty()){
        from.Dequeue(item);
        tempQueue.Enqueue(item);
    }

    while(!tempQueue.IsEmpty()){
        tempQueue.Dequeue(item);
        where.Enqueue(item);
        from.Enqueue(item);
    }
}

/*
int minCoins(QueType<int>& coins, int amount)
{
    // Base case
    if (amount == 0) {
        return 0;
    }

    // Initialize the minimum number of coins to the maximum value
    int minimumCoins = 99999;

    QueType<int> tempQueue;
    QueueCopy(tempQueue, coins);

    // Try every coin that has smaller value than amount
    while (!tempQueue.IsEmpty()) {
        int coin;
        tempQueue.Dequeue(coin);

        if (coin <= amount) {
            // Find the minimum number of coins required to make the remaining amount
            int subCoins = minCoins(coins, amount - coin);

            // Update the minimum number of coins
            minimumCoins = min(minimumCoins, subCoins + 1);
        }
    }

    return minimumCoins;
}
*/

int minCoins(QueType<int>& coins, int amount) {
    std::vector<int> dp(amount + 1, INT_MAX);  // Initialize a vector to store minimum coin counts for amounts from 0 to 'amount'
    dp[0] = 0;  // Base case: 0 coins needed to make an amount of 0

    for (int i = 1; i <= amount; i++) {
        QueType<int> tempQueue;
        QueueCopy(tempQueue, coins);

        while (!tempQueue.IsEmpty()) {
            int coin;
            tempQueue.Dequeue(coin);

            if (coin <= i && dp[i - coin] != INT_MAX) {
                dp[i] = std::min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    if (dp[amount] == INT_MAX) {
        return -1;  // Return -1 to indicate that the amount cannot be made with the available coins
    }

    return dp[amount];
}

int main()
{
    // Get the number of coin types

    cout << "Enter test case number: ";
    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        cout << "Enter number of Coins: ";
        int numberOfCoins;
        cin >> numberOfCoins;

        // Get the coin values
        QueType<int> coins;

        cout << "Enter " << numberOfCoins << " coins with space: ";
        for (int i = 0; i < numberOfCoins; i++) {
            int coin;
            cin >> coin;
            coins.Enqueue(coin);
        }

        // Get the amount of money
        cout << "Enter Amount: ";
        int amount;
        cin >> amount;

        // Find the minimum number of coins required
        int minimumCoins = minCoins(coins, amount);

        // Print the minimum number of coins
        cout << "Minimum Coins required to make " << amount << " is: " << minimumCoins << endl << endl << endl;
    }

    return 0;
}
