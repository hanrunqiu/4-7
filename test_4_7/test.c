#include<stdio.h>

///////////////////////////ָ���ӡ��������////////////////////////////////
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


///////////////////////////////ʵ�ֳ˷��ھ���////////////////////////////////////
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print_table(n);
//	return 0;
//}


///////////////////////////////�ַ�������////////////////////////////////
#include<string.h>
/////////����һ//////////////////

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
/////////������:�ݹ�˼��///////
//1 a��f����
//2 ����reverse_string("bcde")
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1)>=2)
//
//	     reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////////////////////////////////////////����һ������ÿλ֮��////////////////////////////////////////
//////����һ////////////
//int DigitSum(unsigned int num)
//{
//	int ret = 0;
//	while (num % 10 != 0)
//	{
//		ret = ret + num % 10;
//		num = num / 10;
//	}
//	return ret;
//}
////////���������ݹ�///////////
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}
//////////////////////////////////////////////ʵ��n��k�η�////////////////////////

double Pow(int n, int k)
{
	//n^k=n*n^(k-1)
	if (k < 0)
	{
		return (1.0 / (Pow(n, -k)));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
		return n*Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf_s("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret=:%lf\n", ret);
	return 0;

}
