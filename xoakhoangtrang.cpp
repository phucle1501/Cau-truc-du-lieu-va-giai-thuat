#include<stdio.h>
#include<conio.h>
#include<string.h>
void xoa(char s[90],int vitrixoa);
void xoakt(char*s);
void main()
{
    char s[90];
    printf("nhap chuoi ");
    gets(s);
	xoakt(s);
    puts(s);
    getch();
}
void xoa(char s[90],int vitrixoa)
{
	int n=strlen(s);//g�n n= �? d�i c?a chu?i
    for(int i=vitrixoa;i<n;i++)//duy?t chu?i t? v? tr� c?n x�a
     s[i]=s[i+1];
	s[n-1]='\0'; //k?t th�c
}
void xoakt(char*s)
{
    for(int i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
		{
			xoa(s,i);
			i--;
		}
    if(s[0]==' ')
		xoa(s,0);
    if(s[strlen(s)-1]==' ')
		xoa(s,strlen(s)-1);
}s
