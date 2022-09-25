#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

float gi, gf;
int tmpTT, tmpHR, tmpMIN, tmpSEC;


int main(){

    cout<<"De o valor da massa inicial: \n";
    cin>>gi;

    gf = gi;
    tmpTT = 0;
    while (gf >= 0.5){
            gf = gf / 2;
            tmpTT = tmpTT + 50;

    }
        cout<<"massa inicial e: "<<gi<<"\n\n";
        cout<<"massa final e: "<<gf<<"\n\n";

        tmpSEC = tmpTT;
        tmpMIN = tmpTT / 60;
        tmpHR = tmpTT / 3600;

        cout<<"o tempo em horas e: "<<tmpHR<<"\n\n";
        cout<<"o tempo em minutos e: "<<tmpMIN<<"\n\n";
        cout<<"o tempo em segundos e: "<<tmpSEC<<"\n\n";









return 0;
}
