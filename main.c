/*�������еĴ�СΪ120�����Զ����׼�����ʽ���Ϊ80����*����*/
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "newhead.h"
int main()
{
	system("mode con cols=120 lines=35"); // ������к��еĴ�С
	HideCursor();
	user_login();
}
//һ����ȡ��½�������ֵΪһ������
int get_login_cmd ()
{
    int i;
    char ch;
    while(scanf("%d",&i) != 1 || (i<0 || i>4)) {
            while((ch = getchar()) != '\n') putchar(ch);
            if(i<0 || i>4) printf("%d",i);
            printf("����һ����Ч���������������\n");
            printf("������������س�����\n");
    }
    return i;
}
//�˳�����
void user_exit() {
    printf("��л����ʹ�ã��ټ�\n");
}
//�û���½����
void user_login()
{
    int i;
	print_user();
	printf("����������,���س�������\n");
	switch(get_login_cmd()) {
        case 0: user_exit();  break;//exit(); break;
        case 1: break; //���õ�½����
        case 2: break; //����ע�����˺ź���
        case 3: break; //�����޸����뺯��
        case 4: break ; //
    }
}
//��ӡ��½���
void print_user()
{
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t��ӭ����ѧ���ɼ�����ϵͳ\t\t\n");
	printf(FRAME_);
	printf("\t\t\t\t*\t\t    ��¼ \t�밴 1\t\t\t*\n");
	printf("\t\t\t\t*\t\t    ע�����˺� \t�밴 2\t\t\t*\n");
	printf("\t\t\t\t*\t\t    �һ����� \t�밴 3\t\t\t*\n");
	printf("\t\t\t\t*\t\t    �޸����� \t�밴 4\t\t\t*\n");
	printf("\t\t\t\t*\t\t    �˳����� \t�밴 0\t\t\t*\n");
	printf(FRAME_);
}
//���ع��
void HideCursor()
{
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hout, &cci);
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hout, &cci);
}
