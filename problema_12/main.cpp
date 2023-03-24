#include <iostream>

using namespace std;
int** llenararre(int);
bool verififilas(int**,int, int);

int main()
{
    int n=0;
    cout<<"Ingrese la cantidad de filas y columnas que tiene la matriz cuadrada: ";
    cin>>n;
    int** pointer=llenararre(n);

    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
        cout<<*(*(pointer+i)+j);
        }
    cout<<endl;
    }

    int verfic=0;
    for(int i=0; i<n;i++){
        verfic+=*(*(pointer)+i);
    }



    for(int i=0; i<n;i++){
        delete[] pointer[i];
    }
    delete[] pointer;
}

int** llenararre(int a)
{
    int **p=new int *[a];
    for (int i=0; i<a;i++) p[i]=new int[a];
    int num=0;
    for(int i=0; i<a;i++){
        for(int j=0; j<a;j++){
        cout<<"Ingrese el numero para añadir a la matriz: ";
        cin>>num;
        *(*(p+i)+j)=num;
        }
    }
    return p;
}

bool verififilas(int **p,int v, int n)
{
    int acum=0;
    for(int i=1;i<n;i++){
        for(int j=0;i<n;j++){
        acum+=*(*(p+i)+j);
        }
        if (acum!=v){
            return false;
        }
    }
    return true;
}
