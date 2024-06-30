#include <iostream>
#include <iomanip>
using namespace std;

class Tuition{
    private:
    int id;
    int tuitionfee;     string statust;
    int fundfee;        string statusf;
    int mealfee;        string statusm;
    public:
    int getid(){return id;}
    int gettuitionfee(){return tuitionfee;}
    string getstatust(){return statust;} void setstatust( string _statust){ statust = _statust;}
    int getfundfee(){return fundfee;}
    string getstatusf(){return statusf;} void setstatusf( string _statusf){ statusf = _statusf;}
    int getmealfee(){return mealfee;}
    string getstatusm(){return statusm;} void setstatusm( string _statusm){ statusm = _statusm;}
    Tuition (int _id = 0, int _tuitionfee = 4000000, string _statust = "", int _fundfee = 200000, string _statusf = "", int _mealfee = 800000, string _statusm = ""){
        id = _id;
        tuitionfee = _tuitionfee; statust = _statust;
        fundfee = _fundfee; statusf = _statusf;
        mealfee = _mealfee; statusm = _statusm;
    }
    void display(){
        cout << left << setw(20) << id << setw(20) << tuitionfee << setw(20) << statust << setw(20) << fundfee << setw(20) << statusf << setw(20) << mealfee << setw(20) << statusm << endl;
        }
    
    void changestatus(){
        cout << "Ban muon thay doi trang thai khoan tien nao. ";
        int k=0;
            while(k!=4){
            cout << "1.Hoc phi.             2.Tien quy." << endl;
            cout << "3.Tien an.             4.Thoat." << endl;
            cout << "Nhap lua chon: ";
            switch(k){
                case 1:{
                string f;
                cout << "\nNhap trang thai moi: ";
                cin >> f;
                setstatust(f);
                system("pause");
                break;}
                case 2:{
                string f;
                cout << "\nNhap trang thai moi: ";
                cin >> f;
                setstatusf(f);
                system("pause");
                break;}
                case 3:{
                string f;
                cout << "\nNhap trang thai moi: ";
                cin >> f;
                setstatusm(f);
                system("pause");
                break;}
                case 4:
                cout << "Thoat.";
                system("pause");
                break;
                default:
                cout << "Loi. Vui long nhap lai.";
                system("pause");
                break;
            }
        }
    }
};

void displayAll(Tuition T[], int n){
    cout << left << setw(20) << "ID" << setw(20) << "Hoc phi" << setw(20) << "Trang thai" << setw(20) << "Tien quy" << setw(20) << "Trang thai" << setw(20) << "Tien an" << setw(20) << "Trang thai" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------" << endl;
    for (int i=0; i<n; i++){
        T[i].display();
    }
}
void total(Tuition T[], int n){
    int sum1=0,sum2=0,sum3=0;
    for (int i=0; i<n; i++){
        sum1+= T[i].gettuitionfee();
        sum2+= T[i].getfundfee();
        sum3+= T[i].getmealfee();
    }
    cout << "\nTong tien hoc phi la: " << sum1;
    cout << "Tong tien quy la: " << sum2;
    cout << "Tong tien an la: " << sum3;
    cout << "Tong so tien toan bo la: " << (sum1+sum2+sum3);
}
void unpaid(Tuition T[],int n){
    cout << "\nDanh sach nhung hoc sinh chua dong tien hoac con dong thieu." << endl;
    for (int i=0; i<n; i++){
        if(T[i].getstatust() == "Unpaid" || T[i].getstatusf() == "Unpaid" || T[i].getstatusm() == "Unpaid"){
            T[i].display();
        }
    }
}