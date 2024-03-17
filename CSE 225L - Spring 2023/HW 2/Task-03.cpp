#include <iostream>
using namespace std;

//class declaration
template <class ItemType>
class UnsortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    UnsortedType();
    ~UnsortedType();
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
UnsortedType<ItemType>::UnsortedType(){
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

template <class ItemType>
int UnsortedType<ItemType>::LengthIs(){
    return length;
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull(){
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item){
    NodeType* location;
    location = new NodeType;
    location->info = item;
    location->next = listData;
    listData = location;
    length++;
}

template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item){
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
void UnsortedType<ItemType>::RetrieveItem(ItemType &item, bool &found){
    NodeType* location = listData;
    bool moreToSearch = (location != NULL);
    found = false;
    while (moreToSearch && !found){
        if (item == location->info)
            found = true;
        else{
            location = location->next;
            moreToSearch = (location != NULL);
        }
    }
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty(){
    NodeType* tempPtr;
    while (listData != NULL){
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

template <class ItemType>
UnsortedType<ItemType>::~UnsortedType(){
    MakeEmpty();
}

template <class ItemType>
void UnsortedType<ItemType>::ResetList(){
    currentPos = NULL;
}

template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType &item){
    if (currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    item = currentPos->info;
}


int main()
{
    //list
    UnsortedType<int> list01, list02, list03;

    //supporting variable
    int m, n, i, j, item, item01, item02;

    //taking input of list 01
    cout << "Enter size of list 01: ";
    cin >> m;
    cout << "Enter " << m << " item with space:\n";
    for(i = 0; i < m; i++){
        cin >> item;
        list01.InsertItem(item);
    }

    //taking input of list 02
    cout << "\nEnter size of list 02: ";
    cin >> n;
    cout << "Enter " << n << " item with space:\n";
    for(i = 0; i < n; i++){
        cin >> item;
        list02.InsertItem(item);
    }

    //combining two list in list 03
    list01.ResetList();
    list02.ResetList();
    i = j = 0;
    list01.GetNextItem(item01);
    list02.GetNextItem(item02);

    while(1){
        if(item01 > item02){
            list03.InsertItem(item01);
            i++;
            if(i < list01.LengthIs())
                list01.GetNextItem(item01);
            else break;
        }
        else{
            list03.InsertItem(item02);
            j++;
            if(j < list02.LengthIs())
                list02.GetNextItem(item02);
            else break;
        }
    }

    while(i < list01.LengthIs()){
        list03.InsertItem(item01);
        i++;
        if(i < list01.LengthIs())
            list01.GetNextItem(item01);
    }

    while(j < list02.LengthIs()){
        list03.InsertItem(item02);
        j++;
        if(j < list02.LengthIs())
            list02.GetNextItem(item02);
    }

    //printing list
    cout << "\nCombined List:\n";
    for(i = 0, list03.ResetList(); i < list03.LengthIs(); i++){
        list03.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
