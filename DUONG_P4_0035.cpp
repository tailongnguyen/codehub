#include <iostream>

using namespace std;

void process(int stones, int players){
	if(stones <= 0 || players <= 0){
		cout << "ERROR" << endl;
		return;
	}
	int order = 1;
	int temp;
	while(true){
		if(order == players+1) order = 1;
		cin >> temp;
		if (temp < 1 || temp > 3 || stones - temp < 0) continue;
		if(stones - temp > 0) {
			stones -= temp;
			order++;
		}
		else {
		//stones - temp = 0
			cout << "LOSER " << order << endl;
			return;
		}
	}
}

int main(int argc, char const *argv[])
{
	int stones, players;
	cin >> stones >> players;
	process(stones, players);
	return 0;
}