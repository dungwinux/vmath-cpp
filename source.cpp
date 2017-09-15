#include "source.h"

int main(int argc, char* argv[]){
	cout << ProgramName << " " << VersionInfo << " (Build " << Build << ")" << endl << Copyright << endl;
	cout << endl;
	for (int i = 1; i < argc; i++){
		cout << argv[i] << endl;
	}
}