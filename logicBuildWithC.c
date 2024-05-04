#include <stdio.h>

int isPrime(int num)
{
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	return 1;
}

void printPrime(int a, int z)
{
	for (int x = a; x <= z; x++)
	{
		if (isPrime(x))
			printf(" %d,", x);
	}
}

int nextPrime(int n)
{
	for (int i = n + 1;; i++)
	{
		if (isPrime(i) == 1)
		{
			return i;
			break;
		}
	}
}

void sqNum(int n)
{
	if (n > 0)
	{
		sqNum(n - 1);
		printf("%d ", n * n);
	}
}

void evenNum(int n)
{
	if (n > 0)
	{
		evenNum(n - 1);
		if (n % 2 == 0)
			printf("%d ", n);
	}
}

void oddNum(int n)
{
	if (n > 0)
	{
		oddNum(n - 1);
		if (n % 2 == 1)
			printf("%d ", n);
	}
}

int sumNum(int n)
{
	int sum = 0;
	if (n == 1)
		return 1;
	else
		return n + sumNum(n - 1);
}

int productNum(int n)
{
	if (n == 1)
		return 1;
	else
		return n * productNum(n - 1);
}

int evenSum(int n)
{
	if (n == 1)
		return 2;
	return 2 * n + evenSum(n - 1);
}

int sqSum(int n)
{
	if (n == 1)
		return 1;
	return n * n + sqSum(n - 1);
}

int digitSum(int n)
{
	if (n > 0)
		return n % 10 + digitSum(n / 10);
}

int power(int x, int y)
{
	if (y == 0)
		return 1;
	return x * power(x, y - 1);
}

int fibo(int n)
{
	if (n == 1 || n == 2)
		return n - 1;
	return fibo(n - 1) + fibo(n - 2);
}

int arrSum(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}

int indexGreatNum(int arr[], int size)
{
	int max = arr[0],
		index = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	return index;
}

void rotateRight(int arr[], int size)
{
	int temp = arr[size - 1];
	for (int i = size - 2; i >= 0; i--)
		arr[i + 1] = arr[i];
	arr[0] = temp;
}

void rotateNtime(int arr[], int size, int n)
{
	while (n--)
		rotateRight(arr, size);
}

void bubbleSort(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void insertionSort(int arr[], int size)
{
	int temp, j;
	for (int i = 1; i < size; i++)
	{
		temp = arr[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > temp)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = temp;
	}
}

void distictEle(int arr[], int size)
{
	int i = 0, j, count;
	while (i < size)
	{
		count = 1;
		j = i + 1;
		while (j < size && arr[i] == arr[j])
		{
			count++;
			j++;
		}
		printf("%d is %d times\n", arr[i], count);
		i = j;
	}
}

int strLen(char str[])
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
		count++;
	return count;

	// for (int i = 0;; i++)
	// 	if (str[i] == '\0')
	// 		break;
	// 	else
	// 		count++;
	// return count;

	// int count = 0;
	// while (str[count] != '\0')
	// 	count++;
	// return count;

	// int i;
	// for (i = 0; str[i]; i++)
	// 	;
	// return i;
}

void strRev(char str[])
{
	int i;
	for (i = 0; str[i]; i++)
		;
	while (i >= 0)
	{
		printf("%c", str[i]);
		i--;
	}
}

int countVowel(char str[])
{
	int count = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == 'a' ||
			str[i] == 'A' ||
			str[i] == 'e' ||
			str[i] == 'E' ||
			str[i] == 'i' ||
			str[i] == 'I' ||
			str[i] == 'o' ||
			str[i] == 'O' ||
			str[i] == 'u' ||
			str[i] == 'U')
			count++;
	}
	return count;
}

int isAphaNum(char str[])
{
	int alpha = 0, digit = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			digit++;
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			alpha++;
	}
	if (digit && alpha)
		return 1;
	return 0;
}

int checkPattern(char str[], char pattern[])
{
	int i, j, k;
	for (i = 0; i <= strLen(str) - strLen(pattern); i++)
	{
		for (j = i, k = 0; pattern[k]; j++, k++)
			if (pattern[k] != str[j])
				break;
		if (k == strLen(pattern))
			return (i + 1);
	}
	return -1;
}

int strComp(char str1[], char str2[])
{
	int i = 0;
	while (str1[i] == '\0' && str2[i] == '\0')
	{
		if (str1[i] == str2[i])
			i++;
	}
	if (str1[i] == str2[i])
		return 0;
	else if (str1[i] > str2[i])
		return 1;
	else
		return -1;
}
#include <string.h>
void sortcity(char city[][20], int n)
{
	int i, j;
	char temp[20];
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (strComp(city[j], city[j + 1]) > 0)
			{
				strcpy(temp, city[j]);
				strcpy(city[j], city[j + 1]);
				strcpy(city[j + 1], temp);
			}
		}
	}
}

int swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return *x, * y;
}

int main()
{
	printf("Hello World\n");
	/*
	// code 01
	int i, j;
	for ( i = 1; i <= 5; i++){
		for (int j = i+1; j <= 4; j++)
			printf("%d, ", 2*j-1);

	}
	// code 02
	int i=5,j=1;
	while (i){
		j = i*j;
		i --;
	}
	printf("%d %d", i, j);

	// code 03
	int i=2, x=36;
	while(x>1) {
		while (x%i==0){
			x/=i;
			printf("%d ", i);
		}
		i++;
	}
	int n ,sum=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		// if (i%2 != 0)
			sum += i*2-1;
	printf("%d", sum);

	// code 04
	int num, result = 0;
	scanf("%d", &num);
	while (num > 0)
	{
		int temp;
		temp = num % 10;
		result = result * 10 + temp;
		num /= 10;
	}
	printf("%d", result);

	printPrime(3, 100);
	printf("%d ", isPrime(99));
	printf("%d", nextPrime(97));
	sqNum(30);
	evenNum(20);
	oddNum(5);
	printf("%d", sumNum(5));
	printf("%d", productNum(5));
	printf("%d", evenSum(5));
	printf("%d", sqSum(5));
	printf("%d", digitSum(256));
	printf("%d", power(3, 5));
	printf("%d", fibo(10));
	int a[] = {3, 4, 2, 6, 1};
	printf("%d", arrSum(a, 3));
	printf("%d", indexGreatNum(a, 5));

	// code positioning array
	rotateRight(a, 5);
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");

	// code n positioning array
	rotateNtime(a, 5, 3);
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);

	// code bubble sort
	int arr[5] = {55, 33, 77, 22, 66};
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	bubbleSort(arr, 5);
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	// code insertion sort
	int arr[5] = {55, 33, 77, 22, 66};
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	insertionSort(arr, 5);
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	// code distinct element
	int arr[] = {2, 3, 1, 2, 2, 1, 2, 4, 3, 2, 2, 1, 4, 3, 3, 2, 1, 4, 4, 1};
	insertionSort(arr, 20);
	distictEle(arr, 20);

	// code string length
	char str[] = "Hello";
	printf("%d", strLen(str));

	// code string reverse
	char str[] = "Hello";
	strRev(str);

	// code count vowel alphabet
	char str[] = "Hello";
	printf("%d", countVowel(str));

	// code is alpha numeric
	printf("%d", isAphaNum(Hello123));

	// code check pattern
	printf("%d\n", checkPattern("aabbccaaabbcddabc", "aaa"));
	printf("%d", checkPattern("aabbccaaabbcddabc", "bcd"));

	// code string compare
	printf("%d", strComp("hello", "Hello"));

	// code sort city
	char city[5][20] = {"Dhaka", "Chittagong", "Rajshahi", "Khulna", "Sylhet"};
	sortcity(city, 5);
	for (int i = 0; i < 5; i++)
		printf("%s\n", city[i]);
	*/

	// code swap number
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Before swap a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("After swap a = %d, b = %d\n", a, b);
	return 0;
}
