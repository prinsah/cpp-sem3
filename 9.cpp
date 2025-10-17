#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3];

public:
   
    void input() {
        cout << "Enter 3x3 matrix elements:\n";
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> mat[i][j];
    }

   
    void display() const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    
    Matrix operator+(const Matrix& m) {
        Matrix result;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
        return result;
    }
};

int main() {
    Matrix m1, m2, sum;

    cout << "Input first matrix:\n";
    m1.input();

    cout << "Input second matrix:\n";
    m2.input();

    sum = m1 + m2;

    cout << "Sum of matrices:\n";
    sum.display();

    return 0;
}
