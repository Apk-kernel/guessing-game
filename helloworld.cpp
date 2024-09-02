#include <iostream>
#include <cmath>
#include <ctime>
int main(){
using namespace std;
int num;
int guess;
int tries;

srand(time(NULL));
num=(rand()%6)+1;
cout<<"*******     NUMBER GUESSING GAME     *******\n";

    do{
        cout<<"please enter a number between 1-6\n";
        cin>>guess;
        tries++;
        if(guess>num){cout<<"Too high!!\n";}
        else if(guess<num){cout<<"Too low\n";}
        else{cout<<"CORRECT! #TRIES: \n"<<tries<<'\n';}}
    while(guess!=num);


cout<<"Game end";
    return 0;
}