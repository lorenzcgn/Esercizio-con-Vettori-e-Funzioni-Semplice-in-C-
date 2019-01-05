#include <iostream>
#include <stdlib.h>
#include <stdio.h>


#define N 3

using namespace std;

void quesito1(int vet1[], int vet2[], int y)
{

    int p=0;

    for(int i=0; i<y; i++){
        if(vet1[i]==vet2[i]){
            p++;
        }
    }
    if(y==p){
        cout << "Quesito 1 soddisfatto" <<endl;
    }
    else{
        cout << "Quesito 1 non soddisfatto" <<endl;
    }

}


void ordinamento(int *array, int k)
 {
   int alto;
   for (alto = k - 1; alto > 0; alto-- )
     {
         for (int i=0; i<alto; i++)
         {
           if (array[i]>array[i+1])
           {
             int tmp = array[i];
             array[i] = array[i+1];
             array[i+1] = tmp;
           }
         }
     }


}

int quesito2 (int vet1[], int vet2[], int y) {

    int p=0;

    for(int i=0; i<y; i++){
        if(vet1[i]==vet2[i]){
            p++;
        }
    }
    if(y==p){
        cout << "Quesito 2 soddisfatto" <<endl;
    }
    else{
        cout << "Quesito 2 non soddisfatto" <<endl;
    }

}


int main()
{
    int vet1[N], vet2[N], x, i;
    bool risultato;

    do{
        cout << "Lunghezza vet: ";
        cin >> x;
    }while(x<0);

    for(i=0; i<x; i++){
        cout << "Elemento numero "<< i <<" ";
        do {
        cin >> vet1[i];
        }while(vet1[i]<0);
    }

    for(i=0; i<x; i++){
        cout << "Elemento numero "<< i <<" ";
        do {
        cin >> vet2[i];
        }while(vet2[i]<0);
    }

    quesito1(vet1, vet2, x);
    ordinamento(vet1, x);
    ordinamento(vet2, x);
    quesito2(vet1, vet2, x);

    return 0;
}
