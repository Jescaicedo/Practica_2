#include <iostream>

using namespace std;
int imporigin(char *);
int impcambios(char *);

int main()
{
    char array[100];
    cout<<"Ingrese una cadena de caracteres: ";
    cin>>array;
    imporigin(array);
    impcambios(array);
}

int imporigin(char *p)
{
  cout<<"Original: ";
  char carac=0;
  int cont=0;
  carac=*(p+cont);
  while(carac!='\0'){
      cout<<carac;
      cont+=1;
      carac=*(p+cont);
  }
  cout<<endl;
}

int impcambios(char *p)
{
    cout<<"Texto: ";
    char carac=0;
    int cont=0, a=0, num=0;
    carac=*(p+cont);
    while(carac!='\0'){
        if (carac>47 && carac<58){
            carac-=48;
            a=carac;
            num=num*10+a;
        }
        else{
            cout<<carac;
        }
        cont+=1;
        carac=*(p+cont);
    }
    cout<<endl<<"Numeros: "<<num<<endl;

}

