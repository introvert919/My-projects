#include<iostream>
#include<string>
#include<thread>
#include<chrono>
#include <windows.h>

#include <stdio.h>
#include <conio.h>
#include <mmsystem.h>
#pragma comment (lib , "winmm.lib")

#include "Data.h"

using namespace std;

/* ��������� ������� �� ����� ����� ��� ��������������, ������� ������������
   ������ � ����������, � ���� ������� ����, ������������ �� ������� '*'.
   ���������� �������� �� ����������.*/


int main()
{
	//���� � ����� �������� �� ������� �����

	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//����������
	string a; 
	int StrLength; // ������ ������.
	int string_iter_count; // ���������� �������� ��� ���������� ������ �� ���������.
	int cout_iter_count; // ���������� �������� ��� ������ �������� � �������� '*'.
	int n = 0; // ����� �������, ������� � �������� ������ ����������� �� ���������.
	
	int m = 0;

	// ���� ��������������

	cout << "������� ����� ��� �������������� (� ��������� �����)" << endl;
	getline(cin, a);
	std::cout << endl;
	
	StrLength=a.length ();
	
	
	//��������������� �����

	PlaySoundA((LPCSTR)"backsound", NULL, SND_RESOURCE | SND_ASYNC);
	this_thread::sleep_for(chrono::milliseconds(800));

	//������� ����, �� 10 ��������, ������� �������

	if (StrLength <= 10)
	{
		string_iter_count = 1;
		m = 20000 / 10;
	}
	else 
	{
		string_iter_count = (StrLength / 10)+1;
		m = (20000 / 10) / string_iter_count;
	}

	/* ������ ����������� �� ��������� �� 10 ��������,
	   ��������� ����������� � ������ char, ������� �������
	   ������������� 9 �������� � ��������� '*'. ���
	   ��������� �� ����� ������ for. */

	for (int i = 0; i < string_iter_count; i++)
	{
		string b = a.substr(n, 10);
		char* str = const_cast <char*> (b.c_str());
		cout_iter_count = b.length();
		n = n + 10;

	    //������ �����
        std::cout << Tab;
        for (int i = 0; i < cout_iter_count; i++)
    		{
			switch (str[i])
			{
			case ' ':
			{std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << A1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << B1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << V1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << G1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << D1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << E1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << EE1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << J1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << Z1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << I1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << II1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << K1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << L1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << M1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << N1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << O1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << P1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << R1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << S1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << T1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << U1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << F1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << H1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TS1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << CH1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SH1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SCH1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TZn1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << III1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << MZn1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIE1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIU1;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIA1;
			std::cout << Tab;
			break;
			}
			}
		}

		this_thread::sleep_for(chrono::milliseconds(m));

		//������ �����
		std::cout << endl;
		std::cout << Tab;
		for (int i = 0; i < cout_iter_count; i++)
		{
			switch (str[i])
			{
			case ' ':
			{std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << A2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << B2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << V2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << G2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << D2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << E2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << EE2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << J2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << Z2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << I2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << II2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << K2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << L2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << M2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << N2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << O2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << P2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << R2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << S2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << T2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << U2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << F2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << H2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TS2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << CH2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SH2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SCH2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TZn2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << III2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << MZn2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIE2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIU2;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIA2;
			std::cout << Tab;
			break;
			}
			}
		}

		this_thread::sleep_for(chrono::milliseconds(m));

		//������ �����
		std::cout << endl;
		std::cout << Tab;
		for (int i = 0; i < cout_iter_count; i++)
		{
			switch (str[i])
			{
			case ' ':
			{std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << A3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << B3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << V3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << G3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << D3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << E3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << EE3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << J3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << Z3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << I3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << II3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << K3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << L3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << M3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << N3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << O3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << P3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << R3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << S3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << T3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << U3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << F3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << H3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TS3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << CH3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SH3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SCH3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TZn3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << III3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << MZn3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIE3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIU3;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIA3;
			std::cout << Tab;
			break;
			}
			}
		}
		
		this_thread::sleep_for(chrono::milliseconds(m));

		//��������� �����
		std::cout << endl;
		std::cout << Tab;
		for (int i = 0; i < cout_iter_count; i++)
		{
			switch (str[i])
			{
			case ' ':
			{std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << A4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << B4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << V4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << G4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << D4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << E4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << EE4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << J4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << Z4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << I4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << II4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << K4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << L4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << M4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << N4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << O4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << P4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << R4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << S4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << T4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << U4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << F4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << H4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TS4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << CH4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SH4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SCH4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TZn4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << III4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << MZn4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIE4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIU4;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIA4;
			std::cout << Tab;
			break;
			}
			}
		}
		
		this_thread::sleep_for(chrono::milliseconds(m));

		//����� �����
		std::cout << endl;
		std::cout << Tab;
		for (int i = 0; i < cout_iter_count; i++)
		{
			switch (str[i])
			{
			case ' ':
			{std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << A5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << B5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << V5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << G5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << D5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << E5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << EE5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << J5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << Z5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << I5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << II5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << K5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << L5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << M5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << N5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << O5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << P5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << R5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << S5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << T5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << U5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << F5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << H5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TS5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << CH5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SH5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SCH5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TZn5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << III5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << MZn5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIE5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIU5;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIA5;
			std::cout << Tab;
			break;
			}
			}
		}

		this_thread::sleep_for(chrono::milliseconds(m));

		//������ �����
		std::cout << endl;
		std::cout << Tab;
		for (int i = 0; i < cout_iter_count; i++)
		{
			switch (str[i])
			{
			case ' ':
			{std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << A6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << B6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << V6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << G6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << D6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << E6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << EE6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << J6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << Z6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << I6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << II6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << K6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << L6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << M6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << N6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << O6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << P6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << R6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << S6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << T6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << U6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << F6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << H6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TS6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << CH6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SH6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SCH6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TZn6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << III6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << MZn6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIE6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIU6;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIA6;
			std::cout << Tab;
			break;
			}
			}
		}

		this_thread::sleep_for(chrono::milliseconds(m));

		//������� �����
		std::cout << endl;
		std::cout << Tab;
		for (int i = 0; i < cout_iter_count; i++)
		{
			switch (str[i])
			{
			case ' ':
			{std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << A7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << B7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << V7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << G7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << D7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << E7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << EE7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << J7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << Z7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << I7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << II7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << K7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << L7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << M7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << N7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << O7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << P7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << R7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << S7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << T7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << U7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << F7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << H7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TS7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << CH7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SH7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SCH7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TZn7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << III7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << MZn7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIE7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIU7;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIA7;
			std::cout << Tab;
			break;
			}
			}
		}

		this_thread::sleep_for(chrono::milliseconds(m));

		//������� �����
		std::cout << endl;
		std::cout << Tab;
		for (int i = 0; i < cout_iter_count; i++)
		{
			switch (str[i])
			{
			case ' ':
			{std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << A8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << B8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << V8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << G8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << D8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << E8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << EE8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << J8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << Z8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << I8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << II8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << K8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << L8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << M8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << N8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << O8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << P8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << R8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << S8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << T8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << U8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << F8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << H8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TS8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << CH8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SH8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SCH8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TZn8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << III8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << MZn8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIE8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIU8;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIA8;
			std::cout << Tab;
			break;
			}
			}
		}

		this_thread::sleep_for(chrono::milliseconds(m));

		//������� �����
		std::cout << endl;
		std::cout << Tab;
		for (int i = 0; i < cout_iter_count; i++)
		{
			switch (str[i])
			{
			case ' ':
			{std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << A9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << B9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << V9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << G9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << D9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << E9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << EE9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << J9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << Z9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << I9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << II9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << K9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << L9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << M9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << N9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << O9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << P9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << R9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << S9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << T9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << U9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << F9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << H9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TS9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << CH9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SH9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << SCH9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << TZn9;
			std::cout << Tab; break;
			}
			case '�':
			{std::cout << III9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << MZn9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIE9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIU9;
			std::cout << Tab;
			break;
			}
			case '�':
			{std::cout << IIA9;
			std::cout << Tab;
			break;
			}
			}
		}
		
		this_thread::sleep_for(chrono::milliseconds(m));
		std::cout << endl << endl << endl;
	}
    	this_thread::sleep_for(chrono::milliseconds(1600));
		std::cout << endl;
		system("pause");
		return 0;

		
}
	
