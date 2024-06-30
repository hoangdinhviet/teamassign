#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Parent {
private:
    string name;
    string role;
    int d, m, y;
    string hometown;
    string job;
    string phone;

public:
    // Constructor with parameters
    Parent(string _name = "", string _role = "", int _d = 0, int _m = 0, int _y = 0, string _hometown = "", string _job = "", string _phone = "")
        : name(_name), role(_role), d(_d), m(_m), y(_y), hometown(_hometown), job(_job), phone(_phone) {}

    string getname() { return name; } void setname(string _name) { name = _name; }
    string getrole() { return role; } void setrole(string _role) { role = _role; }
    int getd() { return d; } void setd(int _d) { d = _d; }
    int getm() { return m; } void setm(int _m) { m = _m; }
    int gety() { return y; } void sety(int _y) { y = _y; }
    string gethometown() { return hometown; } void sethometown(string _hometown) { hometown = _hometown; }
    string getjob() { return job; } void setjob(string _job) { job = _job; }
    string getphone() { return phone; } void setphone(string _phone) { phone = _phone; }

    void enter() {
        cout << "Nhap ten phu huynh: ";
        cin.ignore();
        getline(cin, name);
        cout << "Nhap vai tro: ";
        getline(cin, role);
        cout << "Nhap ngay sinh: " << "\n\tNgay: ";
        cin >> d;
        cout << "\tThang: ";
        cin >> m;
        cout << "\tNam: ";
        cin >> y;
        cin.ignore();
        cout << "Nhap que quan: ";
        getline(cin, hometown);
        cout << "Nhap cong viec: ";
        getline(cin, job);
        cout << "Nhap so dien thoai: ";
        getline(cin, phone);
    }

    void display() {
        cout << left << setw(20) << name << setw(20) << role << d << "/" << m << "/" << setw(20) << y << setw(20) << hometown << setw(20) << job << setw(15) << phone << endl;
    }

    static void title() {
        cout << left << setw(20) << "Ten phu huynh" << setw(20) << "Vai tro" << setw(24) << "Ngay sinh"
             << setw(20) << "Que quan" << setw(20) << "Cong viec" << "So dien thoai" << endl;
        cout << "---------------------------------------------------------------------------------------------------------" << endl;
    }
};

void displayAll(Parent p[], int n) {
    Parent::title();
    for (int i = 0; i < n; i++) {
        p[i].display();
    }
}

void searchParent(Parent p[], int n) {
    string name;
    cout << "Nhap ten phu huynh can tim: ";
    cin.ignore();
    getline(cin, name);

    bool found = false;
    Parent::title();
    for (int i = 0; i < n; i++) {
        if (p[i].getname() == name) {
            p[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << "Khong tim thay phu huynh co ten " << name << "." << endl;
    }
}

void changeParent(Parent p[], int n) {
    string name;
    cout << "Nhap ten phu huynh can sua: ";
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < n; i++) {
        if (p[i].getname() == name) {
            int k = 0;
            while (k != 7) {
                cout << "\nBan muon thay doi thong tin nao: " << endl;
                cout << "1. Ten phu huynh" << endl;
                cout << "2. Vai tro" << endl;
                cout << "3. Ngay sinh" << endl;
                cout << "4. Que quan" << endl;
                cout << "5. Cong viec" << endl;
                cout << "6. So dien thoai" << endl;
                cout << "7. Thoat" << endl;
                cout << "Nhap lua chon: ";
                cin >> k;
                cin.ignore();

                switch (k) {
                    case 1: {
                        cout << "Nhap ten phu huynh moi: ";
                        string newName;
                        getline(cin, newName);
                        p[i].setname(newName);
                        break;
                    }
                    case 2: {
                        cout << "Nhap vai tro moi: ";
                        string newRole;
                        getline(cin, newRole);
                        p[i].setrole(newRole);
                        break;
                    }
                    case 3: {
                        cout << "Nhap ngay sinh moi: " << "\n\tNgay: ";
                        int newDay, newMonth, newYear;
                        cin >> newDay;
                        p[i].setd(newDay);
                        cout << "\tThang: ";
                        cin >> newMonth;
                        p[i].setm(newMonth);
                        cout << "\tNam: ";
                        cin >> newYear;
                        p[i].sety(newYear);
                        cin.ignore();
                        break;
                    }
                    case 4: {
                        cout << "Nhap que quan moi: ";
                        string newHometown;
                        getline(cin, newHometown);
                        p[i].sethometown(newHometown);
                        break;
                    }
                    case 5: {
                        cout << "Nhap cong viec moi: ";
                        string newJob;
                        getline(cin, newJob);
                        p[i].setjob(newJob);
                        break;
                    }
                    case 6: {
                        cout << "Nhap so dien thoai moi: ";
                        string newPhone;
                        getline(cin, newPhone);
                        p[i].setphone(newPhone);
                        break;
                    }
                    case 7:
                        return;
                    default:
                        cout << "Lua chon khong hop le." << endl;
                        break;
                }
                cout << "Thong tin sau khi da doi: " << endl;
                p[i].display();
            }
        }
    }
}
