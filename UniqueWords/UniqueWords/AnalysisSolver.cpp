#include "AnalysisSolver.h"
#include <iostream>

using namespace System;
using namespace System::Collections::Generic;

AnalysisSolver::AnalysisSolver()
{

	//this->text = Convert::ToString(textIn);

}
String^ AnalysisSolver::countUniqueWords(String^ text, bool onlyLetterParam, bool spaceParam) {


	///////////////������� ��������

	int symbVol = 0;
	
	array<Char>^ symbols = text->ToCharArray();

	//�������� �� ���� � ���� �������
	array<Char>^ signs = { ',', '-', '!', '?', '"', '.', '(', ')', ' '};

	//������� signs
	Dictionary<Char, int>^ signsDict = gcnew Dictionary<Char, int>();
	for each (Char ch in signs) {
		signsDict->Add(ch, 0);
	}

	//������ �����
	if (onlyLetterParam) {
		for each (Char symb in symbols)
		{
			//��������� ������� ������� � �������� ����� � ������� ����������� ������ 
			if (!signsDict->ContainsKey(symb))
			{
				symbVol++;
			}
		}
	}
	//������� ���������
	else if (!spaceParam) {
		for each (Char symb in symbols) {
			if (symb != ' ') {
				symbVol++;
			}
		}
	}
	//������� ��� �������
	else {
		symbVol = symbols->Length;
	}

	///////////////������� ���������� ����

	int volWords = 0;

	array<String^>^ words = text->Split();

	HashSet<String^>^ uniqueWords = gcnew HashSet<String^>();


	for each (String ^ word in words)
	{
		uniqueWords->Add(word->ToLower());
	}
	volWords = uniqueWords->Count;

	String^ result = Convert::ToString(volWords) + ";" + Convert::ToString(symbVol);

	return result;
}

