#include <iostream>

using namespace std;
int cambiamin(char *);

int main()
{
    char array[100];
    cout<<"Ingrese una palabra para cambiar sus minusculas: ";
    cin>>array;
    cambiamin(array);
}

int cambiamin (char *p)
{
    char carac=0;
    int cont=0;
    carac=*(p+cont);
    while(carac!='\0'){
        if (carac>96 && carac<123){
            carac-=32;
        }
        cout<<carac;
        cont+=1;
        carac=*(p+cont);
    }
    cout<<endl;

}
