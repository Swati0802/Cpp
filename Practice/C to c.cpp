#include <iostream>
using namespace std;

class s2;
class s1{
    int code, item;
    float price;

public:
    s1(int a, int b, float c){
        code = a;
        item = b;
        price = c;
    }
    void display(){
        cout<<"Code "<<code<<endl;
        cout<<"Item "<<item<<endl;
        cout<<"Price "<<price<<endl;
    }

    int getCode(){
        return code;
    }
    int getItem(){
        return item;
    }
    int getPrice(){
        return price;
    }

    operator float() {
        return item * price;
    }
};
class s2{
    int code;
    float val;

public:
    s2(){
        code = 0;
        val = 0;
    }
    s2(int x, float y){
        code = x;
        val = y;
    }
    void display(){
        cout<<"Code "<<code<<endl;
        cout<<"Value "<<val<<endl;
    }
    s2(s1 p){
        code = p.getCode();
        val = p.getItem() * p.getPrice();
    }
};

int main(){
    s1 i1(101,10,125.0);
    s2 i2;

    float tot_val = i1;

    i2 = i1;

    cout<<"Stock Details : Stock type"<<endl;
    i1.display();

    cout << endl;

    cout << "Total Value : " << tot_val << endl;

    cout << endl;

    cout << "Stock Details : Stock type 2" << endl;
    i2.display();

return 0;
}
