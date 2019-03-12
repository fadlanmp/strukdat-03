/*
Nama program			: exercise 
Nama					: Fadlan Mulya Priatna
NPM						: 140810180041
Tanggal pembuatan		: 12 Maret 2019
Deskripsi progrram		: koding berisi exercise-01
*/

#include <iostream>		//library
#include <math.h>
using namespace std;

typedef struct{
	float panjang;
	float lebar;
}segiempat;

void input(segiempat *sg){
	cout<<"panjang segiempat : ";cin>>sg->panjang;
	cout<<"lebar segiempat : ";cin>>sg->lebar;
}
float keliling(segiempat sg){
	return 2*(sg.panjang+sg.lebar);
}
float luas(segiempat sg){
	return sg.panjang*sg.lebar;
}
float diagonal(segiempat sg){		//panjang diagonal segiempat
	return sqrt((sg.panjang*sg.panjang)+(sg.lebar*sg.lebar));
}
void print (segiempat sg){
	cout<<"keliling : "<<keliling(sg)<<endl;
	cout<<"luas : "<<luas(sg)<<endl;
	cout<<"diagonal : "<<diagonal(sg)<<endl;
}
int main(){
	segiempat* sg;
	sg = new segiempat;
	input(sg);
	print(*sg);
}
