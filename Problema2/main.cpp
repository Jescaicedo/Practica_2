#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int createarray(int *);
int randoml();
int imarray(int *);
int vecesL(int *, int);

int main()
{
    int array[200];
    createarray(array);
    imarray(array);
    for(int i=65; i<=90 ;i++){
        vecesL(array,i);
    }

}

int randoml()
{
    int a=64, b=90;
    static int seed = time(0);
    srand(seed);
    int c=a+rand()%(b-a)+1;
    seed=rand();
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

int vecesL(int *p, int L)
{
    int cont=0;
    char Aux=L;
    cout<<Aux<<": ";
    for (int i=0; i<200; i++){
        if (*(p+i)==L){
            cont+=1;
        }
    }
    cout<<cont<<endl;


}





