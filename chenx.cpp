#include <iostream>
using namespace std;

// Ch�n x v�o v? tr� pos c?a m?ng arr g?m n ph?n t?
void insert(int arr[], int n, int x, int pos)
{
    // D?ch c�c ph?n t? t? cu?i m?ng sang ph?i
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // G�n x v�o v? tr� pos
    arr[pos - 1] = x;
}

// In ra c�c ph?n t? c?a m?ng
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// H�m ch�nh
int main()
{
    // Kh?i t?o m?t m?ng g?m 6 ph?n t? s? nguy�n
    int arr[6];
    
    // K�ch th�?c ban �?u c?a m?ng
    int n;
    
    // Ph?n t? c?n ch�n v� v? tr� ch�n
    int x;
    int pos;
    
    // Nh?p v�o k�ch th�?c ban �?u c?a m?ng
    cout << "Nhap vao kich thuoc ban dau cua mang: ";
    cin >> n;
    
     // Nh?p v�o c�c ph?n t? c?a m?ng
     cout << "Nhap vao cac phan tu cua mang: ";
     for (int i = 0; i < n; i++)
         cin >> arr[i];
     
     // Nh?p v�o ph?n t? c?n ch�n v� v? tr� ch�n
     cout << "Nhap vao phan tu can chen: ";
     cin >> x;
     
     cout << "Nhap vao vi tri can chen: ";
     cin >> pos;
     
     // In ra m?ng ban �?u
     cout << "Mang ban dau la: ";
     printArray(arr, n);
     
      // Ch�n x v�o v? tr� pos v� t�ng k�ch th�?c m?ng l�n 1
      insert(arr, n, x, pos);
      n++;
      
       // In ra m?ng sau khi ch�n
       cout << "Mang sau khi chen la: ";
       printArray(arr, n);
       
       return 0;
}
