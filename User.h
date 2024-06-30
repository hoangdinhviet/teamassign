/*
nhóm 1( gồm hiệu trưởng, hiệu phó): 
truy cập tất cả thông tin.
sửa đổi được mọi thông tin.
nhóm 2( gồm các giáo viên trong trường):
truy cập được tất cả thông tin.
chỉ được thay đổi thông tin của học sinh, phụ huynh.
nhóm 3( phụ huynh học sinh):
chỉ được xem danh sách lớp nơi con mình theo học và trạng thái của con mình.
*/
#include<iostream>
using namespace std;
class User {
    private:
    //tên đăng nhập là mã số học sinh, giáo viên;
    int user;
    string pass;
    int accesslevel;

    public:
    int getuser() {return user;} void setuser(int _user) {user = _user;}
    string getpass() {return pass;} void setpass(string _pass) {pass = _pass;}
    int getaccesslevel() {return accesslevel;} void setaccesslevel(int _accesslevel) {accesslevel = _accesslevel;}
    User(int _user = 0, string _pass = "", int _accesslevel = 0){
        user = _user; pass = _pass; accesslevel = _accesslevel;
    }
    void changepass(){
        string id;
        cout << "\nNhap ma so hoc sinh hoac giao vien: ";
        cin >> id;
        bool check;
        while (true){
        if(id == getpass()){
            check = true;
            cout << "\nNhap mat khau moi: ";
            string ID;
            cin >> ID;
            setpass(ID);
            cout << "\nDoi mat khau thanh cong.";
        }
        else{
            cout << "Mat khau khong hop le. Vui long nhap lai.";
            system("pause");
        }
        }
    } 
};

