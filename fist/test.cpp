#include <stdio.h>
//int main()
//{
//	char c[10];
//	int i;
//	for (i = 0; i < 10; i++) {
//		scanf(" %c", &c[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%c", c[i]);
//		
//	}
//}

//{
//	int n[10];
//	int i;
//	for (i = 0; i < 10; i++) {
//		n[i] = 1 + i;
//
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", n[i]);
//	}
//}
//{
//
//}

//{
//	double score[7] = { 0, 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
//	int i;
//	int num;
//	double sum = 0;
//     
//	for (i = 0; i < 2; i++) {
//		scanf("%d", &num);
//		sum += score[num];
//	}
//	printf("%.1f", sum);
//
//
//}

//{
//	int num[10];
//	int min = 1000;
//	int i;
//
//	for (i = 0; i < 10; i++) {
//		scanf(" %d", &num[i]);
//		if (min > num[i])
//			min = num[i];
//	}
//	printf("%d", min);
//}

//{
//    int n[10]; //7번문제
//    int i;
//    int max = 0;
//    int min = 10000;
//    int n2;
//    for (i = 0; i < 10; i++) {
//        scanf("%d", &n[i]);
//        if (n[i] < 100)
//            if (max < n[i])
//                max = n[i];
//        if (n[i] >= 100)
//            if (min > n[i])
//                min = n[i];
//    }
//    
//    if (max == 0)
//        max = 100;
//
//    if (min == 10000)
//        min = 100;
//    
//    printf("%d %d", max, min);
//}

//{
//	int num[10];  //
//	int i;
//	int sum = 0;
//	int sum2 = 0;
//
//	for (i = 0; i < 10; i++) {
//		scanf(" %d", &num[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		if (i % 2 == 1)
//			sum += num[i];
//		else if (sum2 += num[i]);
//	}
//	printf("sum : %d \n", sum);
//	printf("avg : %.1f \n", (double)sum2 / 5);
//}

//{
//	int num[10];
//	int i, j, tmp;
//	
//	for (i = 0; i < 10; i++)
//		scanf(" %d", &num[i]);
//	for (i=0; i<9; i++) {
//		
//		for (j = i + 1; j < 10; j++) {
//			if (num[i] < num[j]) { 
//				tmp = num[i];
//				num[i] = num[j];
//				num[j] = tmp;
//
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", num[i]);
//	}
//	return 0;

//}
//            1번문제 
//{
//    char c[10]; 
//    int i;
//
//    for (i = 0; i < 10; i++) {
//        scanf(" %c", &c[i]);
//    }
//    for (i = 9; i >= 0; i--) {
//        printf("%c ", c[i]);
//    }
//}

//           2번문제
//{
//    
//        int num[5];
//        int i;
//        for (i = 0; i < 5; i++) {
//            scanf(" %d", &num[i]);
//        }
//        printf("%d", num[0] + num[2] + num[4]);
//    
//}

//          3번문제
//{
//    int num[10];
//    int i;
//    int odd = 0;
//    int even = 0;
//    for (i = 0; i < 10; i++) {
//        scanf(" %d", &num[i]);
//        if (i % 2 == 0)
//            odd += num[i];
//
//        else if
//            (even += num[i]);
//
//
//    }
//    printf("odd : %d \n", odd);
//    printf("even : %d \n", even);
//}

//         4번문제
//{
//    int num[100];
//    int i;
//    int count = 0;
//    for (i = 0; i < 100; i++) {
//        scanf(" %d", &num[i]);
//        if (num[i] == -1) break;
//        count++;
//    }
//    if (i < 3) {
//        for (i = 0; i < count; i++) {
//            printf("%d ", num[i]);
//        }
//    }
//    else {
//        for (i = count - 3; i < count; i++) {
//
//            printf("%d ", num[i]);
//        }
//    }
//}

//         5번문제
//{
//    double num[6];
//    double sum = 0;
//    int count = 0;
//    int i;
//
//    for (i = 0; i < 6; i++) {
//        scanf(" %lf", &num[i]);
//        sum += num[i];
//        count++;
//    }
//    printf("%.1f", sum / count);
//}

//           6번문제
//{
//    char a[6] = { 'J', 'U', 'N', 'G', 'O', 'L' };
//    int num[6] = { 0, 1, 2, 3 ,4, 5 };
//
//    while (1) {
//        scanf("%c", &a[0]);
//        if (a[0] == 'J') {
//            printf("0");
//        }
//        else if (a[0] == 'U') {
//            printf("1");
//        }
//        else if (a[0] == 'N') {
//            printf("2");
//        }
//        else if (a[0] == 'G') {
//            printf("3");
//        }
//        else if (a[0] == 'O') {
//            printf("4");
//        }
//        else if (a[0] == 'L') {
//            printf("5");
//        }
//        else
//            printf("none");
//        break;
//
//    }
//}
//             7번문제
//{
//    int min = 1000;
//    int max = -1000;
//    int num[100];
//    int i;
//
//    for (i = 0; i < 100; i++) {
//        scanf(" %d", &num[i]);
//        if (num[i] == 999)
//            break;
//        if (max < num[i])
//            max = num[i];
//        if (min > num[i])
//            min = num[i];
//    }
//    printf("max : %d \n", max);
//    printf("min : %d \n", min);
//}

//           8번문제
//{
//    int num[100];
//    int i;
//    int sum = 0;
//    int count = 0;
//
//    for (i = 0; i < 100; i++) {
//        scanf(" %d", &num[i]);
//        if (num[i] == 0)
//            break;
//        if (num[i] % 5 == 0) {
//            sum += num[i];
//            count++;
//        }
//    }
//    printf("Multiples of 5 : %d \n", count);
//    printf("sum : %d \n", sum);
//    printf("avg : %.1f", (double)sum / count);
//}

//                 9번문제
//{
//    int i;
//    int num[100];
//    int count = 0;
//
//    for (i = 0; i < 100; i++) {
//        scanf("%d", &num[i]);
//        if (num[i] == 0)
//            break;
//        count++;
//    }
//    printf("%d \n", count);
//
//    for (i = 0; i < count; i++) {
//        if (num[i] % 2 == 0)
//            printf("%d ", num[i] / 2);
//        else {
//            printf("%d ", num[i] * 2);
//        }
//    }
//}

//               10번문제
//{
//    int i, j;
//    int score[20];
//    int num;
//    int tmp;
//
//    scanf("%d", &num);
//
//    for (i = 0; i < num; i++) {
//        scanf("%d", &score[i]);
//    }
//    for (i = 0; i < num - 1; i++) {
//        for (j = i + 1; j < num; j++) {
//            if (score[i] < score[j]) {
//                tmp = score[i];
//                score[i] = score[j];
//                score[j] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < num; i++)
//        printf("%d \n", score[i]);

//                  자가진단 1번
//{
//    int i;
//    char c;
//    int count[26] = { 0 };
//
//    while (1) {
//        scanf(" %c", &c);
//        if (c < 'A' || c > 'Z')
//            break;
//            count[c - 'A']++;
//        
//        
//    }
//    for (i = 0; i < 26; i++) {
//        if (count[i] > 0)
//            printf("%c : %d \n", i + 'A', count[i]);
//    }
//
//}
//               자가진단 2번
//{
//    int num, i;
//    int count[10] = { 0 };
//    
//    while (1) {
//        scanf("%d", &num);
//
//        if (num == 0) break;
//        count[num / 10]++;
//        
//    }
//    for (i = 0; i < 10; i++) {
//        if (count[i] > 0) {
//            printf("%d : %d\n", i, count[i]);
//        }
//    } 
//}
//            자가진단 3번
//{
//    int arr[100] = {100};
//    int num;
//    int i = 2;
//
//    scanf("%d", &num);
//    
//    arr[1] = num;
//    printf("%d %d ", arr[0], arr[1]);
//    while (1) {
//        arr[i] = arr[i - 2] - arr[i - 1];
//        printf("%d ", arr[i]);
//        if (arr[i] < 0) {
//            break;
//        }
//        i++;
//
//    }
//  }

//              자가진단4번
//{
//    int i, j;
//    int arr[3][5] = { {5,8,10,6,4}, {11,20,1,13,2}, {7,9,14,22,3} };
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 5; j++) {
//            printf("%2d   ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//           5번
//{
//    int a[2][4], b[2][4], c[2][4];
//    int i, j;
//    for (i = 0; i < 2; i++) {
//        for (j = 0; j < 4; j++) {
//            scanf(" %d", &a[i][j]);
//        }
//    }
//    for (i = 0; i < 2; i++) {
//        for (j = 0; j < 4; j++) {
//            scanf(" %d", &b[i][j]);
//        }
//    }
//    for (i = 0; i < 2; i++) {
//        for (j = 0; j < 4; j++) {
//            c[i][j] = a[i][j] * b[i][j];
//        }
//    }
//    for (i = 0; i < 2; i++) {
//        for (j = 0; j < 4; j++) {
//            printf("%d ", c[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//                   
//{
//	int i;
//	int num[101] = { 0, 100 };
//	int num2;
//	scanf("%d", &num2);
//	num[2] = num2;
//	for (i = 3;; i++) {
//		num[i] = num[i - 2] - num[i-1];
//		if (num[i] < 0) break;
//	}
//	for (i = 1;; i++) {
//		printf("%d ", num[i]);
//		if (num[i] < 0) break;
//	}
//}
//{
//	int i, j;
//	int score[5][5] = {{0}};
//	int count = 0;
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			score[i][5] += score[i][j];
//			if (score[i][j] >= 80) {
//				printf("pass");
//				count++;
//			}
//			else
//			{
//				printf("fail");
//			}
//			printf("\n");
//		}
//		printf("Successful : %d", count);
//	}
//}

// 함수 자가진단 1번

//void c();
//
//int main()
//{
//	int i;
//	int num;
//	scanf("%d", &num);
//	for (i = 0; i < num; i++) {
//		c();
//	}
//}
//void c() 
//{
//	puts("~!@#$^&*()_+|");
//}

// 함수 자가진단 2번

//void pie(double su)
//{
//    printf("%.2f", su * su * 3.14);
//}
//int main()
//{
//    int num;
//    scanf("%d", &num);
//
//    pie(num);
//}

// 함수 자가진단 3번

//void abc(int n) 
//{
//    int i, j;
//    int num = 1;
//   
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n; j++) {
//            printf("%d ", num++);
//        }
//        printf("\n");
//    }
//
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    abc(n);
//}

// 함수 자가진단 4번

//void c(int x, int y, int z)
//{
//    if (x > y && x > z) {
//        printf("%d", x);
//    }
//    else if (y > z) {
//        printf("%d", y);
//    }
//    else
//        printf("%d", z);
//}
//int main()
//{
//    int num, num2, num3;
//    scanf("%d %d %d", &num, &num2, &num3);
//    c(num, num2, num3);
//}

// 함수 자가진단 5번

//int num(int x, int y)
//{
//    int num2 = 1;
//    for (int i = 1; i <= y; i++) {
//        num2 = num2 * x;
//    }
//    return num2;
//}
//int main()
//{
//    int n, n2;
//    scanf("%d %d", &n, &n2);
//    printf("%d", num(n, n2));
//}

// 함수 자가진단 6번

//int gesan(int x, int y, char op)
//{
//    if (op == '+') {
//        return x + y;
//    }
//    else if (op == '-') {
//        return x - y;
//    }
//    else if (op == '*') {
//        return x * y;
//    }
//    else if (op == '/')
//    {
//        return x / y;
//    }
//    else
//        return 0;
//}
//
//int main()
//{
//    int a, b;
//    char c;
//    scanf("%d %c %d", &a, &c, &b);
//    printf("%d %c %d = %d\n", a, c, b, gesan(a, b, c));
//}
//형성평가1번

// 함수 자가진단 7번

//void gesan(int& x, int& y)
//{
//    int tmp;
//    if (x < y) {
//        tmp = x;
//        x = y;
//        y = tmp;
//    }
//    printf("%d ", y * 2);
//    printf("%d", x / 2);
//
//}
//int main()
//{
//    int num, num2;
//    scanf("%d %d", &num, &num2);
//    gesan(num, num2);
//
//}

// 함수 자가진단 8번

//void input(int &x, int &y) 
//{
//   scanf("%d %d", &x, &y);
//   int tmp = 0;
//   if (x > y) {
//        tmp = x;
//        x = y;
//        y = tmp;
//
//    }
//}
//
//void output(int i)
//{
//    int j;
//    printf("==%ddan== \n", i);
//    for (j = 1; j < 9; j++) {
//        printf("%d * %d = %2d \n", i, j, i * j);
//    }
//    printf("\n");
//        
//}
//
//int main()
//{
//    int a, b, i;
//    input(a, b);
//    for (i = a; i <= b; i++) {
//        output(i);
//    }
//    return 0;
//}

//형성평가 1번
 
//{
//    int num, i;
//    int count[7] = { 0 };
//    for (i = 0; i < 10; i++) {
//        scanf("%d", &num);
//        if (num < 1 || num>6) break;
//        count[num]++;
//    }
//    for (i = 1; i < 7; i++) {
//        printf("%d : %d \n", i, count[i]);
//    }
//}

       
//형성평가2번

//{
//    int count[101] = { 0 };
//    int i;
//
//    int num;
//
//    for (i = 1; i <= 100; i++) {
//        scanf("%d", &num);
//        if (num == 0) break;
//        count[num / 10 * 10]++;
//
//    }
//    for (i = 100; i >= 0; i--) {
//        if (count[i] > 0) {
//            printf("%d : %d person\n", i, count[i]);
//        }
//    }
//}

//형성평가3번

//{
//    int count[11] = { 0 };
//    int i;
//    int num1, num2;
//    scanf("%d %d", &num1, &num2);
//    count[1] = num1;
//    count[2] = num2;
//
//    for (i = 3; i < 11; i++) {
//        count[i] = (count[i - 2] + count[i - 1]) % 10;
//    }
//
//    for (i = 1; i < 11; i++) {
//        printf("%d ", count[i]);
//    }
//
//
//}

//형성평가4번

//{
//    int i, j;
//    int sum = 0;
//    
//    int arr[4][3] = { { 3,5,9 }, {2,11,5}, {8,30,10}, {22,5,1} };
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 3; j++) {
//            printf("%d ", arr[i][j]);
//            sum += arr[i][j];
//            
//        }
//        printf("\n");
//        
//    }
//    printf("%d", sum);
//}

//형성평가5번

//{
//    int score[4][3] = { {0} };
//
//    int i, j;
//
//    for (i = 0; i < 4; i++) {
//        int sum = 0;
//        for (j = 0; j < 3; j++) {
//            scanf("%d", &score[i][j]);
//            sum += score[i][j];
//        }
//        printf("%dclass : %d \n", i + 1, sum);
//    }
//}

//형성평가6번
   
//{
//    int i, j;
//    int arr[5][6] = { {0} };
//    arr[0][1] = 1;
//    arr[0][3] = 1;
//    arr[0][5] = 1;
//
//    for (i = 1; i <= 4; i++) {
//        for (j = 1; j < 6; j++) {
//            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
//        }
//    }
//    for (i = 0; i <= 4; i++) {
//        for (j = 1; j <= 5; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}

//형성평가7번

//{
//    int a[2][3], b[2][3];
//    int i, j;
//    printf("first array \n");
//    for (i = 0; i < 2; i++) {
//        for (j = 0; j < 3; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    printf("second array \n");
//    for (i = 0; i < 2; i++) {
//        for (j = 0; j < 3; j++) {
//            scanf("%d", &b[i][j]);
//        }
//    }
//    for (i = 0; i < 2; i++) {
//        for (j = 0; j < 3; j++) {
//            printf("%d ", a[i][j] * b[i][j]);
//        }
//        printf("\n");
//    }
//}

//형성평가8번

//{
//    int arr[4][2] = { {0} };
//    int i, j;
//    int sum = 0;
//
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 2; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 1; j++) {
//            printf("%d ", (arr[i][j] + arr[i][j + 1]) / 2);
//        }
//        
//    }
//    printf("\n");
//    for (i = 0; i < 1; i++) {
//        for (j = 0; j <2; j++) {
//            printf("%d ", (arr[i][j] + arr[i + 1][j]+arr[i+2][j]+arr[i+3][j]) / 4);
//        }
//    }
//    printf("\n");
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 2; j++) {
//            sum += arr[i][j];
//        }
//    }
//    printf("%d", sum / 8);
//}

//형성평가9번

//{
//    int num;
//    int arr[11][11] = { {0} };
//    int i, j;
//
//    scanf("%d", &num);
//    arr[1][1] = 1;
//
//    for (i = 2; i <= num; i++) {
//        for (j = 1; j <= i; j++) {
//            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//        }
//    }
//    for (i = num; i >= 1; i--) {
//        for (j = 1; j <= i; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//}
 
//형성평가10번

//{
//    char c[3][5] = { {0} };
//    int i, j;
//
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 5; j++) {
//            scanf(" %c", &c[i][j]);
//        }
//    }
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 5; j++) {
//            printf("%c ", c[i][j] + 32);
//        }
//        printf("\n");
//    }
//}

//함수 형성평가 1

//void c()
//{
//    puts("@@@@@@@@@@");
//}
//
//int main()
//{
//    printf("first \n");
//    c();
//    printf("second \n");
//    c();
//    printf("third \n");
//    c();
//}

//함수 형성평가 2

//void hap(int num)
//{
//
//    int sum = 0;
//    int i;
//    for (i = 1; i <= num; i++) {
//        sum += i;
//    }
//    printf("%d", sum);
//}
//
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    hap(num);
//}

//함수 형성평가 3

//void arr(int num)
//{
//    int i, j;
//    for (i = 1; i <= num; i++) {
//        int su = 1;
//        for (j = 1; j <= num; j++) {
//            su += i;
//            printf("%d ", su-1);
//        }
//        printf("\n");
//    }
//
//}
//
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    arr(num);
//
//}

//함수 형성평가 4

//void gop(int x, int y)
//{
//    int su = 0;
//    su = (x * x) - (y * y);
//
//    if (su < 0) {
//        su *= -1;
//    }
//    printf("%d", su);
//}
//
//
//int main()
//{
//    int num, num2;
//    scanf("%d %d", &num, &num2);
//    gop(num, num2);
//
//}

//함수 형성평가 5

//void hap()
//{
//    int i, j;
//    int score[4][4] = { {0} };
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 3; j++) {
//            scanf("%d", &score[i][j]);
//            score[i][3] += score[i][j];
//            score[3][j] += score[i][j];
//            score[3][3] += score[i][j];
//        }
//    }
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 4; j++) {
//            printf("%d ", score[i][j]);
//        }
//        printf("\n");
//    } 
//}
//
//int main()
//{
//    hap();
//    return 0;
//}

//함수2 자가진단1

//void input(int a[], int cnt)
//{
//    int i;
//    for (i = 0; i < cnt; i++) {
//        scanf("%d", &a[i]);
//    }
//}
//
//void output(int a[], int cnt)
//{
//    int i;
//    for (i = cnt - 1; i >= 0; i--) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//}
//
//void swap(int &x, int &y)
//{
//    int tmp = x;
//    x = y;
//    y = tmp;
//}
//
//void sort(int a[], int cnt)
//{
//    int i, j;
//    for (i = 0; i < cnt - 1; i++) {
//        for (j = i + 1; j < cnt; j++) {
//            if (a[i] > a[j]) {
//                swap(a[i], a[j]);
//            }
//        }
//    }
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[10];
//
//    input(arr, n);
//    sort(arr, n);
//    output(arr, n);
//
//    return 0;
//}

//함수2 자가진단2

//void input(int a[], int cnt)
//{
//    int i;
//    for (i = 0; i < cnt; i++) {
//        scanf("%d", &a[i]);
//    }
//}
//
//int pass(int a[], int cnt)
//{
//    int i, j;
//    i = a[0];
//    j = a[1];
//    int n[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    if (i > 12 || i < 1) return false;
//    if (j<1 || j>n[i]) return false;
//    return true;
//}
//int main()
//{
//    int n[2];
//    input(n, 2);
//    if (pass(n, 2)) {
//        printf("OK!");
//    }
//    else {
//        printf("BAD!");
//    }
//}

//함수2 자가진단3

//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//    int a, b;
//    double c, d;
//    scanf("%d %d", &a, &b);
//    scanf("%lf %lf", &c, &d);
//
//
//
//    printf("%d \n", abs(a) > abs(b) ? a : b);
//    printf("%.2f \n", fabs(c) < fabs(d) ? c : d);
//}

//함수2 자가진단4

//#include <stdlib.h>
//#include <math.h>
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    printf("%.2f", sqrt(num / 3.14));
//}

//함수2 자가진단5

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    double max, min;
//    double n, n2, n3;
//    scanf(" %lf %lf %lf", &n, &n2, &n3);
//    max = n;
//    if (n2 > max) max = n2;
//    if (n3 > max) max = n3;
//
//    min = n;
//    if (n2 < min) min = n2;
//    if (n3 < min) min = n3;
//
//
//    printf("%.f %.f %.f", ceil(max), floor(min), round(n + n2 + n3 - max - min));
//
//}

//함수2 자가진단6

//#define one 1
//#define two 2
//#define three 3
//
//int main()
//{
//    printf("%d + %d = %d \n", one, one, one + one);
//    printf("%d + %d = %d \n", one, two, one + two);
//    printf("%d + %d = %d \n", one, three, one + three);
//    printf("%d + %d = %d \n", two, one, two + one);
//    printf("%d + %d = %d \n", two, two, two + two);
//    printf("%d + %d = %d \n", two, three, two + three);
//    printf("%d + %d = %d \n", three, one, three + one);
//    printf("%d + %d = %d \n", three, two, three + two);
//    printf("%d + %d = %d \n", three, three, three + three);
//
//}

//함수2 자가진단7

//#define N 10
//#define SWAP(x,y) {int z = x; x = y; y = z;}
//
//void input(int a[])
//{
//    int i;
//    for (i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//    }
//}
//void output(int a[])
//{
//    int i;
//    for (i = 0; i < N; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//}
//
//void sort(int a[])
//{
//    int i, j;
//    for (i = 1; i < N; i++) {
//        for (j = 0; j < N - i; j++) {
//            if (a[j] < a[j + 1]) {
//                SWAP(a[j], a[j + 1]);
//            }
//        }
//        output(a);
//        }
//    
//        
//}
//
//int main()
//{
//    int arr[N];
//
//    input(arr);
//    sort(arr);
//    output(arr);
//    return 0;
//}

//함수2 자가진단8

//#define gesan(x,y)(x-y)*(x-y)
//#define gesan2(x,y)(x+y)*(x+y)*(x+y)
//
//int main()
//{
//    int n, n2, n3, n4;
//    scanf("%d %d", &n, &n2);
//    n3 = gesan(n, n2);
//    n4 = gesan2(n, n2);
//
//    printf("(%d - %d) ^ 2 = %d \n", n, n2, n3);
//    printf("(%d + %d) ^ 3 = %d", n, n2, n4);
//
//}
//함수 형성평가4

//함수2 형성평가1

//#define SWAP(x,y) {int z = x; x =y; y =z;}
//void input(int a[], int cnt)
//{
//    int i;
//    for (i = 0; i < cnt; i++) {
//        scanf("%d", &a[i]);
//    }
//}
//
//void sort(int a[], int cnt)
//{
//    int i, j;
//    for (i = 1; i < cnt; i++) {
//        for (j = 0; j < cnt-i; j++) {
//            if (a[j] < a[j + 1]) {
//                SWAP(a[j], a[j + 1]);
//            }
//        }
//    }
//}
//void output(int a[], int cnt)
//{
//    int i;
//    for (i = 0; i < cnt; i++) {
//        printf("%d ", a[i]);
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[15];
//    input(arr, n);
//    sort(arr, n);
//    output(arr, n);
//    return 0;
//}

//함수2 형성평가2

//#include <math.h>
//
//int main()
//{
//    double a, b;
//    int count;
//    scanf(" %lf %lf", &a, &b);
//
//    if (sqrt(a) < sqrt(b)) {
//        count = floor(sqrt(b)) - ceil(sqrt(a));
//    }
//    else {
//        count = floor(sqrt(a)) - ceil(sqrt(b));
//    }
//    printf("%d", count + 1);
//
//}

//#include <math.h>
//#include <stdlib.h>
//
//int main()
//{
//    double a, b;
//    double num = 0;
//    scanf("%lf %lf", &a, &b);
//
//    num = round(sqrt(a) - sqrt(b));
//    if (num <= 0) 
//        num *= -1;
//    
//    printf("%.f", num);
//
//}

//함수2 형성평가3

//#include <stdlib.h>
//#include <math.h>
//#define N 5
//void hap(int a[])
//{
//    int sum = 0;
//    int i;
//    for (i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//        sum += abs(a[i]);
//    }
//    printf("%d", sum);
//}
//
//int main()
//{
//
//    int a[N];
//    hap(a);
//    return 0;
//}

//함수2 형성평가4

//#include <math.h>
//
//
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    if (num <= 20 && num >= 1)
//        printf("%.f", pow(2, num));
//
//}

//함수 형성평가5

//#include <math.h>
//#include <stdlib.h>
//
//int main()
//{
//    double a, b, c;
//    scanf("%lf %lf %lf", &a, &b, &c);
//
//    printf("%.f \n", round((a + b + c) / 3));
//    printf("%.f \n", round((round(a) + round(b) + round(c)) / 3));
//
//}

//함수 형성평가6

//#define N 7
//#define SWAP(x,y) {int z = x; x=y; y = z;}
//
//void input(int a[])
//{
//    int i;
//    for (i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//    }
//}
//
//void sort(int a[])
//{
//    int i, j;
//    for (i = 1; i < 4; i++) {
//        for (j = 0; j < N - i; j++) {
//            if (a[j] > a[j + 1]) {
//                SWAP(a[j], a[j + 1]);
//            }
//        }
//    }
//}
//
//void output(int a[])
//{
//    int i;
//    for (i = 0; i < N; i++) {
//        printf("%d ", a[i]);
//    }
//}
//
//int main()
//{
//    int arr[N];
//    input(arr);
//    sort(arr);
//    output(arr);
//    return 0;
//}

//함수 형성평가 7

//#define PI 3.141592
//#define AREA (r) * (r) *(PI)
//
//int main()
//{
//    double r;
//    printf("radius : ");
//    scanf("%lf", &r);
//    printf("area = %.3f", AREA);
//}

//함수3 자가진단1

//void c(int n)
//{
//    if (n < 1) return;
//    c(n - 1);
//    printf("recursive \n");
//}
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    c(N);
//    return 0;
//}

//함수3 자가진단2

//void num(int n)
//{
//    if (n < 1) return;
//    printf("%d ", n);
//    num(n - 1);
//}
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    num(N);
//    return 0;
//}

//함수3 자가진단3

//int hap(int n)
//{
//    if (n <= 1) return 1;
//    return n + hap(n - 1);
//}
//
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    printf("%d", hap(N));
//    return 0;
//}

//함수3 자가진단4

//#include <math.h>
//int gop(int n)
//{
//    if (n <= 0) return 0;
//    return gop(n / 10) + pow(n%10,2);
//}
//
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    printf("%d", gop(N));
//    return 0;
//}

//함수3 자가진단5\

//int N, arr[101];
//void output()
//{
//    int i;
//    for (i = 1; i <= N; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//void dice(int step)
//{
//    arr[0] = 1;
//    int i;
//    if (step > N) {
//        output();
//        return;
//    }
//    
//        for (i = arr[step-1]; i <= 6; i++) {
//        
//            arr[step] = i;
//            dice(step + 1);
//        }
//}
//int main()
//{
//    scanf("%d", &N);
//    dice(1);
//    return 0;
//}

//함수3 자가진단6

//int arr[100] = { 0,1 };
//int fibo(int n)
//{
//    if (arr[n] == 0) arr[n] = fibo(n / 2) + fibo(n - 1);
//    return arr[n];
//}
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    printf("%d", fibo(N));
//    return 0;
//}

//함수3 형성평가1

//void num(int n)
//{
//    if (n < 1) return;
//    num(n / 2);
//    printf("%d ", n);
//}
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    num(N);
//    return 0;
//}

//함수3 형성평가2

//void num(int n)
//{
//    if (n < 1) return;
//    num(n - 2);
//    printf("%d ", n);
//}
//
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    num(N);
//    return 0;
//}

//함수3 형성평가3

//int N, M, arr[101];
//void output()
//{
//    int sum = 0;
//    int i;
//    for (i = 1; i <= N; i++)
//        sum += arr[i];
//    if (sum == M) {
//        for (i = 1; i <= N; i++) {
//            printf("%d ", arr[i]);
//        }
//        printf("\n");
//    }
//}
//void dice(int step)
//{
//    arr[0] = 1;
//    int i;
//    if (step > N) {
//        output();
//        return;
//    }
//
//    for (i = 1; i <= 6; i++) {
//
//        arr[step] = i;
//        dice(step + 1);
//    }
//}
//int main()
//{
//    scanf("%d %d", &N, &M);
//    output();
//    dice(1);
//    return 0;
//}

//함수3 형성평가4

//int arr[100] = { 0,1,2 };
//int fibo(int n)
//{
//    if (arr[n] == 0) arr[n] = (fibo(n - 1) * fibo(n - 2)) % 100;
//    return arr[n];
//
//}
//
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    printf("%d", fibo(N));
//    return 0;
//}

//함수3 형성평가5

//int count = 0;
//void num(int n)
//{
//    
//    if (n % 2 == 0) {
//        if (n == 1) return;
//        num(n / 2);
//        count++;
//
//    }
//    else {
//        if (n == 1) return;
//        num(n / 3);
//        count++;
//
//    }
//
//}
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    num(N);
//    printf("%d", count);
//    return 0;
//}

//함수3 형성평가6

//int gop(int n)
//{
//    int num;
//    num = n % 10;
//    if (n < 1) return 1; 
//    if (num == 0) num = 1;
//    return gop(n / 10) * (num);
//}
//
//int main()
//{
//    int gesan = 0;
//    int N, N2, N3;
//    scanf("%d %d %d", &N, &N2, &N3);
//    gesan = N * N2 * N3;
//    printf("%d", gop(gesan));
//    return 0;
//}

//문자열 자가진단1

//int main()
//{
//    int n;
//    while (1) {
//        printf("ASCII code =? ");
//        scanf(" %d", &n);
//        if (n < 33 || n>127) break;
//        printf("%c \n", n);
//
//    }
//    return 0;
//}

//문자열 자가진단2

//int main()
//{
//    char str[50];
//    scanf("%s", str);
//
//    printf("%s%s", str, str);
//}

//문자열 자가진단3

//int main()
//{
//    int i;
//    char str[20] = "Hong Gil Dong";
//    for (i = 3; i < 7; i++) {
//        printf("%c", str[i]);
//    }
//}

//문자열 자가진단4

//#include <string.h>
//int main()
//{
//    int len, i, num;
//    char str[50];
//    scanf("%s %d", str, &num);
//    len = strlen(str);
//
//    if (num > len) num = len;
//    for (i = len - 1; i >= num-1; i--) {
//        printf("%c", str[i]);
//     }
//}

//문자열 자가진단5

//#include <string.h>
//
//int main()
//{
//    int len, len2;
//    char str[50];
//    char str2[50];
//
//    scanf(" %s %s", str, str2);
//    len = strlen(str);
//    len2 = strlen(str2);
//
//    printf("%d", len + len2);
//}

//문자열 자가진단6

//#include <ctype.h>
//int main()
//{
//    char ch;
//    while (1) {
//        ch = getchar();
//        getchar();
//        if (isalpha(ch)) {
//            printf("%c \n", ch);
//        }
//        else if (isdigit(ch)) {
//            printf("%d \n", ch);
//        }
//        else if (!isalnum(ch)) break;
//      
//    }
//    return 0;
//}

//문자열 자가진단7

//#include <string.h>
//#include <ctype.h>
//int main()
//{
//    int i, len;
//    char st[101];
//    scanf("%s", st);
//    len = strlen(st);
//    for (i = 0; i < len; i++) {
//        if (isalpha(st[i])) {
//            printf("%c", toupper(st[i]));
//           
//        }
//        
//    }
//    return 0;
//}

//문자열 자가진단8

//#include <string.h>
//
//int main()
//{
//    int i, len;
//    char str[101];
//    int count = 0;
//
//    fgets(str, 101, stdin);
//    len = strlen(str);
//    for (i = 0; i < len; i++) {
//        if (str[i] == ' ')
//            count++;
//    }
//    printf("%d", count + 1);
//}

//문자열 자가진단9

//#include <string.h>
//int main()
//{
//    int i, j, len;
//    char word[50], tmp;
//    scanf("%s", word);
//    len = strlen(word);
//    for (i = 0; i < len; i++) {
//        tmp = word[len-1];
//        for (j = len -1; j >0; j--) {
//            word[j] = word[j - 1];
//        }
//        word[0] = tmp;
//        printf("%s \n", word);
//    }
//    return 0;
//}

//문자열 형성평가1

//#include <math.h>
//
//int main()
//{
//    char c, c2;
//    scanf(" %c %c", &c, &c2);
//
//    printf("%d %d", abs(c + c2), abs(c - c2));
//}

//문자열 형성평가2

//int main()
//{
//    char str[97];
//    int i;
//    scanf("%s", str);
//    for (i = 0; i < 5; i++) {
//        printf("%c", str[i]);
//
//    }
//}

//문자열 형성평가3

#include <ctype.h>
#include <string.h>
int main()
{
    int i, len;
    char str[102];
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        if (isalnum(str[i]))
            str[i] = tolower(str[i]);
        else str[i] = 0;

    }
    printf("%s", str);
}
