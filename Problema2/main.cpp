#include <iostream>
#include <cstdlib>

using namespace std;
int createarray(int *);
int randoml();
int imarray(int *);

int main()
{
    int array[200];
    int *pointer=array;
    createarray(array);
    imarray(array);
}

int randoml()
{
    int a=65, b=90;
    int c=a+rand()%(b-a)+1;
    return c;
}

int createarray(int *p)
{
    char L=0;
    for (int i=0; i<200; i++){
        L=randoml();
        *p=L;
        p+=1;


    }
}

int imarray(int *p)
{
    char aux=0;
    for (int i=0; i<200; i++){
        aux=*(p+i);
        cout<<aux;
    }
    cout<<endl;
}







