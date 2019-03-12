/*
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
***************************/
#include<iostream>
using namespace std;

struct r_mhs{
	int npm;
	string nama;
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n);
void inputMhs(larikMhs& mhs, int n);
void cetakMhs(larikMhs mhs, int n);
void sortNPM(larikMhs& mhs, int n);

int main()
{
	larikMhs mhs;
	int n;
	banyakData(n);
	inputMhs(mhs, n);
	sortNPM(mhs, n);
	cetakMhs(mhs, n);
}

void banyakData(int& n)
{
	cout<<"Masukkan Jumlah Data	: ";cin>>n;
}

void inputMhs(larikMhs& mhs, int n)
{
	system("cls");
	for(int i=0;i<n;i++)
	{
		cout<<"========"<<"Masukkan Input ke-"<<i+1<<"========"<<endl;
		cout<<"Masukkan NPM Mahasiswa	: ";cin>>mhs[i].npm;
		cout<<"Masukkan Nama Mahasiswa	: ";cin>>mhs[i].nama;
		cout<<"Masukkan IPK Mahasiswa	: ";cin>>mhs[i].ipk;
	}
}

void sortNPM(larikMhs& mhs, int n)
{
	for(int i=0;i<n;i++)
	{
		if(mhs[i].npm>mhs[i+1].npm)
		{
			swap(mhs[i],mhs[i+1]);
		}
	}
}

void cetakMhs(larikMhs mhs, int n)
{
	cout<<"======================================"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"NPM Mahasiswsa	: "<<mhs[i].npm<<endl;
		cout<<"Nama Mahasiswa	: "<<mhs[i].nama<<endl;
		cout<<"IPK Mahasiswa	: "<<mhs[i].ipk<<endl;
		cout<<"======================================"<<endl;
	}
}
