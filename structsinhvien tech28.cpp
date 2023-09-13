#include <iostream>
#include <cstring> // S? d?ng d? làm vi?c v?i chu?i
using namespace std;

struct Date {
    int day, month, year;
};

struct sinhvien {
    char hoten[31];
    Date ns;
    float diem;
    sinhvien* tiep;
};

sinhvien* dau = NULL;
sinhvien* cuoi = NULL;
sinhvien* cur = NULL;
int sosv = 0;

sinhvien* nhap1sv() {
    sinhvien* kq = new sinhvien;

    cout << "\nSinh vien thu " << sosv + 1 << endl;

    cout << "Ho ten = ";
    cin.ignore();
    cin.getline(kq->hoten, sizeof(kq->hoten));

    cout << "Ngay sinh (dd mm yyyy) = ";
    cin >> kq->ns.day >> kq->ns.month >> kq->ns.year;

    cout << "Diem = ";
    cin >> kq->diem;

    cin.ignore();
    kq->tiep = NULL;
    return kq;
}

void Bosung() {
    cur = nhap1sv();
    if (sosv == 0) {
        dau = cuoi = cur;
    } else {
        cuoi->tiep = cur;
        cuoi = cur;
    }
    sosv++;
}

void chentruoc(int n) {
    cur = nhap1sv();
    if (sosv == 0) {
        dau = cuoi = cur;
        sosv++;
        return;
    }
    if (sosv == 1 || n == 1) {
        cur->tiep = dau;
        dau = cur;
        sosv++;
        return;
    }
    sinhvien* truoc = dau;
    sinhvien* sau = dau->tiep;
    for (int i = 1; i < n - 1 && sau != NULL; i++) {
        truoc = truoc->tiep;
        sau = sau->tiep;
    }
    truoc->tiep = cur;
    cur->tiep = sau;
    sosv++;
}

void chensau(int n) {
    cur = nhap1sv();
    if (sosv == 0 || sosv < n) {
        dau = cuoi = cur;
        sosv++;
        return;
    }
    sinhvien* truoc = dau;
    sinhvien* sau = dau->tiep;
    for (int i = 1; i < n && sau != NULL; i++) {
        truoc = truoc->tiep;
        sau = sau->tiep;
    }
    cur->tiep = sau;
    truoc->tiep = cur;
    sosv++;
}

void xoa(int n) {
    if (sosv == 0) {
        return;
    }
    if (n == 1) {
        cur = dau;
        dau = cur->tiep;
        delete cur;
        sosv--;
        return;
    }
    sinhvien* truoc = dau;
    sinhvien* sau = dau->tiep;
    for (int i = 1; i < n - 1 && sau != NULL; i++) {
        truoc = truoc->tiep;
        sau = sau->tiep;
    }
    if (sau == NULL) {
        return; // Không tìm th?y v? trí c?n xóa
    }
    truoc->tiep = sau->tiep;
    delete sau;
    sosv--;
}

void taods() {
    int tiep = 1;
    while (tiep) {
        Bosung();
        cout << "Tiep (0/1) ? ";
        cin >> tiep;
    }
}

void inds() {
    cur = dau;
    int i = 1;
    while (cur != NULL) {
        cout << "\nSinh vien thu " << i << "----------------\n";
        cout << "Ho ten: " << cur->hoten << endl;
        cout << "Ngay sinh: " << cur->ns.day << "/" << cur->ns.month << "/" << cur->ns.year << endl;
        cout << "Diem: " << cur->diem << endl;
        cur = cur->tiep;
        i++;
    }
}

int main() {
    taods();
    inds();
    return 0;
}

