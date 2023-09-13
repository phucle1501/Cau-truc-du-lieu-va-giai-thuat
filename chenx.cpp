#include <iostream>
using namespace std;

// Chèn x vào v? trí pos c?a m?ng arr g?m n ph?n t?
void insert(int arr[], int n, int x, int pos)
{
    // D?ch các ph?n t? t? cu?i m?ng sang ph?i
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // Gán x vào v? trí pos
    arr[pos - 1] = x;
}

// In ra các ph?n t? c?a m?ng
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Hàm chính
int main()
{
    // Kh?i t?o m?t m?ng g?m 6 ph?n t? s? nguyên
    int arr[6];
    
    // Kích thý?c ban ð?u c?a m?ng
    int n;
    
    // Ph?n t? c?n chèn và v? trí chèn
    int x;
    int pos;
    
    // Nh?p vào kích thý?c ban ð?u c?a m?ng
    cout << "Nhap vao kich thuoc ban dau cua mang: ";
    cin >> n;
    
     // Nh?p vào các ph?n t? c?a m?ng
     cout << "Nhap vao cac phan tu cua mang: ";
     for (int i = 0; i < n; i++)
         cin >> arr[i];
     
     // Nh?p vào ph?n t? c?n chèn và v? trí chèn
     cout << "Nhap vao phan tu can chen: ";
     cin >> x;
     
     cout << "Nhap vao vi tri can chen: ";
     cin >> pos;
     
     // In ra m?ng ban ð?u
     cout << "Mang ban dau la: ";
     printArray(arr, n);
     
      // Chèn x vào v? trí pos và tãng kích thý?c m?ng lên 1
      insert(arr, n, x, pos);
      n++;
      
       // In ra m?ng sau khi chèn
       cout << "Mang sau khi chen la: ";
       printArray(arr, n);
       
       return 0;
}
