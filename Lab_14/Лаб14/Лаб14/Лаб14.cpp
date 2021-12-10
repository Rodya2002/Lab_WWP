////1
//#include <stdio.h>
//int main(){
// int a,b;
// printf("Введите первое число: ");
// scanf ("%i", &a);
// printf("Введите второе число: ");
// scanf ("%i", &b);
// int i,i2;
// for (i = a; i <= b; ++i){
// for (i2 = 1; i2 <= i; ++i2) printf("%i ",i);
// printf("\n");
//   }
// return 0;
//}

////2
//#include <stdio.h>
//int main(){
// int a,b;
// printf("Введите самый длинный отрезок: ");
// scanf ("%i", &a);
// printf("Введите длину короткого отрезка: ");
// scanf ("%i", &b);
// int f = a;
// while (f >= 0){
// f -= b;
//   }
// printf("%i\n ", f + b);
// return 0;
//}

////3
//#include <stdio.h>
//int main(){
// int n;
// printf("Введите число: ");
// scanf ("%i", &n);
// int k = 0, f = 0;
// while (f < n) {
// ++k;
// f += 3;
//   }
// printf("Наименьшее из целых чисел K, для которых сумма 1 + 2 + ... + K будет больше или равна N = %i\nСумма = %i\n", k, f);
// return 0;
//}

////4
//#include <stdio.h>
//int main(){
// float p;
// printf("Введите проценты: ");
// scanf ("%f", &p);
// int k = 1;
// float s = 1000;
// while (s <= 1100) {
// ++k;
// s += s * p / 100;
//   }
// printf("Kоличество месяцев = %i\nИтоговый размер вклада = %f\n", k, s);
// return 0;
//}

////5
//#include <stdio.h>
//int main(){
// int a,b;
// printf("Введите первое число: ");
// scanf("%i",&a);
// printf("Bведите второе число: ");
// scanf("%i",&b);
// while ((a != 0) & (b != 0)){
// if (a > b) a = a % b;
// else b = b % a;
//   }
// printf("%i\n",a + b);
// return 0;
//}

//6
#include <stdio.h>
int main() {
	int n;
	printf("Введите число Фибоначчи: ");
	scanf("%i", &n);
	int f = 0, f1 = 1, f2 = 1, k = 2;
	while (f < n) {
		++k;
		f = f2 + f1;
		f2 = f1;
		f1 = f;
	}
	printf("Порядковый номер числа Фибоначчи = %i\n", k);
	return 0;
}