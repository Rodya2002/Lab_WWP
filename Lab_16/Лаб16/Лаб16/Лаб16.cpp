////1
//#include <stdio.h>
//int main(void){
// int a[100];
// int n, i = 1,i2 = 1;
// printf("Введите число: ");
// scanf("%i",&n);
// for (i = 0; i < n; ++i, i2 += 2)
// a[i] = i2;
// for (i = 0; i < n; ++i)
// printf("%i: %i\n", i, a[i]);
// return 0;
//}

////2
//#include <stdio.h>
//int main(void){
// int a[100];
// int d, n, i, mn;
// printf("Введите число: ");
// scanf("%i",&n);
// printf("Введите первый член геометрической прогрессии: ");
// scanf("%i",&a[0]);
// printf("Введите знаменатель геометрической прогресии: ");
// scanf("%i",&d);
// mn = 1;
// for (i = 1; i < n; ++i){
// mn *= d;
// a[i] = a[0] * mn;
//    }
// for (i=0; i<n; ++i)
// printf("%i : %i\n", i, a[i]);
// return 0;
//}

////3
//#include <stdio.h>
//int main(void){
// int a[100];
// int n, i;
// printf("введите размер массива: ");
// scanf("%i",&n);
// printf("Введите первый член массива: ");
// scanf("%i",&a[0]);
// printf("Введите второй член массива: ");
// scanf("%i",&a[1]);
// for (i = 2; i < n; ++i){
// a[i] = 0;
// int i2;
// for (i2 = 0; i2 < i; ++i2)
// a[i] += a[i2];
//    }
// for (i = 0; i < n; ++i)
// printf("%i : %i\n", i, a[i]);
// return 0;
//}

////4
//#include <stdio.h>
//int main(void){
// int a[100];
// int n, i;
// printf("введите размерность массива: ");
// scanf("%i", &n);
// for (i = 0; i < n; ++i){
// printf("a[%i] : ", i + 1);
// scanf("%i", &a[i]);
//    }
// for (i = 0; i < n/2; ++i){
// printf("%i\n", a[i]);
// printf("%i\n", a[n-i-1]);
//    }
// if (n%2 != 0 ) printf("%i\n", a[(n/2)]);
// return 0;
//}

//5
#include <stdio.h>
int main(void){
    int a[100];
    int n, i;
    printf("введите размерность массива: ");
    scanf("%i",&n);
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
    for (i = 0; i < n; i += 2)
        printf("%i\n", a[i]);
    for (i = n - (n % 2) - 1; i >= 1; i -= 2)
        printf("%i\n", a[i]);
 
    return 0;
}