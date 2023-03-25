#include <iostream>

using namespace std;
int** llenararre(int);
bool verifir(int**,int);
bool verifim(int**,int, int);

int main()
{
    int n=0;
    cout<<"Ingrese la cantidad de filas y columnas que tiene la matriz cuadrada: ";
    cin>>n;
    int** pointer=llenararre(n);

    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
        cout<<*(*(pointer+i)+j)<<" ";
        }
    cout<<endl;
    }


    int verfic=0;
    for(int i=0; i<n;i++){
        verfic+=*(*(pointer)+i);
    }
    bool repetido=verifir(pointer,n);
    bool esmagic=verifim(pointer,verfic,n);
    if (esmagic && repetido){
        cout<<"Es una matriz cuadrado magico"<<endl;
    }
    else{
        cout<<"No es una matriz cuadrado magico"<<endl;
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
        cout<<"Ingrese el numero para anadir a la matriz: ";
        cin>>num;
        *(*(p+i)+j)=num;
        }
    }
    return p;
}

bool verifim(int **p,int v, int n)
{
    int acum=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
        acum+=*(*(p+i)+j);
        }
        if (acum!=v){
            return false;
        }
        acum=0;
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            acum+=*(*(p+j)+i);
        }
        if (acum!=v){
            return false;
        }
        acum=0;
    }
    for(int i=0;i<n;i++){
        acum+=*(*(p+i)+i);
    }
    if (acum!=v){
        return false;
    }
        acum=0;

    for(int i=n-1;i>=0;i--){
        int j=0;
        acum+=*(*(p+i)+j);
        j+=1;
    }
    if (acum!=v){
        return false;
    }

    return true;

}

bool verifir(int **p,int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int num=*(*(p+i)+j);
            for(int x=0;x<n;x++){
                for(int y=0;y<n;y++){
                int num2=*(*(p+x)+y);
                if (num==num2 && i!=x && j!=y){
                    return false;

                }
                }
            }
        }
    }
    return true;
}

