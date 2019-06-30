
/*
//task1
#include <iostream>
using namespace std;
int main()
{
	const int FtToIn = 12;
	int Ft, In;
	cout << "Enter your height in In:______\b\b\b\b\b\b\a";
	int HeightIn;
	cin >> HeightIn;
	Ft = HeightIn / FtToIn;
	In = HeightIn % FtToIn;
	cout << "Your height is " << Ft << " ft and " << In << " In" << endl;
	return 0;
}
*/






/*
//task 2
#include <iostream>
using namespace std;
int main()
{
	const float FtToIn = 12;
	const float InToPound = 2.2;
	const float InToMeter = 0.0254;

	float HeightFt, HeightIn, WeightPound, BMI;
	cout << "Please input your height with Ft and In";
	cin >> HeightFt;
	cin >> HeightIn;
	cout << "Please input your Weight with Pounds";
	cin >> WeightPound;
	BMI = ((WeightPound / InToPound) / ((HeightFt * FtToIn + HeightIn) *InToMeter)) *((WeightPound / InToPound) / ((HeightFt * FtToIn + HeightIn) *InToMeter));
	cout << "Your BMI is " << BMI << endl;
	return 0;
}
*/







/*
//task 3
#include <iostream>
using namespace std;
int main()
{
	//cout.setf(ios_base::fixed, ios_base::floatfield);  //set output format
	const int DegreeToMin = 60;
	const int MinToSec = 60;
	float degrees, minutes, seconds;
	cout << "Enter a latitude in degrees, minutesm, and seconds: ";
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	float RetureValue = (seconds / MinToSec + minutes) / DegreeToMin + degrees;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << RetureValue << " degrees" << endl;
	return 0;
}
*/





/*
//task 4
#include <iostream>
using namespace std;
int main()
{
	const int DayToHour = 24;
	const int HourToMin = 60;
	const int MinToSec = 60;

	long InputSec;
	cout << "Enter the number of seconds: ";
	cin >> InputSec;
	
	int Day = InputSec / (DayToHour * MinToSec * HourToMin);
	int TotalHour = InputSec % (DayToHour * MinToSec * HourToMin);

	int Hour = TotalHour / (MinToSec * HourToMin);
	int TotalMin = TotalHour % (MinToSec * HourToMin);

	int Min = TotalMin / MinToSec;
	int Sec = TotalMin % MinToSec;

	cout << InputSec << " seconds = " << Day << " days, " << Min << " minutes, " << Sec << " seconds";
	return 0; 
}
*/




/*
//task 5
#include <iostream>
using namespace std;
int main()
{
	float YL, JL;
	cout << "Please input the YL of your car: ";
	cin >> YL;
	cout << "Please input the JL of your car: ";
	cin >> JL;
	cout << "the per JL of the YL is " << YL / JL << endl;
	return 0;
}
*/




/*
//task 6
#include <iostream>
using namespace std;
int main()
{
	const float GongliToYingli = 62.14;
	const float JiaLunToSheng = 3.875;

	float ShengPerGongli;
	cout << "Please input Sheng Per 100 Gongling in European";
	cin >> ShengPerGongli;

	float JiaLun = ShengPerGongli / JiaLunToSheng;
	float YingLi = 1 * GongliToYingli;

	float YingliPerJialun = YingLi / JiaLun;
	cout << "The Yingli Per Jialun in Aemrican is " << YingliPerJialun << endl;
	return 0;
}
*/