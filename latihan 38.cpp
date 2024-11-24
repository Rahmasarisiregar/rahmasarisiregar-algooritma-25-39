#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream file("data.txt");
	
	if(file.is_open()) {
		file<<"stmik penusa\n";
		file<<"belajar algoritma pemrograman";
	file.close();
	}else {
		cout<<"file tidak bisa dibuka";
		}
	return 0;

}
