////1
//#include <stdio.h>
//void powerA3(float a, float *b) // * - указатель типа void функции не возвращает и не принимает переменных
//{
// *b=a*a*a;
//}
//int main(void)
//{
// int i;
// for(i = 1;i <= 5; ++i){
// float a;
// printf("Введите число: ");
// scanf("%f", &a);
// float b;
// powerA3(a, &b);
// printf("Третья степень = %.2f\n",b);
//    }
//    return 0;
//}

////2
//#include <stdio.h>
//int sign(float x){
//    if (x < 0){return -1;} if (x == 0){return 0;} if (x > 0){return 1;}
//    return 0;
//}
//int main(void){
//    float a,b;
//    printf("Введите первое число: ");
//    scanf("%f", &a);
//    printf("Bведите второе число: ");
//    scanf("%f", &b);
//    printf("Sign(A)+Sign(B) = %i\n",sign(a) + sign(b));
//
//    return 0;
//}

////3
//#include <stdio.h>
//float RingS(float r1, float r2){
//   return 3.14 * (r1 * r1 - r2 * r2);//s=piR^2
//}
//
//int main(void)
//{
//    int i;
//    for(i = 1; i <= 3; ++i){
//        float r1,r2;
//        printf("введите радиус большей окружности: ");
//        scanf("%f", &r1);
//        printf("введите радиус меньшей окружности: ");
//        scanf("%f", &r2);
//        printf("Площадь = %f\n", RingS(r1, r2));
//    }
//    return 0;
//}

////4
//#include <stdio.h>
//int Quarter(float x, float y){
//    if ((x > 0)&&(y > 0)){return 1;}
//    if ((x < 0)&&(y > 0)){return 2;}
//    if ((x < 0)&&(y < 0)){return 3;}
//    if ((x > 0)&&(y < 0)){return 4;}
//    return 0;
//}
//int main(void){
//    int i;
//    for (i = 1; i <= 3; ++i){
//        float x,y;
//        printf("Введите координату X: ");
//        scanf("%f", &x);
//        printf("Введите координату Y: ");
//        scanf("%f", &y);
//        printf("Quarter = %i\n", Quarter(x,y));
//     }
//    return 0;
//}

//5
#include <stdio.h>
float Fact2(int n) {
    int f = 1;
    for (; n > 0; n -= 2) f *= n;
    return f;
}

int main(void)
{
    int i, n;
    for (i = 1; i <= 5; ++i) {
        printf("Введите число: ");
        scanf("%i", &n);
        printf("Двойной факториал = %f\n", Fact2(n));
    }
    return 0;
}