#include <iostream>
using namespace std;

bool leapYear(int year){
	if(year%400 == 0 || (year%4 == 0 && year%10 != 0))
		return true;
	return false;
}

void process(int day, int month, int year){
	bool valid = true;
	if(day < 0 || day > 31 || month < 0 || month > 12 || year < 0){
		valid = false;
	}	
	else if(day == 31){
		switch(month){
			case 1: {day = 1; month++; break;}
			case 3: {day = 1; month++; break;}
			case 5: {day = 1; month++; break;}
			case 7: {day = 1; month++; break;}
			case 8: {day = 1; month++; break;}
			case 10: {day = 1; month++; break;}
			case 12: {day = 1; month = 1; year++; break;}
			default: {valid = false; break;}
		}
	}
	else if(day == 30){
		switch(month){
			case 2: {valid = false; break;}
			case 4: {day = 1; month++; break;}
			case 6: {day = 1; month++; break;}
			case 9: {day = 1; month++; break;}
			case 11: {day = 1; month++; break;}
			default: {day++; break;}
		}
	}
	else if(day == 29){
		switch(month){
			case 2:{
				if(!leapYear(year)){
					valid = false;
				}
				else{
					day = 1;
					month ++;
				}
				break;
			}
			default: {day++; break;}
		}
	}
	else if(day == 28){
		switch(month){
			case 2: {
				if(!leapYear(year)){
					day = 1;
					month++;
				}
				else{
					day++;
				}
				break;	
			}
		}
	}
	else day++;

	if(valid) cout << day << " " << month << " " << year << endl;
	else cout << "INVALID";
}

int main(int argc, char const *argv[])
{
	int day, month, year;
	cin >> day >> month >> year;
	process(day, month, year);
	return 0;
}
