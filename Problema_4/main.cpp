#include <iostream>

using namespace std;
int leernumero(char *);

int main()
{
    char array[100];
    int N=0;
    cout<<"Ingrese un numero: ";
    cin>>array;
    N=leernumero(array);
    cout<<N<<endl;
}

int leernumero(char *p)
{
    char carac=0, aux=0;
    int a=0, cont=0, num=0;
    carac=*(p+cont);
    while (carac>47 && carac<58){
        aux=carac;
        aux-=48;
        a=aux;
        num=num*10+a;
        cont+=1;
        carac=*(p+cont);
    }
    return num;
}
