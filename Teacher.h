#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;

class giaovien {
    private:
        int magv;
        string cccd;
        string hoten, diachi, ngaysinh, lop;
        long long luongCB,phucap, thuclinh;
    public:
    giaovien(string _hoten = "", int _magv = 0, string _diachi = "", string _ngaysinh = "", string _lop = "", string _cccd = "", long long _luongCB = 0, long long _phucap = 0)
        : hoten(_hoten), magv(_magv), diachi(_diachi), ngaysinh(_ngaysinh), lop(_lop), cccd(_cccd), luongCB(_luongCB), phucap(_phucap) {
        thuclinh = luongCB + phucap;
    }

        void nhap() {
            cout << "\nNhap ma giao vien:"; cin >> magv; cin.ignore();
            cout << "\nNhap ho ten:"; getline(cin, hoten);
            cout << "\nNhap dia chi:"; getline(cin, diachi);
            cout << "\nNhap ngay sinh:"; getline(cin, ngaysinh);
            cout << "\nNhap can cuoc cong dan:"; cin >> cccd; cin.ignore();
            cout << "\nNhap lop:"; getline(cin, lop);
            cout << "\nNhap luong co ban:"; cin >> luongCB;
            cout << "\nNhap phu cap:"; cin >> phucap;
            thuclinh = luongCB + phucap;
        }
        void xuat() {
            cout << setw(10) << magv << setw(20) << hoten << setw(20) << ngaysinh << setw(20) << diachi << setw(10) << lop;
            cout << setw(20) << cccd << setw(20) << luongCB << setw(20) << phucap << setw(20) << thuclinh;
        }
        int get_magv() {
            return magv;
        }
        string get_cccd() {
            return cccd;
        }
        long long get_luongCB() {
            return luongCB;
        }
        long long get_phucap() {
            return phucap;
        }
        long long get_thuclinh() {
            return thuclinh;
        }
};

void xuatds(giaovien gv[], int n) {
    cout << left << setw(10) << "Ma gv" << setw(20) << "Ho Ten" << setw(20) << "Ngay sinh" << setw(20) << "Dia chi" << setw(10) << "Lop";
    cout << setw(20) << "CCCD" << setw(20) << "Luong co ban" << setw(20) << "Phu cap" << setw(20) << "Thuc linh";
    for (int i = 0; i < n; i++) {
        cout << "\n";
        gv[i].xuat();
    }
}

void timkiemmagv(giaovien gv[], int n) {
    int ma;
    int count = 0;
    cout << "nhap ma giao vien can tim:"; cin >> ma;
    for (int i = 0; i < n; i++) {
        if (gv[i].get_magv() == ma) {
            gv[i].xuat();
            count++;
        }
    }
    if (count == 0) cout << "khong tim thay gv can tim";
}

void timkiemcccd(giaovien gv[], int n) {
    string cccd;
    int count = 0;
    cout << "nhap can cuoc cong dan giao vien:"; cin >> cccd;
    for (int i = 0; i < n; i++) {
        if (gv[i].get_cccd() == cccd) {
            gv[i].xuat();
            count++;
        }
    }
    if (count == 0) cout << "khong tim thay gv can tim";
}

void sapxep(giaovien gv[], int n) {
    giaovien tg;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (gv[i].get_thuclinh() > gv[j].get_thuclinh()) {
                tg = gv[i];
                gv[i] = gv[j];
                gv[j] = tg;
            }
        }
    }
    cout << "giao vien sau khi sap xep la:" << endl;
    xuatds(gv, n);
}

void thuclinhmax(giaovien gv[], int n) {
    double max = gv[0].get_thuclinh();
    for (int i = 1; i < n; i++) {
        if (gv[i].get_thuclinh() > max) 
            max = gv[i].get_thuclinh();
    }
    cout << "Nhan vien co luong cao nhat:" << max;
}

void timphucap(giaovien gv[], int n) {
    cout << left << setw(10) << "Ma gv" << setw(20) << "Ho Ten" << setw(20) << "Ngay sinh" << setw(20) << "Dia chi" << setw(10) << "Lop";
    cout << setw(20) << "CCCD" << setw(20) << "Luong co ban" << setw(20) << "Phu cap" << setw(20) << "Thuc linh";
    for (int i = 0; i < n; i++) {
        if (gv[i].get_phucap() > 100000)
            gv[i].xuat();
    }
}

void tinhtongluong(giaovien gv[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += gv[i].get_thuclinh();
    }
    cout << "\nTong luong cua cac nhan vien trong danh sach:" << sum;
}
