//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int hum, comp, elect;
//int draw;//ƽ��
//int loser, winner;
//int is_win;
////��Ϸ��ʼ
////����Ҫ֪��0--ʯͷ 1��Ӧ������2��Ӧ��
//// �������������0-2����
////��Ҳ�ȭ--��Ҳ�һ�����֣���������ֽ��бȽϡ�
////�ж���Ӯ
////��ʾ��ȭ
////����ʤ����
//void display_result(is_win)
//{
//	/*if (is_win == 0)
//	{
//		printf("ƽ��\n");
//		draw++;
//	}
//	else if (is_win == 1)
//	{
//		printf("����Ӯ\n");
//		loser++;
//	}
//	else
//	{
//		printf("���Ӯ\n");
//		winner++;
//	}*/
//	switch (is_win)
//	{
//	case 0:printf("ƽ��\n");draw++;
//		break;
//	case 1:printf("����Ӯ\n");loser++;
//		break;
//	case 2:printf("���Ӯ\n");winner++;
//		break;
//	default:break;
//	}
//}
//void displayer(int hum, int comp)
//{
//	switch (comp)
//	{
//	case 0:printf("���Գ�����ʯͷ\n");
//		break;
//	case 1:printf("���Գ����Ǽ���\n");
//		break;
//	case 2:printf("���Գ����ǲ�\n"); 
//		break;
//	default: printf("error"); 
//	}
//	switch (hum)
//	{
//	case 0:printf("��ҳ�����ʯͷ\n");
//		break;
//	case 1:printf("��ҳ����Ǽ���\n");
//		break;
//	case 2:printf("��ҳ����ǲ�\n");
//		break;
//	default: printf("error"); 
//	}
//}
//void game()
//{
//	comp = rand() % 3;
//	printf("-------Game Start!!!--------\n");
//	printf("0--��ʾʯͷ  1--��ʾ����  2--��ʾ��  \n");
//	printf("ѡ���Ĵ�����\n");
//	scanf("%d", &elect);
//	while (elect)
//	{
//		end:
//		printf("����ѡ���ȭ��");
//		scanf("%d", &hum);
//		switch (hum)
//		{
//		case 0:printf("��ҳ�����ʯͷ\n");
//			break;
//		case 1:printf("��ҳ����Ǽ���\n");
//			break;
//		case 2:printf("��ҳ����ǲ�\n");
//			break;
//		default: printf("error"); 
//		}
//			printf("����������������������֤�漣��ʱ���ˡ���������������\n");
//			if (hum < 0 || hum>2)
//			{
//				printf("���벻���ϣ����������룺\n");
//				goto end;
//			}
//		is_win = (hum - comp + 3) % 3;
//		display_result(is_win);//չ����Ӯ
//		displayer(hum,comp);
//		elect--;
//	}
//	printf("Ӯ�֣�%d ��֣�%d ƽ��: %d", winner, loser, draw);
//	printf("\n");
//}
//void menu()
//{
//	printf("*****************************\n");
//	printf("**********|��ȭ��Ϸ|*********\n");
//	printf("**********1. play************\n");
//	printf("**********0. exit************\n");
//	printf("*****************************\n");
//}
//void test()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:  game();
//			break;
//		case 0: printf("�˳���Ϸ\n");
//			break;
//		default:printf("�����������������룺\n");
//			break;
//		}
//
//	} while(input);
//	
//
//}
//int main()
//{
//	test();
//	return 0;
//}
