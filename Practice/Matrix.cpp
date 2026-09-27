#include <iostream>
using namespace std;

class matrix{
    int matrix[2][2];

public:
    void getdata(){
        cout<<"Enter 4 elements :"<<endl;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                cin>>matrix[i][j];
            }
        }
    }
    matrix operator + (matrix s){
        matrix result;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                result.matrix[i][j] = matrix[i][j] + s.matrix[i][j];
            }
        }
        return result;
    }
    matrix operator * (matrix s){
        matrix tmp;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                tmp.matrix[i][j]=0;

                for(int k=0; k<2; k++){
                    tmp.matrix[i][j] = tmp.matrix[i][j] + matrix[i][j] * s.matrix[k][j];
                }
            }
        }
        return tmp;
    }
    void display(){
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                cout<<matrix[i][j];
            }
            cout<<endl;
        }
    }
};
int main(){
    matrix m1,m2,add,mul;
    cout<<"Enter Matrix 1:"<<endl;
    m1.getdata();

    cout<<"Enter Matrix 2:"<<endl;
    m2.getdata();

    add = m1 + m2;
    mul = m1 * m2;

    cout<<"Addition of matrix :"<<endl;
    add.display();

    cout<<"Multiplication of matrix :"<<endl;
    mul.display();

return 0;
}
