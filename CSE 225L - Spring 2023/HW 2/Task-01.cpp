#include <iostream>
#include <string>
using namespace std;

const int MAX_ITEMS = 5;

template <class ItemType>
class UnsortedType{
public:
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType &, bool &);
    void ResetList();
    void GetNextItem(ItemType &);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};

template <class ItemType>
UnsortedType<ItemType>::UnsortedType(){
    length = 0;
    currentPos = -1;
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty(){
    length = 0;
}

template <class ItemType>
bool UnsortedType<ItemType>::IsFull(){
    return (length == MAX_ITEMS);
}

template <class ItemType>
int UnsortedType<ItemType>::LengthIs(){
    return length;
}

template <class ItemType>
void UnsortedType<ItemType>::ResetList(){
    currentPos = -1;
}

template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType &item){
    currentPos++;
    item = info[currentPos];
}

template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType &item, bool &found){
    int location = 0;
    bool moreToSearch = (location < length);
    found = false;
    while (moreToSearch && !found){
        if(item == info[location]){
            found = true;
            item = info[location];
        }
        else{
            location++;
            moreToSearch = (location < length);
        }
    }
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item){
    info[length] = item;
    length++;
}

template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item){
    int location = 0;
    while (item != info[location])
        location++;
    info[location] = info[length - 1];
    length--;
}


class studentInfo{
private:
    int id;
    string name;
    double cgpa;
public:
    studentInfo();
    studentInfo(int, string, double);
    bool operator==(const studentInfo& other) const;
    bool operator!=(const studentInfo& other) const;
    void print();
};

studentInfo::studentInfo(){

}

studentInfo::studentInfo(int i, string n, double c){
    id = i;
    name = n;
    cgpa = c;
}


bool studentInfo::operator==(const studentInfo& other) const{
    return id == other.id;
}

bool studentInfo::operator!=(const studentInfo& other) const{
    return id != other.id;
}

void studentInfo::print(){
    cout << id << ", " << name << ", " << cgpa << endl;
}


int main()
{
    //supporting variable
    int i, id;
    double cgpa;
    string name;
    studentInfo item;
    bool isFound = false;

    //list of object
    UnsortedType<studentInfo> studentList;

    //taking 5 input
    cout << "Enter 5 Students Records(ID <> Name <> CGPA):\n";
    for(i = 0; i < 5; i++){
        cin >> id;
        cin >> name;
        cin >> cgpa;
        item = studentInfo(id, name, cgpa);
        studentList.InsertItem(item);
    }

    //deleting records
    cout << "\nEnter ID to delete: ";
    cin >> id;
    item = studentInfo(id, "searching", 0.0);
    studentList.DeleteItem(item);

    //retrieving records
    cout << "\n\nEnter ID for retrieving records: ";
    cin >> id;
    item = studentInfo(id, "searching", 0.0);
    studentList.RetrieveItem(item, isFound);
    if(isFound){
        cout << "Item is Found\n";
        item.print();
    }
    else{
        cout << "Item is not Found\n";
    }

    //printing the list
    cout << "\nAll Students Records:\n";
    for(i = 0, studentList.ResetList(); i < studentList.LengthIs(); i++){
        studentList.GetNextItem(item);
        item.print();
    }
    cout << endl;

    return 0;
}
