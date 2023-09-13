#include<stdio.h>
#include<conio.h>
int a[100];
int main()
{
 int i, n,j, max, gt, dem;
 printf("nhap so phan tu cua mang:");
 scanf("%d", &n);
 for (i = 0; i < n; i++)
 {
  printf("a[%d]=", i + 1);
  scanf("%d", &a[i]);
 }
 for (i = 0; i < n; i++) 
 {
 	printf(" %d ", a[i]);
 }
 	max = 1;
 // TIM SO XUAT HIEN LON NHAT 
 for (i = 0; i < n; i++)
 {
  dem = 0;
  for (j = 0; j < n; j++)
  {
   if (a[i] == a[j]) dem++;
  }
  if (max < dem)
  {
   max = dem;
   gt = a[i];
  }
 }
 printf("\nphan tu xuat hien nhieu nhat la: %d\n voi so lan xuat hien la: %d", gt, max);
 _getch();
}
