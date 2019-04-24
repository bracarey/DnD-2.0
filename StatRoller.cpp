#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

using namespace std;

int modifier (double a) { //Figures out the ability score modifier
    return floor ((a - 10) / 2);
}

int diceRoll (){
    int psize = 4;
    int i, j, temp;
    int dice[4];
    int sum;
    for (int die = 0; die <= psize; die++){
            dice[die] = ((rand () % 6) + 1);
    }
    for (i = 0; i < psize; i++)
    {
        for (j = i + 1; j < psize; j++)
        {
            if (dice[j] < dice[i])
            {
                temp = dice[i];
                dice[i] = dice[j];
                dice[j] = temp;
            }
        }
    }
    sum = dice[1] + dice[2] + dice[3];
    return sum;
}
int d12 (int con){
    int Health = 12 + modifier(con);	//((rand() % 12) + 1) + mod; Left in for the future expansion of this project.
    return Health;
}

int d10 (int con){
    int Health = 10 + modifier(con);	//((rand() % 10) + 1) + mod; Left in for the future expansion of this project.
    return Health;
}

int d8 (int con){
    int Health = 8 + modifier(con);		//((rand() % 8) + 1) + mod; Left in for the future expansion of this project.
    return Health;
    }

int d6 (int con){
    int Health = 6 + modifier(con);		//((rand() % 6) + 1) + mod; Left in for the future expansion of this project.
    return Health;
    }
