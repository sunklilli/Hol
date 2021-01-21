#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
srand(time(0));
int rando;
int test;
int range;
cout << "welcome to higher or lower" << endl << "please input your desired range" << endl;
cin >> range;
rando = rand()%range; 
cout << "please pick a number in the range of 0 - " << range << endl;
while (test != rando){
cin >> test;
if (test < rando)
cout << "higher" << endl;
else if (test > rando) 
cout << "lower" << endl;
}
cout << "congrats" << endl;
}

