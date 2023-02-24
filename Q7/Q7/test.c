//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int hum, comp, elect;
//int draw;//平局
//int loser, winner;
//int is_win;
////游戏开始
////首先要知道0--石头 1对应剪刀，2对应布
//// 给电脑随机生成0-2数字
////玩家猜拳--玩家猜一个数字，与电脑数字进行比较。
////判断输赢
////显示猜拳
////保存胜负局
//void display_result(is_win)
//{
//	/*if (is_win == 0)
//	{
//		printf("平局\n");
//		draw++;
//	}
//	else if (is_win == 1)
//	{
//		printf("电脑赢\n");
//		loser++;
//	}
//	else
//	{
//		printf("玩家赢\n");
//		winner++;
//	}*/
//	switch (is_win)
//	{
//	case 0:printf("平局\n");draw++;
//		break;
//	case 1:printf("电脑赢\n");loser++;
//		break;
//	case 2:printf("玩家赢\n");winner++;
//		break;
//	default:break;
//	}
//}
//void displayer(int hum, int comp)
//{
//	switch (comp)
//	{
//	case 0:printf("电脑出的是石头\n");
//		break;
//	case 1:printf("电脑出的是剪刀\n");
//		break;
//	case 2:printf("电脑出的是布\n"); 
//		break;
//	default: printf("error"); 
//	}
//	switch (hum)
//	{
//	case 0:printf("玩家出的是石头\n");
//		break;
//	case 1:printf("玩家出的是剪刀\n");
//		break;
//	case 2:printf("玩家出的是布\n");
//		break;
//	default: printf("error"); 
//	}
//}
//void game()
//{
//	comp = rand() % 3;
//	printf("-------Game Start!!!--------\n");
//	printf("0--表示石头  1--表示剪刀  2--表示布  \n");
//	printf("选择博弈次数：\n");
//	scanf("%d", &elect);
//	while (elect)
//	{
//		end:
//		printf("请你选择猜拳：");
//		scanf("%d", &hum);
//		switch (hum)
//		{
//		case 0:printf("玩家出的是石头\n");
//			break;
//		case 1:printf("玩家出的是剪刀\n");
//			break;
//		case 2:printf("玩家出的是布\n");
//			break;
//		default: printf("error"); 
//		}
//			printf("——————————见证奇迹的时候到了————————\n");
//			if (hum < 0 || hum>2)
//			{
//				printf("输入不符合，请重新输入：\n");
//				goto end;
//			}
//		is_win = (hum - comp + 3) % 3;
//		display_result(is_win);//展现输赢
//		displayer(hum,comp);
//		elect--;
//	}
//	printf("赢局：%d 输局：%d 平局: %d", winner, loser, draw);
//	printf("\n");
//}
//void menu()
//{
//	printf("*****************************\n");
//	printf("**********|猜拳游戏|*********\n");
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
//		printf("请选择：");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:  game();
//			break;
//		case 0: printf("退出游戏\n");
//			break;
//		default:printf("输入有误，请重新输入：\n");
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
