#include <iostream>
using namespace std;

//class test{
  //  int i;
    //test(){
      //  cin>>i;
    //}
//};
class test{
    int i;
    test(){
        i=0;
    }
public:
    test(int j){
        i=j;
        test();
    }
};
