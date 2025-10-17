//9. Perform matrix addition using operator overloading
//



#include <iostream>
using namespace std;

class Matrix {
    int Arr[3][3];

public:
    
    Matrix() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                Arr[i][j] = 0;
    }

    void input() {

        cout << "Enter elements : \n"<<endl;
        for (int i = 0; i < 3; i++)
         for (int j = 0; j < 3; j++){
         
        cin >> Arr[i][j];
	 }
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << Arr[i][j] << " "<<endl;
          
        }
    }

    Matrix operator+( Matrix& M) {
        Matrix mat;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                mat.Arr[i][j] = Arr[i][j] + M.Arr[i][j];
        return mat;
    }
};

int main() {
    Matrix m1, m2, sum;

    m1.input();
    m2.input();

    sum = m1 + m2;

    cout << "Sum of matrices:\n";
    sum.display();

    
}

