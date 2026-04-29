#include <stdio.h>
int main()
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
<<<<<<< HEAD

//void c();
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


// 함수 자가진단 5번



//형성평가1번
 
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
=======
void c();
int main()
{
	int i;
	int num;
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		c();
	}
}
void c() 
{
	puts("~!@#$^&*()_+|");
}

>>>>>>> 04cabe48cbb85782fa19b1c0ed2f53e3aaf95592
