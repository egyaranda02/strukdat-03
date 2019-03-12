/* 
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
********************************/

#include<iostream>
#include<math.h>
using namespace std;

typedef struct{
	float panjang;
	float lebar;
} segiempat;

void input(segiempat* s)
{
	cout<<"Input Panjang	: ";cin>>s->panjang;
	cout<<"Input Lebar	: ";cin>>s->lebar;
}
float keliling(segiempat s)
{
	return(2*(s.lebar+s.panjang));
}
float luas(segiempat s)
{
	return(s.lebar*s.panjang);
}
float diagonal(segiempat s)
{
	return(sqrt(s.lebar*s.panjang));
}
void print(segiempat s)
{
	cout<<"Panjang		: "<<s.panjang<<endl;
	cout<<"Lebar		: "<<s.lebar<<endl;
	cout<<"Keliling	: "<<keliling(s)<<endl;
	cout<<"Luas		: "<<luas(s)<<endl;
	cout<<"Diagonal	: "<<diagonal(s)<<endl;
}

int main()
{
	segiempat* sg;
	sg = new segiempat;
	input(sg);
	print(*sg);
}
