//Create class MATRIX of size max.overload + and - operator for addition and subtration of the matrix.

#include<iostream>
using namespace std;

class Matrix{
    private:
        int a[3][3],i,j,ans;
    public:
        void getData();
        void disMatrix();
        friend Matrix operator+(Matrix m1,Matrix m2){
            Matrix m3;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    m3.a[i][j]=m1.a[i][j] + m2.a[i][j];
                }
            }
        }
};

void Matrix::getData(){
    cout<<"Enter a number \t";
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>a[i][j];
            // cout<<"  ";
        }
        cout<<endl;
    }    
}
void Matrix :: disMatrix(){
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}


int main(){
    Matrix m,m1,m2;

    m.getData();
    m2=m+m1;
    m2.disMatrix();
    return 0;
}