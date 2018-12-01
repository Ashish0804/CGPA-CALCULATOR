#include<string.h>
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<process.h>

using namespace std;

int Marks[13];
int Grades[13];
int Credits[13] = {4,3,3,3,3,1,2,1,1,2,2,1,1};

int Grade(int marks)
{
	system("cls");
	if (marks >= 90)
		return 10;
	else if (marks >=75)
		return 9;
	else if (marks >=65)
		return 8;
	else if (marks >=55)
		return 7;
	else if (marks >=50)
		return 6;
	else if (marks >=45)
		return 5;
	else if (marks >=40)
		return 4;
	else
		return 0;

}

void Mark(int A[])
{
	system("cls");
	cout<<"!!!ALL MARKS SHOULD BE OUT OF 100!!!"<<endl;
	cout<<endl<<"APPLIED MATHS-1 (4): "; cin>>Marks[0];
	cout<<endl<<"APPLIED PHYSICS-1 (3): "; cin>>Marks[1];
	cout<<endl<<"APPLIED CHEMISTRY (3): "; cin>>Marks[2];
	cout<<endl<<"MANUFACTURING PROCESSES (3): "; cin>>Marks[3];
	cout<<endl<<"ELECTRICAL TECHNOLOGY (3): "; cin>>Marks[4];
	cout<<endl<<"HVPE (1): "; cin>>Marks[5];
	cout<<endl<<"FOC (2): "; cin>>Marks[6];
	cout<<endl<<"PHYSICS LAB-1 (1): "; cin>>Marks[7];
	cout<<endl<<"ELECTRICAL TECHNOLOGY LAB (1): "; cin>>Marks[8];
	cout<<endl<<"WORKSHOP (2): "; cin>>Marks[9];
	cout<<endl<<"ENGINEERING GRAPHICS LAB (2): "; cin>>Marks[10];
	cout<<endl<<"FOC LAB (1): "; cin>>Marks[11];
	cout<<endl<<"APPLIED CHEMISTRY LAB-1 (1): "; cin>>Marks[12];

}

bool Confirm()
{
	system("cls");
	char ch='n';


			cout<<endl<<"APPLIED MATHS-1 (4): "<<Marks[0];
			cout<<endl<<"APPLIED PHYSICS-1 (3): "<<Marks[1];
			cout<<endl<<"APPLIED CHEMISTRY (3): "<<Marks[2];
			cout<<endl<<"MANUFACTURING PROCESSES (3): "<<Marks[3];
			cout<<endl<<"ELECTRICAL TECHNOLOGY (3): "<<Marks[4];
			cout<<endl<<"HVPE (1): "<<Marks[5];
			cout<<endl<<"FOC (2): "<<Marks[6];
			cout<<endl<<"PHYSICS LAB-1 (1): "<<Marks[7];
			cout<<endl<<"ELECTRICAL TECHNOLOGY LAB (1): "<<Marks[8];
			cout<<endl<<"WORKSHOP (2): "<<Marks[9];
			cout<<endl<<"ENGINEERING GRAPHICS LAB (2): "<<Marks[10];
			cout<<endl<<"FOC LAB (1): "<<Marks[11];
			cout<<endl<<"APPLIED CHEMISTRY LAB-1 (1): "<<Marks[12];


	cout<<endl<<endl<<"!!!PRESS y TO CONFIRM YOUR MARKS!!!";
	cout<<endl<<"!!!PRESS n TO RE-ENTER YOUR MARKS!!!"<<endl;
	cin>>ch;
	if (ch=='y'||ch=='Y')
		return true;
	else
		return false;

}

float CGPA(int G[],int C[])
{
	system("cls");
	float temp;
	float den=0.0;
	float num=0.0;
	for (int w=0;w<13;w++)
	{
		den += Credits[w];
		num += (Credits[w] * Grades[w]);
	}
	temp = float(num/den);
	return temp;
}

int main()
{
	system("cls");

	float Cgpa;
	cout<<"                                 WELCOME TO CGPA CALCULATOR";
	cout<<endl<<"                                 CODED BY ASHISH";
	cout<<endl<<"                                 Github at Ashish0804"<<endl<<endl<<endl<<endl;
	cout<<endl<<"FOR MORE INFORMATION AND REPORTING ANY ERRORS VISIT: https://github.com/Ashish0804/CGPA-CALCULATOR"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	system("pause");
    Mark(Marks);
	bool go;
	go = Confirm();
	if (!go) Mark(Marks);
	else
	{
		for(int j=0;j<13;j++)
			Grades[j]=Grade(Marks[j]);

		Cgpa = CGPA(Grades,Credits);
	}
	cout<<endl<<endl<<"CGPA: "<<Cgpa;
	cout<<endl<<"PERCENTAGE: "<<Cgpa*10;

	return 0;
}
