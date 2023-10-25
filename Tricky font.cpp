#include<iostream>
#include <string>
#include <sstream>


using namespace std;



int main()
{
	setlocale(LC_ALL, "ru");
	int N;
	std::cout << "������� ����� ����������" << endl;
	cin >> N;
	string Data;

	string Surname;
	string Name;
	string SecondName;
	string Date;
	string Month;

	string Final;
	
	/* ����������� �������� ������ �� ��������� � �������� = Suname, ������ = Name, ��������� = SecondName,
	   ���� �������� = Date, � ������� ��������. */

	for (int i = 0; i < N; i++)
	{
		cin >> Data;

		string delimiter = ",";
		int FirstErase = 0;
		int LastErase;
		for (int i = 0; i < 7; i++)
		{
			LastErase = Data.find(delimiter);
			string e = Data.substr(FirstErase, LastErase);
			Data.erase(FirstErase, LastErase + 1);

			switch (i)
			{
			case 0:
			{
				Surname = e;
				break;
			}
			case 1:
			{
				Name = e;
				break;
			}
			case 2:
			{
				SecondName = e;
				break;
			}
			case 3:
			{
				Date = e;
				break;
			}
			case 4:
			{
				Month = e;
				break;
			}
			}
		}

		// ���������� ���������� ���� � ���.

		/* ���������� ������ ���, ��������� � char, �������� ������������� ������� �� '!',
		   ������� ���������� '!', �������� �� ������ ������ ���������� '!', ��������
		   ���������� ���������� ��������. */

		string SumSNS;
		SumSNS = Surname + Name + SecondName;
		int SNSlength;
		SNSlength = SumSNS.length();

		char* SumSNSchar = const_cast<char*>(SumSNS.c_str());

		char SumSNSChange;
		for (int i = 0; i < SNSlength - 1; i++)
			for (int i = 0; i < SNSlength - 1; i++)
			{
				if (SumSNSchar[i] == SumSNSchar[i + 1])
				{
					SumSNSchar[i] = '!';
				}
				else
				{
					SumSNSChange = SumSNSchar[i];
					SumSNSchar[i] = SumSNSchar[i + 1];
					SumSNSchar[i + 1] = SumSNSChange;
				}
			}

		cout << "���������� ������� = ";

		for (int i = 0; i < SNSlength; i++)
		{
			std::cout << SumSNSchar[i];
		}
		std::cout << endl;

		int SameCount = 0;
		for (int i = 0; i < SNSlength; i++)
		{
			if (SumSNSchar[i] == '!')
			{
				SameCount = SameCount + 1;
			}
			else
			{
				continue;
			}
		}
		int SumSNSunique;
		SumSNSunique = SNSlength - SameCount;

		std::cout << "���������� ���������� �������� � ��� = " << SumSNSunique << endl;


		// ����� ���� � ��� � ������ * 64.

		/* ���������� ������ ��� � ������ ��������, �������� � char, ������� ������� char
		   � ������� switch ����������� �������� int, �������� '1' = 1,
		   � ���������� ��� �����, �������� �� 64 */

		string SumDateMonth;
		SumDateMonth = Date + Month;
		int SumDateMonthLength;
		SumDateMonthLength = SumDateMonth.length();
		char* SumDateMonthChar = const_cast<char*>(SumDateMonth.c_str());
		int* SumDateMonthInt = new int[SumDateMonthLength];

		for (int i = 0; i < SumDateMonthLength; i++)
		{
			switch (SumDateMonthChar[i])
			{
			case '0':
			{
				SumDateMonthInt[i] = 0;
				break;
			}
			case '1':
			{
				SumDateMonthInt[i] = 1;
				break;
			}
			case '2':
			{
				SumDateMonthInt[i] = 2;
				break;
			}
			case '3':
			{
				SumDateMonthInt[i] = 3;
				break;
			}
			case '4':
			{
				SumDateMonthInt[i] = 4;
				break;
			}
			case '5':
			{
				SumDateMonthInt[i] = 5;
				break;
			}
			case '6':
			{
				SumDateMonthInt[i] = 6;
				break;
			}
			case '7':
			{
				SumDateMonthInt[i] = 7;
				break;
			}
			case '8':
			{
				SumDateMonthInt[i] = 8;
				break;
			}
			case '9':
			{
				SumDateMonthInt[i] = 9;
				break;
			}
			}
		}

		int SumDateMonthResult = 0;

		for (int i = 0; i < SumDateMonthLength; i++)
		{
			SumDateMonthResult = SumDateMonthResult + SumDateMonthInt[i];
		}

		int SumDateMonthResult64;
		SumDateMonthResult64 = SumDateMonthResult * 64;

		std::cout << "����� ���� ��� � ������ = " << SumDateMonthResult << endl;
		std:cout << "����� ���� ��� � ������ * 64 = " << SumDateMonthResult64 << endl;


		//������ ����� ������� - ����� � �������� * 256
		/* ��������� ������ Surname � char, � ������� switch ���������� ����� � ��������,
		   �������� �� 256. */

		//string Surname;
		char* SurnameChar = const_cast<char*>(Surname.c_str());
		int SurnameInt[1];
		for (int i = 0; i < 1; i++)
		{
			switch (SurnameChar[i])
			{
			case 'A':
			{
				SurnameInt[0] = 1;
				break;
			}
			case 'B':
			{
				SurnameInt[0] = 2;
				break;
			}
			case 'C':
			{
				SurnameInt[0] = 3;
				break;
			}
			case 'D':
			{
				SurnameInt[0] = 4;
				break;
			}
			case 'E':
			{
				SurnameInt[0] = 5;
				break;
			}
			case 'F':
			{
				SurnameInt[0] = 6;
				break;
			}
			case 'G':
			{
				SurnameInt[0] = 7;
				break;
			}
			case 'H':
			{
				SurnameInt[0] = 8;
				break;
			}
			case 'I':
			{
				SurnameInt[0] = 9;
				break;
			}
			case 'J':
			{
				SurnameInt[0] = 10;
				break;
			}
			case 'K':
			{
				SurnameInt[0] = 11;
				break;
			}
			case 'L':
			{
				SurnameInt[0] = 12;
				break;
			}
			case 'M':
			{
				SurnameInt[0] = 13;
				break;
			}
			case 'N':
			{
				SurnameInt[0] = 14;
				break;
			}
			case 'O':
			{
				SurnameInt[0] = 15;
				break;
			}
			case 'P':
			{
				SurnameInt[0] = 16;
				break;
			}
			case 'Q':
			{
				SurnameInt[0] = 17;
				break;
			}
			case 'R':
			{
				SurnameInt[0] = 18;
				break;
			}
			case 'S':
			{
				SurnameInt[0] = 19;
				break;
			}
			case 'T':
			{
				SurnameInt[0] = 20;
				break;
			}
			case 'U':
			{
				SurnameInt[0] = 21;
				break;
			}
			case 'V':
			{
				SurnameInt[0] = 22;
				break;
			}
			case 'W':
			{
				SurnameInt[0] = 23;
				break;
			}
			case 'X':
			{
				SurnameInt[0] = 24;
				break;
			}
			case 'Y':
			{
				SurnameInt[0] = 25;
				break;
			}
			case 'Z':
			{
				SurnameInt[0] = 26;
				break;
			}

			}
		}

		int FirstNum;
		FirstNum = SurnameInt[0];
		int FirstNum256;
		FirstNum256 = FirstNum * 256;

		std::cout << "����� ������ ����� � �������� = " << FirstNum << endl;
		std::cout << "����� ������ ����� � �������� * 256 = " << FirstNum256 << endl;

		//����� ���� �����

		int SumAll;
		SumAll = SumSNSunique + SumDateMonthResult64 + FirstNum256;

		std::cout << "����� ���� ����� = " << SumAll << endl;

		//������� � 16-�������� �������

		string Num16;

		std::stringstream sstream;
		sstream << hex << SumAll;
		Num16 = sstream.str();

		std::cout << "����� � 16-������ ������� = " << Num16 << endl;

		//����� ��������� ��� �����

		string FinalResult;
		int Num16Length = Num16.length();

		FinalResult = Num16.substr(Num16Length - 3, Num16Length);

		// ��������� ����� � ������� �������.

		char* FinalResultUpperRegister = const_cast<char*>(FinalResult.c_str());
		for (int i = 0; i < 3; i++)
		{
			switch (FinalResultUpperRegister[i])
			{
			case 'a':
			{
				FinalResultUpperRegister[i] = 'A';
				break;
			}
			case 'b':
			{
				FinalResultUpperRegister[i] = 'B';
				break;
			}
			case 'c':
			{
				FinalResultUpperRegister[i] = 'C';
				break;
			}
			case 'd':
			{
				FinalResultUpperRegister[i] = 'D';
				break;
			}
			case 'e':
			{
				FinalResultUpperRegister[i] = 'E';
				break;
			}
			case 'f':
			{
				FinalResultUpperRegister[i] = 'F';
				break;
			}
			}
		}

		string FinalResultUpperRegisterString;
		for (int i = 0; i < 3; i++)
		{
			FinalResultUpperRegisterString = FinalResultUpperRegisterString + FinalResultUpperRegister[i];
		}

		std::cout << "��������� = " << FinalResultUpperRegisterString << endl;

		// �������� ���������.
		string Probel = " ";
		
			Final = Final + Probel + FinalResultUpperRegisterString;
			
	}//������ for.
	

	Final.erase(0, 1);
	
	std::cout << Final << endl;
	
	return 0;
}