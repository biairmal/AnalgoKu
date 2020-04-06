/*
Nama	: Bandana Irmal Abdillah
NPM		: 140810180025
Tugas 6 - No 1
*/

#include<iostream>
using namespace std;

int main(){
	int matrix[8][8] = {
	{0,1,1,0,0,0,0,0},
	{1,0,1,1,1,0,0,0},
	{1,1,0,0,1,0,1,1},
	{0,1,0,1,1,0,0,0},
	{0,1,1,1,0,1,0,0},
	{0,0,0,0,1,0,0,0},
	{0,0,1,0,0,0,0,1},
	{0,0,1,0,0,0,1,0}
	};
	for(int i = 0; i < 8; i++){
		for(int j = 0; j<8;j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
