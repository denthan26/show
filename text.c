#include <stdio.h>

//�����������arr���ҵ�7
int main()
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("���ҵ��ˣ������\n");
			break;
		}
	}
	if (i == sz)
		printf("���ź���\n");
	return 0;
}
//����1��+2��+3��
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= 4; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//while�е�continue
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//		if (i == 5)
//			continue;
//	}
//	return 0;
//}

//while��break���÷�
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//��ͨwhileѭ��
//int main()
//{
//	int i = 0;
//	while (i = 1)
//		printf("hehe\n");
//	return 0;
//}

//switchǶ��
//int main()
//{
//	int n = 1;//1 2 3
//	int m = 2;//2 3 4
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:m++;
//		case 2:n++;
//		default:
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}





