#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int garis()
{
cout<<"===========================\n";
}
class siswa
{
public:
char nis[20],nama[20];
float nilai;
};
int main()
{

siswa sekolah;
garis();
cout<<endl;
cout<<"\t Program Nilai siswa "<<endl;
cout<<"\t======================"<<endl;
cout<<"input nis =";
cin>>sekolah.nis;
cout<<"input nama siswa = ";
cin>>sekolah.nama;
cout<<"input nilai ahir =";
cin>>sekolah.nilai;

garis();
cout<<endl;
cout<<"\t======================"<<endl;
cout<<"nis ="<<sekolah.nama<<endl;
cout<<"nama siswa ="<<sekolah.nama<<endl;
cout<<"nilai ahir = "<<sekolah.nilai<<endl;
garis();
getch();
}