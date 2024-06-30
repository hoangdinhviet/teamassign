#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    string gender;
    int d, m, y;
    string country;
    int mhs;
public:
    // Constructor with parameters
    Student(string _name = "", string _gender = "", int _d = 0, int _m = 0, int _y = 0, string _country = "", int _mhs = 0)
        : name(_name), gender(_gender), d(_d), m(_m), y(_y), country(_country), mhs(_mhs) {}

    string getname() { return name; } void setname(string _name){name = _name;}
    string getgender() { return gender; } void setgender(string _gender){gender = _gender;}
    int getd() { return d; } void setd(int _d){d = _d;}
    int getm() { return m; } void setm(int _m){m = _m;}
    int gety() { return y; } void sety(int _y){y = _y;}
    int getid() {return mhs;} void detid(int _mhs){mhs = _mhs;}
    string getcountry() {return country;} void setcountry(string _country){country = _country;} 
    
   

    void title() {
        cout << left << setw(20) << "Ma hoc sinh" << setw(20) << "Ten hoc sinh" << setw(20) << "Gioi tinh"
             << setw(20) << "Ngay sinh" << "Que quan" << endl;
        cout << "---------------------------------------------------------------------------------------------" << endl;
    }

    void enter() {
        cout << "Nhap ten hoc sinh moi: ";
        cin.ignore();
        getline(cin, name);
        cout << "\nNhap gioi tinh: ";
        
        getline(cin, gender);
        cout << "\nNhap ngay sinh: " << "\n\tNgay: ";
        cin >> d;
        cout << "\tThang: ";
        cin >> m;
        cout << "\tNam: ";
        cin >> y;
        cout << "\nNhap que quan: ";
        cin.ignore();
        getline(cin, country);
        cout << "\nNhap ma hoc sinh: ";
        cin >> mhs;
    }

    // Hien thi thong tin hoc sinh
    void display() {
        cout << left << setw(20) << mhs << setw(20) << name << setw(20) << gender << setw(1) <<
            d << setw(1) << "/" << m << setw(1) << "/" << setw(15) << y << country << endl;
    }

    void displayOne() {
        cout << left << setw(20) << "Ma hoc sinh" << setw(20) << "Ten hoc sinh" << setw(20) << "Gioi tinh"
        << setw(20) << "Ngay sinh" << "Que quan" << endl;
        cout << "---------------------------------------------------------------------------------------------" << endl;
        cout << left << setw(20) << mhs << setw(20) << name << setw(20) << gender << setw(1) <<
        d << setw(1) << "/" << m << setw(1) << "/" << setw(15) << y << country << endl;
    }
    
};

void change(Student s[], int n) {
    int j;
    int id;
    string name;
    cout << "\nNhap ten hoac ma hoc sinh: " << endl;
    cout << "1.Ten              " << "2.Ma hoc sinh" << endl;
    cin >> j;
    if(j==1){
        cout << "Nhap ten hoc sinh: ";
        cin.ignore();
        getline(cin, name);
    } 
    else if(j==2){
        cout << "Nhap ma hoc sinh";
        cin >> id;
    }
    for(int i=0; i<n ; i++){
    if (id == s[i].getid() || name == s[i].getname()) {
        int k;
        while(k!=5){
        
        cout << "\nBan muon thay doi thong tin nao: " << endl;
        cout << "1. Ten hoc sinh.        2. Gioi tinh." << endl;
        cout << "3. Ngay sinh.           4. Que quan." << endl;
        cout << "5.Thoat." << endl;
        cout << "Nhap lua chon: ";
        cin >> k;
        cin.ignore();

        switch (k) {
            case 1: {
                cout << "Nhap ten hoc sinh: ";
                string newName;
                getline(cin, newName);
                s[i].setname(newName);
                break;
            }
            case 2: {
                cout << "Nhap gioi tinh: ";
                string newGender;
                getline(cin, newGender);
                s[i].setgender(newGender);
                break;
            }
            case 3: {
                cout << "Nhap ngay sinh: " << "\n\tNgay: ";
                int newDay, newMonth, newYear;
                cin >> newDay;
                s[i].setd(newDay);
                cout << "\tThang: ";
                cin >> newMonth;
                s[i].setm(newMonth);
                cout << "\tNam: ";
                cin >> newYear;
                s[i].sety(newYear);
                break;
            }
            case 4: {
                cout << "Nhap que quan: ";
                string newCountry;
                cin.ignore();
                getline(cin, newCountry);
                s[i].setcountry(newCountry);
                break;
            }
            default:
                cout << "Ki tu khong chinh xac." << endl;
                break;
        }
        cout << "Thong tin sau khi da doi: " << endl;
        s[i].display();
        }
        }
    }
}
void displayAll(Student s[], int n){
    cout << left << setw(20) << "Ma hoc sinh" << setw(20) << "Ten hoc sinh" << setw(20) << "Gioi tinh"
             << setw(20) << "Ngay sinh" << "Que quan" << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
    for(int i=0; i<n; i++){
        s[i].display();
    }
}
void search(Student s[], int n) {
    int id;
    string name;
    int j;
    cout << "\nNhap ten hoac ma hoc sinh: " << endl;
    cout << "1.Ten              " << "2.Ma hoc sinh" << endl;
    cin >> j;
    if(j==1){
        cout << "Nhap ten hoc sinh: ";
        cin.ignore();
        getline(cin, name);
    } 
    else if(j==2){
        cout << "Nhap ma hoc sinh";
        cin >> id;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].getid() == id || s[i].getname() == name) {
            s[i].display();
            count++;
        }
    }
    if (count == 0) cout << "Thong tin ban nhap khong ton tai.";
}