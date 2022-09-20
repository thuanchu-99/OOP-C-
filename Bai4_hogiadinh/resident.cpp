#include"resident.h"

resident::resident() {
}

resident::~resident() {
	for (int j = 0; j < road.size(); j++) {
		delete road[j];
	}
	road.clear();
}

void resident::add() {
	road.push_back(new family);
	road[road.size() - 1]->setfamily();
	cout << "------------------------------\n";
}


void resident::showresident() {
	cout << "DANH SACH HO GIA DINH TRONG KHU PHO:" << endl;
	for (int i = 0; i < road.size(); i++) {
		cout << "HO GIA DINH " << i + 1 << ":" << endl;
		road[i]->showfamily();
		cout << endl;
	}
	cout << "------------------------------\n";
}

