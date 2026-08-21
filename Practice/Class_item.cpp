#include <iostream>
using namespace std;

class Item{
    int Item_code, Item_unit;
    float Item_price;
    string Item_name;

public:
    void getData();
    void DisplayData();
};
void Item :: getData(){
    cout<<"Enter Item code\n Item unit\n Item price\n Item name :\n"<<endl;
    cin>>Item_code>>Item_unit>>Item_price>>Item_name;
}
void Item :: DisplayData(){
    if(Item_price > 100 && Item_price < 200){
        cout<<"Item Details :"<<endl;
        cout<<Item_code<<"\n"<<Item_unit<<"\n"<<Item_price<<"\n"<<Item_name;
    }
}
int main(){
    int n;
    cout<<"Enter number of Items :"<<endl;
    cin>>n;

    Item obj[n];

    for(int i = 0; i < n; i++){
        obj[i].getData();
    }
    for(int i = 0; i < n; i++){
        obj[i].DisplayData();
    }
    return 0;
}
