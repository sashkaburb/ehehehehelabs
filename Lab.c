#include "Lab.h"
int lab1() {

    
 float V; // основной объем
 float v1; //вытекает
 float v2; //поступает
 float t;

printf ("Введите общий объем бассейна V = "); //функция выдающая надпись
scanf ("%f", &V); //функция считывающая данные с клавиатуры

printf ("Введите скорость поступления воды v1 = ");
scanf ("%f", &v1);

printf("Введите скорость оттока воды v2 = ");
scanf ("%f", &v2);

if (v2<v1)

{

puts ("Вода должна вытекать быстрее, чем поступать"); //функция выдающая надпись с новой строки

printf ("Введите скорость поступления воды v1 = ");
scanf ("%f", &v1);

printf("Введите скорость оттока воды v2 = ");
scanf ("%f", &v2);

t = V/(v2-v1);

printf ("время = %f\n", t);
    
    return 0;

}

else

    {
        
t = V/(v2-v1);

printf ("время = %f\n", t);
    
    return 0;
    }
}
int lab2() {
    float s,i,a,N;
    printf ("Введите число ряда N =");
    scanf("%f",&N);
    s=0;
    i=0;
    a=1;
    
    while(i<N)
    {
        a=a*((1+2*i)/(1+3*i));
        s=s+a;
        i=i+1;
    }
    printf("сумма=%f\n",s);

    return 0;
}
int lab3() {
    char stroka[100];
    int i = 0;
    int z = 0;//количество символов в текущем слове
    int m = 0;//количество слов
    int sum = 0;//сумма длин всех слов
    char c;
    printf("Введите строку ");
    c = getchar ();
    while ((c = getchar()) != '\n') {
            stroka[i++] = c;
    }
    stroka[i] = '\0';// Завершаем строку нулевым символом
    char *y = stroka;
    // Подсчет средней длины слова
    while(1) {
        if(*y == ' ' || *y == '\0') {
            sum+=z;
            m++;
            if(*y == '\0')break;
            z = 0;
        }
        y++;
        z++;
    }
    printf("%d" , (sum-m+1)/m);// Возвращаем среднюю длину слова
    return 0;
}
int lab4() {
 return 0;
}

int lab5(){
    
    {
    int a[10];
 
    int n;
 
    printf("N: ");
    scanf("%i",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
 
    int min=0,max=0;
 
    for (i=n-1; i>=0; --i){
        if (a[i]>a[max]) max=i;
        if (a[i]<a[min]) min=i;
    }
 
    if (max<min) {
        max+=min;
        min=max-min;
        max=max-min;
    }
 
    for (i=min+1; i<min+(max-min); ++i) a[i]=0;
 
    printf("A: \n");
    for (i=0; i<n; ++i) printf("  %i: %i\n",i+1,a[i]);
 
    return 0;
}
}


int lab6() {
    int N,K;
printf("введите число строк N=");
scanf("%i",&N);
printf("введите число столбцов K=");
scanf("%i",&K);
int x[N][K]; // массив N на K элементов

int i, j;
printf("введите элементы массива");
printf("\n");
// ввод элементов массива
for( i = 0; i < N; i++ )
 for( j = 0; j < K; j++ )
 scanf("%d", &x[i][j]);

 
// вывод массива
printf("массив:\n");
for( i = 0; i < N; i++ )
 { 
 for( j = 0; j < K; j++ )
 printf("%d ", x[i][j]);
 printf("\n");
 } 
 int r=x[0][1]-x[0][0];
    for (i=1; i<N ; ++i)
        for (j=1; j<K ; ++j){
            if (r!=x[i][j]-x[i][j-1]) {
            r=0;
        }
        if (r!=0)
        {
        printf("разность арифметической прогрессии =%i\n" , r);}
        else {printf ("нет арифметической прогрессии");}
return 0;
}
}

int lab7(){
    
{
int K;
int N;
 

printf("N = ");
scanf("%x", &N); // ввод в шестнадцатиричном 
 // формате


printf ("K = ");
scanf("%x", &K);

 N=(N<<K) | (N>>(32-K));
printf ("result= %x\n", N);

 
return 0;
}
}

