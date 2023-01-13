#include <iostream>

using namespace std;

int main(void)
{
	int iData, iArr[999999], iSrc, iMin=0, iMax=0, iTempin=0, iTempax,iAvrg=0;

	cin >> iData;

	for (int iTest = 0; iTest < iData; iTest++)
	{
		cin >> iSrc;
		iArr[iTest] = iSrc;
		iAvrg += iArr[iTest];
	}

	iMin = iAvrg / iData;
	iMax = iAvrg / iData;


	for (int iTest = 0; iTest < iData-1; iTest++)
	{
		if (iArr[iTest] < iArr[iTest + 1])
		{
			iTempin = iArr[iTest];
			iTempax = iArr[iTest + 1];
		}
		else
		{
			iTempin = iArr[iTest + 1];
			iTempax = iArr[iTest];
		}

		if (iTempin < iMin)
		{
			iMin = iTempin;
		}
		if (iTempax > iMax)
		{
			iMax = iTempax;
		}
		
	}

	cout << iMin << " " << iMax;
}