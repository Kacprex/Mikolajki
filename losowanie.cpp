#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
using namespace std;

int main()
{
	srand ( time(NULL) );
	int p,i,licznik;
	const int N = 6;
	bool t;
	string tmp;
    string T[6] = {"Kacper","Ada","Kamila","Jarek","Danka","Michal"};
    int W[6] = {{0,0,0,0,0,0}};
   licznik = 0;
    do
    {
        p = rand() % 6;



       t = true;
        for(i = 0; i < licznik; i++)
            if(W[i] == p)
            {
                t = false;
                break;
            }



       if(t) W[licznik++] = p;

   } while(licznik < N);


	for (int x=0; x <6; x++)
	{
	ofstream outfile (T[x]+".txt");
	tmp = T[W[x]];
	outfile << tmp << endl;
	outfile.close();
	}
}
