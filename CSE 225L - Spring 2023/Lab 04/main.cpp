#include "unsortedtype.cpp"

int main()
{
    //creating a integer list
    UnsortedType<int> arrayList;

    //supporting variable
    int item, i;
    bool isFound;

    //taking 4 input and inserting in list
    for(int i = 0; i < 4; i++){
        cin >> item;
        arrayList.InsertItem(item);
    }

    //printing list
    for(i = 0, arrayList.ResetList(); i < arrayList.LengthIs(); i++){
        arrayList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    //printing list length
    cout << arrayList.LengthIs() << endl;

    //inserting one item by user input
    cin >> item;
    arrayList.InsertItem(item);

    //printing list
    for(i = 0, arrayList.ResetList(); i < arrayList.LengthIs(); i++){
        arrayList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    //retrieving 4
    item = 4;
    arrayList.RetrieveItem(item, isFound);
    if(isFound)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    //retrieving 5
    item = 5;
    arrayList.RetrieveItem(item, isFound);
    if(isFound)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    //retrieving 9
    item = 9;
    arrayList.RetrieveItem(item, isFound);
    if(isFound)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    //retrieving 10
    item = 10;
    arrayList.RetrieveItem(item, isFound);
    if(isFound)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    //checking list full or not
    if(arrayList.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    //deleting item 5
    arrayList.DeleteItem(5);

    //checking length full or not
    if(arrayList.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    //deleting item 1
    arrayList.DeleteItem(1);

    //printing list
    for(i = 0, arrayList.ResetList(); i < arrayList.LengthIs(); i++){
        arrayList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    //deleting item 6
    arrayList.DeleteItem(6);

    //printing list
    for(i = 0, arrayList.ResetList(); i < arrayList.LengthIs(); i++){
        arrayList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
