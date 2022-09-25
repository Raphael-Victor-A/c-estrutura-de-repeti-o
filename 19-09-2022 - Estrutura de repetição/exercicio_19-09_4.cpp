#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;

int main ()
{

int resultado, n1 = 1, k = 1;

    while (n1!=0){

        cout<<"digite um numero :";
        cin>>n1;

            if (n1!=0){

                    resultado= n1*k;
                    k=resultado;

            }else{
                cout<<"o resultado e "<<resultado;

            }

}
return 0;
}


