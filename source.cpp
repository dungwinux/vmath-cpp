#include "source.h"

int main(int argc, char* argv[]){
	cout << ProgramName << " " << VersionInfo << " (Build " << Build << ")" << endl << Copyright << endl;
	for (int i = 0; i < argc; i++){
		cout << argv[i] << endl;
	}
}