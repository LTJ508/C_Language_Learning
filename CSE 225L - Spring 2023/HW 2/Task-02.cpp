#include <iostream>
using namespace std;

const int MAX_ITEMS = 5;
template <class ItemType>
class SortedType{
public :
    SortedType();
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
SortedType<ItemType>::SortedType() {
    length = 0;
    currentPos = - 1;
}

template <class ItemType>
void SortedType<ItemType>::MakeEmpty() {
    length = 0;
}

template <class ItemType>
bool SortedType<ItemType>::IsFull() {
    return (length == MAX_ITEMS);
}

template <class ItemType>
int SortedType<ItemType>::LengthIs() {
    return length;
}

template <class ItemType>
void SortedType<ItemType>::ResetList() {
    currentPos = - 1;
}

template <class ItemType>
void
SortedType<ItemType>::GetNextItem(ItemType &item){
    currentPos++;
    item = info [currentPos];
}

template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item){
    int location = 0;
    bool moreToSearch = (location < length);

    while (moreToSearch) {
        if(item > info[location]) {
            location++;
            moreToSearch = (location < length);
        } else if(item < info[location])
            moreToSearch = false;
    }
    for (int index = length; index > location;
            index--)
        info[index] = info[index - 1];
    info[location] = item;
    length++;
}

template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item){
    int location = 0;

    while (item != info[location])
        location++;
    for (int index = location + 1; index < length;
            index++)
        info[index - 1] = info[index];
    length--;
}

template <class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType &item, bool &found){
    int midPoint, first = 0, last = length - 1;
    bool moreToSearch = (first <= last);
    found = false;
    while (moreToSearch && !found) {
        midPoint = (first + last) / 2;
        if(item < info[midPoint]) {
            last = midPoint - 1;
            moreToSearch = (first <= last);
        } else if(item > info[midPoint]) {
            first = midPoint + 1;
            moreToSearch = (first <= last);
        } else {
            found = true;
            item = info[midPoint];
        }
    }
}




class timeStamp{
private:
    int ss, mm, hh;
public:
    timeStamp();
    timeStamp(int, int, int);
    bool operator==(const timeStamp& other) const;
    bool operator!=(const timeStamp& other) const;
    bool operator>(const timeStamp& other) const;
    bool operator<(const timeStamp& other) const;
    void print();
};

timeStamp::timeStamp(){

}

timeStamp::timeStamp(int s, int m, int h){
    ss = s;
    mm = m;
    hh = h;
}


bool timeStamp::operator==(const timeStamp& other) const{
    return (ss == other.ss && mm == other.mm && hh == other.hh);
}

bool timeStamp::operator!=(const timeStamp& other) const{
    return !(ss == other.ss && mm == other.mm && hh == other.hh);
}

bool timeStamp::operator>(const timeStamp& other) const{

    if(hh > other.hh) return true;
    else if (hh == other.hh){
        if(mm > other.mm) return true;
        else if(mm == other.mm){
            if(ss > other.ss) return true;
        }
    }

    return false;
}
bool timeStamp::operator<(const timeStamp& other) const{
    if(hh < other.hh) return true;
    else if (hh == other.hh){
        if(mm < other.mm) return true;
        else if(mm == other.mm){
            if(ss < other.ss) return true;
        }
    }

    return false;
}

void timeStamp::print(){

    if(ss > 9) cout << ss << ":";
    else cout << "0" << ss << ":";

    if(mm > 9) cout << mm << ":";
    else cout << "0" << mm << ":";

    if(hh > 9) cout << hh << endl;
    else cout << "0" << hh << endl;
}

int main()
{
    //supporting variable
    int i, ss, mm, hh;
    timeStamp item;

    //list of object
    SortedType<timeStamp> timeList;

    //taking 5 input
    cout << "Enter 5 Time Records(ss <> mm <> hh):\n";
    for(i = 0; i < 5; i++){
        cin >> ss;
        cin >> mm;
        cin >> hh;
        item = timeStamp(ss, mm, hh);
        timeList.InsertItem(item);
    }

    //deleting records
    cout << "\nEnter Time to delete(ss <> mm <> hh): ";
    cin >> ss;
    cin >> mm;
    cin >> hh;
    item = timeStamp(ss, mm, hh);
    timeList.DeleteItem(item);

    //printing the list
    cout << "\nAll Time Records:\n";
    for(i = 0, timeList.ResetList(); i < timeList.LengthIs(); i++){
        timeList.GetNextItem(item);
        item.print();
    }
    cout << endl;

    return 0;
}
