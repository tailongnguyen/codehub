#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int awin = 0, bwin = 0;
		srand(time(NULL));
	while(awin < 2 && bwin < 2){
		int a = rand() % 3 +1;
		int b = rand() & 3 +1;
		cout << "Result generated of a: " << a << endl;
		cout << "Result generated of b: " << b << endl;
		if(a > b){
			awin++;
			cout << "Increment awin" << endl;
		}
		else if(b < a ){ 
			bwin++;
			cout << "Increment bwin" << endl;	
		}
		cout << "Update: " << awin << " "  << bwin << endl;
	}
	if(awin == 2) cout << "Stay!";
	else cout << "Leave!";	
	return 0;
}
