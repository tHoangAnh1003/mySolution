#include <bits/stdc++.h>
using namespace std;

// Nganh
string nganh[] = {"", "Tin hoc", "Co khi", "Dien tu"};

// Khu vuc
double kv[] = {0, 1, 0.25, 0};

// Doi tuong
double dt[] = {0, 1, 0.5, 0};


void nhap_ds(float danhsach[][100], int row, int col) {
	ifstream in("danhsach.txt");
	
	if (in.is_open()) {
	
		for (int i = 0; i < row; ++i) {
			for (int j = 0; j < col; ++j) {
				in >> danhsach[i][j];
			}
		}
		
		in.close();
	}
}

void xuat_ds(float danhsach[][100], int row, int col) {
	int line = 0;
	for (int i = 0; i < row; ++i) {
	    cout << "TS ";
		for (int j = 0; j < col; ++j) {
			cout << danhsach[i][j] << ' ';
		}
		cout << endl;
		line += 1;
		if (line % 10 == 0) {
			cout << "Nhap Enter de xuat tiep\n";
			cin.ignore();
		}
	}
}

void xem_ts(float danhsach[][100], int row, int mats) {
	for (int i = 0; i < row; ++i) {
		if (i + 1 == mats) {
			cout << "Ma ts   Nganh        Mon1   Mon2   Mon3   KV      Dtg\n";
			cout << mats << "       ";
			cout << nganh[int(danhsach[i][1])] << "      ";
			cout << danhsach[i][2] << "      " << danhsach[i][3] << "      " << danhsach[i][4];
			cout << "      ";
			cout << kv[int(danhsach[i][5])] << "       " << dt[int(danhsach[i][6])] << "\n";
		}
	}
}

void thongke(float ds[][100], int row) {
    int tk[3][8];
    for (int i = 0; i < row; ++i) {
        // ma nganh: cot1
        // So luong: cot2
        // KV1, KV2, KV3: 3 4 5 
        // DT1, DT2, DT3: 6 7 8 
        if (danhsach[i][1] == 1) {
            
        }
        
    }
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << tk[i][j] << ' ';
        }
        cout << '\n';
    }
}

void menu(float danhsach[][100], int row, int col) {
	int n;
	
	cout << "1. Xuat danh sach\n";
	cout << "2. Xuat danh sach 1 thi sinh\n";
	cout << "3. Xuat thong ke\n";
	cout << "4. Xuat ket qua\n";
	cout << "5. Nhap 5 de thoat\n";
	
	do {
	    cout << "Nhap cac so tu 1 - 5: ";
		cin >> n;
		
		switch (n) {
		    case 1: {
		        xuat_ds(danhsach, row, col);
		        break;
		    }
		    case 2: {
		        cout << "Nhap ma thi sinh: ";
		        int mats; cin >> mats;
		        xem_ts(danhsach, row, mats);
		        break;
		    }
		    case 3: {
		        thongke(danhsach, row);
		        break;
		    }
		    case 4: {
		        break;
		    }
		    case 5: {
			    cout << "Thoat chuong trinh\n";
		        break;
		    }
		    default: {
			    cout << "Loi nhap so. Vui long nhap lai.\n";
		    }
		}
	} while (n != 5);
}

int main() {
    float danhsach[100][100];
    int row = 3, col = 7;
    nhap_ds(danhsach, row, col);
    menu(danhsach, row, col);
    return 0;
}
