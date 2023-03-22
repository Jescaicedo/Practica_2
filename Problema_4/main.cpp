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
