#include <iostream>

using namespace std;

int main (void)
{
	int iData, iNum, iSrc;
	int iArr[9999];
	
	cin >> iData >> iNum;

	for (int iTest = 0; iTest < iData; iTest++)
	{
		cin >> iSrc;
		iArr[iTest] = iSrc;
	}
	for (int iTest = 0; iTest < iData; iTest++)
	{
		if (iArr[iTest] < iNum)
			cout << iArr[iTest] << " ";
	}
}