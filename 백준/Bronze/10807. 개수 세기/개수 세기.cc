#include <iostream>

using namespace std;

int main (void)
{
	int iData,iSrc,iNum=0;
	int iArr[100];

	cin >> iData;

	for (int iTest = 0; iTest < iData; iTest++)
	{
		cin >> iSrc;

		iArr[iTest] = iSrc;
	}
	cin >> iSrc;
	for (int iTest = 0; iTest < iData; iTest++)
	{
		if (iArr[iTest] == iSrc)
		{
			iNum++;
		}
	}
	cout << iNum <<  endl;
}