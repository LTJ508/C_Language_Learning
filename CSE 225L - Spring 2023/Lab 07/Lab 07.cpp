#include <iostream>
using namespace std;

//declaration
template <class ItemType>
class SortedType{
    struct NodeType{
        ItemType info;
        NodeType* next;
    };
public:
    SortedType();
    ~SortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType &, bool &);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};


//implementation
template <class ItemType>
SortedType<ItemType>::SortedType(){
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

template <class ItemType>
int SortedType<ItemType>::LengthIs(){
    return length;
}

template<class ItemType>
bool SortedType<ItemType>::IsFull(){
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
void SortedType<ItemType>::InsertItem(ItemType item){
    NodeType* newNode;
    NodeType* predLoc;
    NodeType* location;
    bool moreToSearch;
    location = listData;
    predLoc = NULL;
    moreToSearch = (location != NULL);
    while (moreToSearch){
        if (location->info < item){
            predLoc = location;
            location = location->next;
            moreToSearch = (location != NULL);
        }
        else
            moreToSearch = false;
    }
    newNode = new NodeType;
    newNode->info = item;
    if (predLoc == NULL){
        newNode->next = listData;
        listData = newNode;
    }
    else{
        newNode->next = location;
        predLoc->next = newNode;
    }
    length++;
}

template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item){
    NodeType* location = listData;
    NodeType* tempLocation;
    if (item == listData->info){
        tempLocation = location;
        listData = listData->next;
    }
    else{
        while (!(item==(location->next)->info))
            location = location->next;
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}

template <class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType &item, bool &found){
    NodeType* location = listData;
    bool moreToSearch = (location != NULL);
    found = false;
    while (moreToSearch && !found){
        if (item == location->info)
            found = true;
        else if (item > location->info){
            location = location->next;
            moreToSearch = (location !=
                            NULL);
        }
        else
            moreToSearch = false;
    }
}

template <class ItemType>
void SortedType<ItemType>::MakeEmpty(){
    NodeType* tempPtr;
    while (listData != NULL){
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

template <class ItemType>
SortedType<ItemType>::~SortedType(){
    MakeEmpty();
}

template <class ItemType>
void SortedType<ItemType>::ResetList(){
    currentPos = NULL;
}

template <class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType &item){
    if (currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    item = currentPos->info;
}

//main driver file
int main()
{
    //declaring integer list
    SortedType<int> integerList;

    //Helping Variable
    int i, item;
    bool isFound;

    //printing length
    cout << integerList.LengthIs() << endl;

    //inserting item from user
    for(i = 0; i < 5; i++){
        cin >> item;
        integerList.InsertItem(item);
    }

    //Printing item
    for(i = 0, integerList.ResetList(); i < integerList.LengthIs(); i++){
        integerList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    //retrieving 6
    item = 6;
    integerList.RetrieveItem(item, isFound);
    if(isFound)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    //retrieving 5
    item = 5;
    integerList.RetrieveItem(item, isFound);
    if(isFound)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    //printing length full or not
    if(integerList.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    //deleting item 1
    integerList.DeleteItem(1);

    //printing item list
    for(i = 0, integerList.ResetList(); i < integerList.LengthIs(); i++){
        integerList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    //printing list is full or not
    if(integerList.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;


    return 0;
}
