/*
Nama	: Bandana Irmal Abdillah
NPM		: 140810180025
Tugas 6 - No 3
*/

#include<iostream>
using namespace std;

int main(){
	int vertexSize = 8;
	int adjacency[8][8] = {
		{0,1,1,0,0,0,0,0},
		{1,0,1,1,1,0,0,0},
		{1,1,0,0,1,0,1,1},
		{0,1,0,0,1,0,0,0},
		{0,1,1,1,0,1,0,0},
		{0,0,0,0,1,0,0,0},
		{0,0,1,0,0,0,0,1},
		{0,0,1,0,0,0,1,0}
	};
	bool discovered[vertexSize];
	for(int i = 0; i < vertexSize; i++){
		discovered[i] = false;
	}
	int output[vertexSize];

	//inisialisasi start
	discovered[0] = true;
	output[0] = 1;

	int counter = 1;
	for(int i = 0; i < vertexSize; i++){
		for(int j = 0; j < vertexSize; j++){
			if((adjacency[i][j] == 1)&&(discovered[j] == false)){
				output[counter] = j+1;
				discovered[j] = true;
				counter++;
			}
		}
	}
	cout<<"Breadth First Search : "<<endl;
	for(int i = 0; i < vertexSize; i++){
		cout<<output[i]<<" ";
	}
}
