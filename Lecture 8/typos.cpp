// Program Typos prints three integer numbers, sums the numbers, calculates
// the average, and prints the sum and the average of the three numbers.

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int ONE = 5;
const int TWO = 6;
const int THREE = 7;

int main ()
{
    ofstream outData;
    int sum;
    float average;
    outData.open("average.out");
    cout  << fixed  << showpoint;

    cout  << setw(5)  << ONE  << TWO  << THREE  << endl;
    sum = ONE + TWO + THREE;
    average = sum / 3;
    outData  << " The sum is "  << sum  << " and the average is "
	  << average  << endl;
	outData.close();

	cin.get();
    return 0;
}
