#include<iostream>
#include<string>
#include<stdio.h>
#include<iomanip>
#include<vector>
#include "canbo.h"

using namespace std;

// CANBO definition
CANBO :: CANBO(){
	TUOI = 0;
	GIOITINH = DIACHI = HOTEN = "";
}

CANBO :: ~CANBO(){
}

void CANBO :: Print(){
	cout << "HO TEN: " << HOTEN << endl;
	cout << "TUOI: " << TUOI << endl;
	cout << "GIOI TINH: " << GIOITINH << endl;
	cout << "DIA CHI: " << DIACHI << endl;
}

void CANBO :: SetInfo(){
	cout << "NHAP THONG TIN" << endl;
	cout << "HO TEN: "; fflush(stdin); getline(cin, HOTEN);
	cout << "TUOI: "; cin >> TUOI;
	cout << "GIOI TINH: "; fflush(stdin); getline(cin, GIOITINH);
	cout << "DIA CHI: "; fflush(stdin); getline(cin, DIACHI);
}

// CONGNHAN definition
CONGNHAN::CONGNHAN():CANBO(){
	BAC = 0;
}

CONGNHAN :: ~CONGNHAN(){
}

void CONGNHAN::Print(){
	CANBO::Print();
	cout << "CAP BAC: " << BAC << endl;
}

void CONGNHAN :: SetInfo(){
	CANBO::SetInfo();
	cout << "\nCAP BAC:";
	cin >> BAC;
}

//KYSU definition
KYSU::KYSU():CANBO(){
	NGANH = "";
}

KYSU::~KYSU(){
}

void KYSU::SetInfo(){
	CANBO::SetInfo();
	cout << "NGANH: ";
	fflush(stdin);
	getline(cin, NGANH);
}

void KYSU::Print(){
	CANBO::Print();
	cout << "NGANH: " << NGANH << endl;
}

//NHANVIEN definition
NHANVIEN::NHANVIEN():CANBO(){
	CONGVIEC = "";
}

NHANVIEN::~NHANVIEN(){
}

void NHANVIEN::SetInfo(){
	CANBO::SetInfo();
	cout << "CONG VIEC: ";
	fflush(stdin);
	getline(cin, CONGVIEC);
}

void NHANVIEN::Print(){
	CANBO::Print();
	cout << "CONG VIEC: " << CONGVIEC << endl;
}

//QLCB definition
void QLCB::ADD(vector<CANBO*> &List){
	int choose;
	do{
		cout << "\nCHON LOAI CAN BO NHAP VAO:" << endl;
		cout << "1: CONG NHAN." << endl;
		cout << "2: KYSU." << endl;
		cout << "3: NHAN VIEN" << endl;
		cout << "4: THOAT KHOI INPUT." << endl;
		cout << "nhan chon: ";
		
		while(cin >> choose && choose != 1 && choose != 2 && choose != 3 && choose != 4){
			cout << "chi duoc khep chon 1 2 3 4" << endl;
			cout << "nhan chon: ";
		}
		
		switch(choose)
		{
			case 1:
				List.push_back(new CONGNHAN);
	        	List[List.size()-1]->SetInfo();
	        	break;
	        case 2:
	        	List.push_back(new KYSU);
	        	List[List.size()-1]->SetInfo();
	        	break;
        	case 3:
        		List.push_back(new NHANVIEN);
	        	List[List.size()-1]->SetInfo();
	        	break;
	        default:
	        	break;
		}
	}
	while(choose != 4);
}

void QLCB::SHOW(vector<CANBO*> List){
	cout << "DANH SACH CAN BO" << endl;
	for(int i=0;i<List.size();i++){
        cout<<" - ";
        List[i]->Print();
        cout<<endl;
    }
    cout<<"------------------------------\n";
}
bool QLCB::compare(string name, string word){
	for(char &x : name) x = tolower(x);
	for(char &x : word) x = tolower(x);
	return name.find(word) != string::npos;
}
void QLCB::FIND(vector<CANBO*> List){
	string ten;
	cout << "NHAP TEN CAN BO CAN TIM: ";
	fflush(stdin);
	getline(cin, ten);
	
	cout << "DANH SACH THONG TIN CAN BO TIM DUOC THEO TEN " << ten << " :" << endl ;

	for(int i=0;i<List.size();i++){
        List[i]->HOTEN;
        if(compare(List[i]->HOTEN, ten)){
				List[i]->Print();
			}
    }	
}




