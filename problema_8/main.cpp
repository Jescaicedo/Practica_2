#include <iostream>

using namespace std;
int imporigin(char *);

int main()
{
    char array[100];
    cout<<"Ingrese una cadena de caracteres: ";
    cin>>array;
    imporigin(array);
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
