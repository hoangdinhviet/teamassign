#include <iostream>
#include "C:\Users\admin\Documents\team assignment\Teacher.h"
#include "C:\Users\admin\Documents\team assignment\Parent.h"
#include "C:\Users\admin\Documents\team assignment\Student.h"
#include "C:\Users\admin\Documents\team assignment\Tuition.h"
#include "C:\Users\admin\Documents\team assignment\User.h"
using namespace std;


int main(){
    int a=17;
    User *u = new User[a];
    u[0] = User(20230001,"nguyenbich",3);
    u[1] = User(20230002,"thanhtam",3);
    u[2] = User(20230003,"tranlan",3);
    u[3] = User(20230004,"phamduyen",2);
    u[4] = User(20230005,"kimthoa",1);
    u[5] = User(20224001, "thuyan", 4);
    u[6] = User(20224002, "baochau", 4);
    u[7] = User(20224003, "minhbao", 4);
    u[8] = User(20224004, "ducmanh", 4);
    u[9] = User(20224005, "bangduong", 4);
    u[10] = User(20224006, "minhchau", 4);
    u[11] = User(20224007, "quanhhieu", 4);
    u[12] = User(20224008, "thanhha", 4);
    u[13] = User(20224009, "vankhoa", 4);
    u[14] = User(20224010, "thutrang", 4);
    u[15] = User(20224011, "minhquan", 4);
    u[16] = User(20224012, "tranngoc", 4);
    int n=12;
    Student *s = new Student[n];
    s[0] = Student("Nguyen Thuy An", "Nu", 15, 8, 2022, "Vietnam", 20224001);
    s[1] = Student("Le Thi Bao Chau", "Nu", 22, 3, 2022, "Vietnam", 20224002);
    s[2] = Student("Tran Minh Bao", "Nam", 5, 11, 2022, "Vietnam", 20224003);
    s[3] = Student("Ngo Duc Manh", "Nam", 30, 12, 2022, "Vietnam", 20224004);
    s[4] = Student("Hoang Bang Duong", "Nu", 10, 7, 2021, "Vietnam", 20214005);
    s[5] = Student("Pham Thi Minh Chau", "Nu", 12, 1, 2021, "Vietnam", 20214006);
    s[6] = Student("Vu Quang Hieu", "Nam", 18, 6, 2021, "Vietnam", 20214007);
    s[7] = Student("Dang Thanh Ha", "Nu", 24, 9, 2021, "Vietnam", 20214008);
    s[8] = Student("Nguyen Van Khoa", "Nam", 3, 2, 2020, "Vietnam", 20204009);
    s[9] = Student("Le Thu Trang", "Nu", 15, 5, 2020, "Vietnam", 20204010);
    s[10] = Student("Doan Minh Quan", "Nam", 27, 8, 2020, "Vietnam", 20204011);
    s[11] = Student("Tran Thi Ngoc", "Nu", 19, 11, 2020, "Vietnam", 20204012);

    int c = 5;
    giaovien *t = new giaovien[c];
    t[0] = giaovien("Hoang Linh Nhi", 20230001, "Thanh Xuan", "01/01/1980", "Mau Giao Be", "001176054123", 5000000, 1000000);
    t[1] = giaovien("Le Thanh Tam", 202300002, "Hai Ba Trung", "02/02/1985", "Mau Giao Nho", "001177187654", 6000000, 1500000);
    t[2] = giaovien("Tran Thi Lan", 20230003, "Cau Giay", "03/03/1990", "Mau Giao Lon", "00118478432", 7000000, 2000000);
    t[3] = giaovien("Pham Thi Duyen", 20230004, "My Dinh", "04/04/1995", "10A4", "001180987654", 8000000, 2500000);
    t[4] = giaovien("Nguyen Thi Kim Thoa", 20230005, "Dai Hoc BKHN", "05/05/1990", "10A5", "001192045632", 9000000, 3000000);

    int d = 12;
    Tuition* T = new Tuition[d];

    T[0] = Tuition(2022001, 4000000, "Unpaid", 200000, "Unpaid", 800000, "Unpaid");
    T[1] = Tuition(2022002, 4000000, "Paid", 200000, "Paid", 800000, "Paid");
    T[2] = Tuition(2022003, 4000000, "Unpaid", 200000, "Unpaid", 800000, "Paid");
    T[3] = Tuition(2022004, 4000000, "Paid", 200000, "Paid", 800000, "Unpaid");
    T[4] = Tuition(2021005, 4000000, "Paid", 200000, "Unpaid", 800000, "Paid");
    T[5] = Tuition(2021006, 4000000, "Unpaid", 200000, "Paid", 800000, "Unpaid");
    T[6] = Tuition(2021007, 4000000, "Paid", 200000, "Unpaid", 800000, "Paid");
    T[7] = Tuition(2021008, 4000000, "Unpaid", 200000, "Paid", 800000, "Unpaid");
    T[8] = Tuition(2020009, 4000000, "Paid", 200000, "Paid", 800000, "Unpaid");
    T[9] = Tuition(2020010, 4000000, "Unpaid", 200000, "Unpaid", 800000, "Paid");
    T[10] = Tuition(2020011, 4000000, "Paid", 200000, "Paid", 800000, "Unpaid");
    T[11] = Tuition(2020012, 4000000, "Unpaid", 200000, "Unpaid", 800000, "Paid");

    int e = 12;
    Parent* parents = new Parent[e];
    
    parents[0] = Parent("Nguyen Van Linh", "Cha", 1, 1, 1970, "Ha Noi", "Bac si", "0901234567");
    parents[1] = Parent("Tran Thi Mai", "Me", 2, 2, 1975, "Hai Phong", "Giao vien", "0902345678");
    parents[2] = Parent("Le Van Hoa", "Cha", 3, 3, 1980, "Da Nang", "Ky su", "0903456789");
    parents[3] = Parent("Pham Thi Lan", "Me", 4, 4, 1985, "Quang Ninh", "Ke toan", "0904567890");
    parents[4] = Parent("Hoang Van Thanh", "Cha", 5, 5, 1990, "HCM", "Luat su", "0905678901");
    parents[5] = Parent("Nguyen Thi Nga", "Me", 6, 6, 1978, "Ha Noi", "Kinh doanh", "0906789012");
    parents[6] = Parent("Tran Van Binh", "Cha", 7, 7, 1982, "Hai Phong", "Ky thuat vien", "0907890123");
    parents[7] = Parent("Le Thi Cuc", "Me", 8, 8, 1988, "Da Nang", "Nhan vien van phong", "0908901234");
    parents[8] = Parent("Pham Van Long", "Cha", 9, 9, 1979, "Quang Ninh", "Giam doc", "0909012345");
    parents[9] = Parent("Hoang Thi Anh", "Me", 10, 10, 1984, "HCM", "Bao chi", "0910123456");
    parents[10] = Parent("Nguyen Van Hieu", "Cha", 11, 11, 1972, "Ha Noi", "Giao su", "0911234567");
    parents[11] = Parent("Tran Thi Hong", "Me", 12, 12, 1986, "Hai Phong", "Tham dinh vien", "0912345678");


    cout << "                   CHAO MUNG BAN DEN VOI HE THONG QUAN LI TRUONG MAM NON" << endl << endl;
    cout << "\n                                 VUI LONG DANG NHAP." << endl << endl;
    int user;
    string pass;
    int accesslevel;
    bool check = false;
    while (!check) {
    cout << "Nhap tai khoan: ";
    cin >> user;
    cout << "Nhap mat khau: ";
    cin >> pass;
    for (int i = 0; i < a; i++) {
        if (user == u[i].getuser() && pass == u[i].getpass()) {
            accesslevel = u[i].getaccesslevel();
            check = true;
            break;
        }
    }
    if (!check) {
        cout << "Tai khoan hoac mat khau khong dung. Vui long nhap lai." << endl;
    }
}

if (accesslevel == 1 || accesslevel == 2) {
    if (accesslevel == 1){
        cout << "BAN DANG DANG NHAP VOI TU CACH HIEU TRUONG." << endl;
    }
    else if (accesslevel == 2){
        cout << "BAN DANG DANG NHAP VOI TU CACH HIEU PHO." << endl;
    }
    int p;
    while (p != 5) {
        cout << "\nBAN MUON TRUY CAP VAO NOI DUNG NAO." << endl;
        cout << "1. Quan li giao vien.          " << "2. Quan li hoc sinh." << endl;
        cout << "3. Quan li hoc phi.            " << "4. Quan li phu huynh." << endl;
        cout << "5. Thoat va ket thuc chuong trinh." << endl;
        cin >> p;
        switch(p){
            case 1:
            int choice1;

            while (true) {
            cout << "\tCHUONG TRINH QUAN LY GIAO VIEN.\t" << endl;
            cout << "\n                       MENU                         ";
            cout << "\n----------------------------------------------------";     	
            cout << "\n        1.Nhap thong tin giao vien                  ";
            cout << "\n        2.Xuat danh sach giao vien                  ";
            cout << "\n        3.Tim kiem giao vien theo ma giao vien      ";
            cout << "\n        4.Tim kiem giao vien theo cccd              ";
            cout << "\n        5.Sap xep luong giao vien tang dan          ";
            cout << "\n        6.Tinh tong luong cac giao vien             ";
            cout << "\n        7.Tim kiem giao vien thu nhap cao nhat      ";
            cout << "\n        8.Tim kiem giao vien co phu cap>100.000     "; 
            cout << "\n        9.Thoat va ket thuc chuong trinh            ";
            cout << "\n                                                    ";  
            cout << "\n----------------------------------------------------";
            cout << "\n\tNhap lua chon cua ban:";
            cin >> choice1;

            switch (choice1) {
                case 1: {
                giaovien k;
                k.nhap();
                giaovien *b = new giaovien[a + 1];
                for (int i = 0; i < a; ++i) {
                    b[i] = t[i];
                }
                b[a] = k;
                a += 1;
                delete[] t;
                t = b;
                break;
                cout << endl;
                system("pause");
                break;
                }
                case 2:
                xuatds(t, a);
                cout << endl;
                system("pause");
                break;
                case 3:
                timkiemmagv(t, a);
                cout << endl;
                system("pause");
                break;
                case 4:
                timkiemcccd(t, a);
                cout << endl;
                system("pause");
                break;
                case 5:
                sapxep(t, a);
                cout << endl;
                system("pause");
                break;
                case 6:
                tinhtongluong(t, a);
                cout << endl;
                system("pause");
                break;
                case 7:
                thuclinhmax(t, a);
                cout << endl;
                system("pause");
                break;
                case 8:
                timphucap(t, a);
                cout << endl;
                system("pause");
                break;
                case 9:
                cout << "Thoat.\n";
                delete[] t;
                return 0;
                default:
                cout << "Lua chon khong hop le. Vui long chon lai.\n";
                break;
        }
        }
        case 2:
        int choice2;

        while (choice2!=5) {
        cout << "\n                                         MENU" << endl;

        cout << "\n1.Nhap thong tin hoc sinh moi.           " << "2.Hien thi danh sach hoc sinh";     	
        cout << "\n3.Sua doi thong tin hoc sinh.            " << "4.Tim kiem thong tin hoc sinh.";
        cout << "\n5.Thoat va ket thuc chuong trinh.        " << endl;

        cout << "\nNhap lua chon cua ban:";
        cin >> choice2;

        switch (choice2) {
            case 1: {
                Student k;
                k.enter();
                Student *b = new Student[n + 1];
                for (int i = 0; i < n; ++i) {
                    b[i] = s[i];
                }
                b[n] = k;
                n += 1;
                delete[] s;
                s = b;
                cout << endl;
                //system("pause");
                break;
            }
            case 2:
                displayAll(s, n);
                cout << endl;
                //system("pause");
                break;
            case 3:
                change(s, n);
                cout << endl;
                //system("pause");
                break;
            case 4:
                search(s, n);
                cout << endl;
                //system("pause");
                break;
            case 5:
                cout << "Thoat.\n";
                delete[] s;
                return 0;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai.\n";
                break;
        }
        system("pause");
        }
        
        case 3:
        int k1 ;
        while (k1 != 4) {
        cout << "\n                                              MENU " << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "1. Hien thi thong tin hoc phi toan bo.\n2. Hien thi nhung hoc sinh chua dong xong hoc phi." << endl;
        cout << "3. Thay doi trang thai hoc phi cua hoc sinh.\n4. Thoat." << endl;
        cout << "\nNhap lua chon: ";
        cin >> k1;
        switch (k1) {
            case 1:
                displayAll(T, d);
                break;
            case 2:
                unpaid(T, d);
                break;
            case 3: {
                int id;
                bool check = false;
                cout << "\nNhap ma hoc sinh: ";
                cin >> id;
                for (int i = 0; i < d; i++) {
                    if (id == T[i].getid()) {
                        T[i].changestatus();
                        check = true;
                        break;
                    }
                }
                if (!check) {
                    cout << "\nMa hoc sinh khong ton tai. Vui long nhap lai." << endl;
                }
                break;
            }
            case 4:
                cout << "\nThoat." << endl;
                break;
            default:
                cout << "\nLua chon khong hop le. Vui long nhap lai." << endl;
                break;
        }
        system("pause");
        }
        case 4:
        int choice4;

        while (choice4 != 5) {
        cout << "\n                                         MENU" << endl;
        cout << "\n1. Nhap thong tin phu huynh moi.             " << "2. Hien thi danh sach phu huynh." << endl;
        cout << "\n3. Sua doi thong tin phu huynh.                " << "4. Tim kiem thong tin phu huynh." << endl;
        cout << "\n5. Thoat va ket thuc chuong trinh." << endl;

        cout << "\nNhap lua chon cua ban: ";
        cin >> choice4;

        switch (choice4) {
            case 1: {
                Parent newParent;
                newParent.enter();
                Parent* temp = new Parent[e + 1];
                for (int i = 0; i < e; ++i) {
                    temp[i] = parents[i];
                }
                temp[e] = newParent;
                delete[] parents;
                parents = temp;
                e += 1;
                cout << endl;
                system("pause");
                break;
            }
            case 2:
                displayAll(parents, e);
                cout << endl;
                system("pause");
                break;
            case 3:
                changeParent(parents, e);
                cout << endl;
                system("pause");
                break;
            case 4:
                searchParent(parents, e);
                cout << endl;
                system("pause");
                break;
            case 5:
                cout << "Thoat.\n";
                delete[] parents;
                return 0;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai.\n";
                break;
        }
        }
        case 5:
        cout << "Ket thuc chuong trinh.";
        break;
        return 0;
        default:
        cout << "\nLoi. Vui long nhap lai.";
        system("pause");
        break;

        }
    }
}

if (accesslevel == 3) {
    cout << "BAN DANG DANG NHAP VOI TU CACH LA GIAO VIEN." << endl;
    int p;
    while (p != 5) {
        cout << "\nBAN MUON TRUY CAP NOI DUNG NAO." << endl;
        cout << "1. Quan li thong tin ca nhan.      " << "2. Quan li hoc sinh." << endl;
        cout << "3. Quan li hoc phi.                " << "4. Quan li phu huynh." << endl;
        cout << "5.Thoat va ket thuc chuong trinh" << endl;
        cin >> p;
        switch(p){
        case 1:
        int choice5;

        while (true) {
        cout << "\n                       MENU                         ";
        cout << "\n----------------------------------------------------";     	
        cout << "\n        1.Thay doi thong tin ca nhan                ";
        cout << "\n        2.Hien thi thong tin ca nhan                ";
        cout << "\n        3.Thoat va ket thuc chuong trinh            ";
        cout << "\n                                                    ";  
        cout << "\n----------------------------------------------------";
        cout << "\n\tNhap lua chon cua ban:";
        cin >> choice5;

        switch (choice5) {
            case 1:
            for (int i=0; i<c; i++){
                if(user == t[i].get_magv()){
                    t[i].nhap();
                }
            }
            cout << endl;
            system("pause");
            break;
            case 2:
            for (int i=0; i<c; i++){
                if(user == t[i].get_magv()){
                    t[i].xuat();
                }
            }
            cout << endl;
            system("pause");
            break;
            case 3:
                cout << "Thoat.\n";
                delete[] t;
                return 0;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai.\n";
                break;
        }
        }
        case 2:
        int choice6;

        while (choice6!=5) {
        cout << "\n                                         MENU" << endl;

        cout << "\n1.Nhap thong tin hoc sinh moi.           " << "2.Hien thi danh sach hoc sinh";     	
        cout << "\n3.Sua doi thong tin hoc sinh.            " << "4.Tim kiem thong tin hoc sinh.";
        cout << "\n5.Thoat va ket thuc chuong trinh.        " << endl;

        cout << "\nNhap lua chon cua ban:";
        cin >> choice6;

        switch (choice6) {
            case 1: {
                Student k;
                k.enter();
                Student *b = new Student[n + 1];
                for (int i = 0; i < n; ++i) {
                    b[i] = s[i];
                }
                b[n] = k;
                n += 1;
                delete[] s;
                s = b;
                cout << endl;
                //system("pause");
                break;
            }
            case 2:
                displayAll(s, n);
                cout << endl;
                //system("pause");
                break;
            case 3:
                change(s, n);
                cout << endl;
                //system("pause");
                break;
            case 4:
                search(s, n);
                cout << endl;
                //system("pause");
                break;
            case 5:
                cout << "Thoat.\n";
                delete[] s;
                return 0;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai.\n";
                break;
        }
        system("pause");
    }
        case 3:
        int k;
        while (k != 4) {
        cout << "\n                                              MENU " << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "1. Hien thi thong tin hoc phi toan bo.\n2. Hien thi nhung hoc sinh chua dong xong hoc phi." << endl;
        cout << "3. Thay doi trang thai hoc phi cua hoc sinh.\n4. Thoat." << endl;
        cout << "\nNhap lua chon: ";
        cin >> k;
        switch (k) {
            case 1:
                displayAll(T, d);
                break;
            case 2:
                unpaid(T, d);
                break;
            case 3: {
                int id;
                bool check = false;
                cout << "\nNhap ma hoc sinh: ";
                cin >> id;
                for (int i = 0; i < d; i++) {
                    if (id == T[i].getid()) {
                        T[i].changestatus();
                        check = true;
                        break;
                    }
                }
                if (!check) {
                    cout << "\nMa hoc sinh khong ton tai. Vui long nhap lai." << endl;
                }
                break;
            }
            case 4:
                cout << "\nThoat." << endl;
                break;
            default:
                cout << "\nLua chon khong hop le. Vui long nhap lai." << endl;
                break;
        }
        system("pause");
        }
        case 4:
        int choice7 ;

        while (choice7 != 5) {
            cout << "\n                                         MENU" << endl;
            cout << "\n1. Nhap thong tin phu huynh moi.             " << "2. Hien thi danh sach phu huynh." << endl;
            cout << "\n3. Sua doi thong tin phu huynh.                " << "4. Tim kiem thong tin phu huynh." << endl;
            cout << "\n5. Thoat va ket thuc chuong trinh." << endl;

            cout << "\nNhap lua chon cua ban: ";
            cin >> choice7;

            switch (choice7) {
            case 1: {
                Parent newParent;
                newParent.enter();
                Parent* temp = new Parent[e + 1];
                for (int i = 0; i < e; ++i) {
                    temp[i] = parents[i];
                }
                temp[e] = newParent;
                delete[] parents;
                parents = temp;
                e += 1;
                cout << endl;
                system("pause");
                break;
            }
            case 2:
                displayAll(parents, e);
                cout << endl;
                system("pause");
                break;
            case 3:
                changeParent(parents, e);
                cout << endl;
                system("pause");
                break;
            case 4:
                searchParent(parents, e);
                cout << endl;
                system("pause");
                break;
            case 5:
                cout << "Thoat.\n";
                delete[] parents;
                return 0;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai.\n";
                break;
            }
        }

        case 5:
        cout << "Ket thuc chuong trinh.";
        break;
        return 0;
        default:
        cout << "\nLoi. Vui long nhap lai.";
        system("pause");
        break;
        }
    }
}

if (accesslevel == 4) {
    cout << "Ban dang dang nhap voi tu cach phu huynh hoc sinh." << endl;
    int p;
    while (p != 4) {
        cout << "\nCHON THAO TAC BAN MUON THUC HIEN." << endl;
        cout << "1. Hien thi thong tin con cai." << "          2. Hien thi tinh trang hoc phi." << endl;
        cout << "3. Thoat va ket thuc chuong trinh. " << endl;
        cin >> p;
        switch(p){
            case 1:
            for(int i=0; i<d; i++){
                if(user == s[i].getid()){
                    s[i].displayOne();
                }
            }
            system("pause");
            break;
            case 2:
            for(int i=0; i<e; i++){
                if(user == T[i].getid()){
                    T[i].display();
                }
            }
            system("pause");
            break;
            case 3:
            cout << "Ket thuc chuong trinh.";
            break;
            return 0;
            default:
            cout << "\nLoi. Vui long nhap lai.";
            system("pause");
            break;
            
        }
    }

}
delete[] u;delete[] s;delete[] t;delete[] T;delete[] parents;

}