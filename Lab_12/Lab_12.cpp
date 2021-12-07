#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int Poryadk(int num1, int num2)
{
    switch (num1)
    {
        case 1:
            std::cout << "Первое";
            break;
        case 2:
            std::cout << "Второе";
            break;
        case 3:
            std::cout << "Третье";
            break;
        case 4:
            std::cout << "Четвертое";
            break;
        case 5:
            std::cout << "Пятое";
            break;
        case 6:
            std::cout << "Шестое";
            break;
        case 7:
            std::cout << "Седьмое";
            break;
        case 8:
            std::cout << "Восьмое";
            break;
        case 9:
            std::cout << "Девятое";
            break;
        case 10:
            std::cout << "Десятое";
            break;
        case 11:
            std::cout << "Одинадцатое";
            break;
        case 12:
            std::cout << "Двенадцатое";
            break;
        case 13:
            std::cout << "Тринадцатое";
            break;
        case 14:
            std::cout << "Четырнадцатое";
            break;
        case 15:
            std::cout << "Пятнадцатое";
            break;
        case 16:
            std::cout << "Шестнадцатое";
            break;
        case 17:
            std::cout << "Семнадцатое";
            break;
        case 18:
            std::cout << "Восемнадцатое";
            break;
        case 19:
            std::cout << "Девятнадцатое";
            break;
        case 20:
            std::cout << "Двадцатое";
            break;
        case 21:
            std::cout << "Двадцать первое";
            break;
        case 22:
            std::cout << "Двадцать второе";
            break;
        case 23:
            std::cout << "Двадцать трелье";
            break;
        case 24:
            std::cout << "Двадцать четвертое";
            break;
        case 25:
            std::cout << "Двадцать пятое";
            break;
        case 26:
            std::cout << "Двадцать шестое";
            break;
        case 27:
            std::cout << "Двадцать седьмое";
            break;
        case 28:
            std::cout << "Двадцать восьмое";
            break;
        case 29:
            std::cout << "Двадцать девятое";
            break;
        case 30:
            std::cout << "Тридцатое";
            break;
        case 31:
            std::cout << "Тридцать первое";
            break;
        default:
            std::cout << "Ошибка в воде числа!";
            break;
    }

    std::cout << " ";

    switch (num2)
    {
        case 1:
            std::cout << "января";
            break;
        case 2:
            std::cout << "февраль";
            break;
        case 3:
            std::cout << "марта";
            break;
        case 4:
            std::cout << "апреля";
            break;
        case 5:
            std::cout << "мая";
            break;
        case 6:
            std::cout << "июня";
            break;
        case 7:
            std::cout << "июля";
            break;
        case 8:
            std::cout << "августа";
            break;
        case 9:
            std::cout << "сентября";
            break;
        case 10:
            std::cout << "октября";
            break;
        case 11:
            std::cout << "ноября";
            break;
        case 12:
            std::cout << "декабря";
            break;
        default:
            std::cout << "Ошибка в воде месяца!";
            break;
    }

    std::cout << "\n";

    return 0;
}

int kolich(int num)
{

    switch (num)
    {
    case 10:
        std::cout << "Десять";
        break;
    case 11:
        std::cout << "Одинадцать";
        break;
    case 12:
        std::cout << "Двенадцать";
        break;
    case 13:
        std::cout << "Тринадцать";
        break;
    case 14:
        std::cout << "Четырнадцать";
        break;
    case 15:
        std::cout << "Пятнадцать";
        break;
    case 16:
        std::cout << "Шестнадцать";
        break;
    case 17:
        std::cout << "Семнадцать";
        break;
    case 18:
        std::cout << "Восемнадцать";
        break;
    case 19:
        std::cout << "Девятнадцать";
        break;
    case 20:
        std::cout << "Двадцать";
        break;
    case 21:
        std::cout << "Двадцать одно";
        break;
    case 22:
        std::cout << "Двадцать два";
        break;
    case 23:
        std::cout << "Двадцать три";
        break;
    case 24:
        std::cout << "Двадцать четыре";
        break;
    case 25:
        std::cout << "Двадцать пять";
        break;
    case 26:
        std::cout << "Двадцать шесть";
        break;
    case 27:
        std::cout << "Двадцать семь";
        break;
    case 28:
        std::cout << "Двадцать восемь";
        break;
    case 29:
        std::cout << "Двадцать девять";
        break;
    case 30:
        std::cout << "Тридцать";
        break;
    case 31:
        std::cout << "Тридцать одно";
        break;
    case 32:
        std::cout << "Тридцать два";
        break;
    case 33:
        std::cout << "Тридцать три";
        break;
    case 34:
        std::cout << "Тридцать четыре";
        break;
    case 35:
        std::cout << "Тридцать пять";
        break;
    case 36:
        std::cout << "Тридцать шесть";
        break;
    case 37:
        std::cout << "Тридцать семь";
        break;
    case 38:
        std::cout << "Тридцать восемь";
        break;
    case 39:
        std::cout << "Тридцать девять";
        break;
    case 40:
        std::cout << "Сорок";
        break;
    default:
        std::cout << "Ошибка в воде числа!";
        break;
    }

    if (num == 1 or num == 21 or num == 31)
        std::cout << " учебное издание";
    else if (1 < num < 21 or 21 < num < 31 or 31 < num)
        std::cout << " учебных изданий";

    return 0;
}

int one()
{
    int D, M;

    std::cout << "Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 \n(1 — январь, 2 — февраль и т. д.). Вывести дату в виде текста (например, «пятое января»).\n";
    std::cout << "Введите номер дня и месяца через пробел\n";

    std::cin >> D >> M;

    Poryadk(D, M);

    return 0;
}

int two()
{
    int N;
    char C;

    std::cout << "Введите исхдное направление робота «С» — север, «З» — запад, «Ю» — юг, «В» — восток и \nданную ему команду 0 — продолжать движение, 1 — поворот налево, -1 — поворот направо\n";
    std::cout << "Введите исходное направление робота и действие через пробел\n";
    std::cin >> C >> N;

    if (C == 'С')
    {
        if (N == 0)
        {
            std::cout << "Робот смотри  на север\n";
        }
        else if (N == 1)
        {
            std::cout << "Робот смотри  на запад\n";
        }
        else if (N == -1)
        {
            std::cout << "Робот смотри  на восток\n";
        }
    }
    else if (C == 'З')
    {
        if (N == 0)
        {
            std::cout << "Робот смотри  на запад\n";
        }
        else if (N == 1)
        {
            std::cout << "Робот смотри  на юг\n";
        }
        else if (N == -1)
        {
            std::cout << "Робот смотри  на север\n";
        }
    }
    else if (C == 'Ю')
    {
        if (N == 0)
        {
            std::cout << "Робот смотри  на юг\n";
        }
        else if (N == 1)
        {
            std::cout << "Робот смотри  на восток\n";
        }
        else if (N == -1)
        {
            std::cout << "Робот смотри  на запад\n";
        }
    }
    else if (C == 'В')
    {
        if (N == 0)
        {
            std::cout << "Робот смотри  на восток\n";
        }
        else if (N == 1)
        {
            std::cout << "Робот смотри  на север\n";
        }
        else if (N == -1)
        {
            std::cout << "Робот смотри  на юг\n";
        }
    }

    return 0;
}

int three()
{
    int Num;


    std::cout << "Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий».\n";
    std::cout << "Введите номер издания\n";

    std::cin >> Num;

    kolich(Num);

    return 0;
}

int four()
{
    int num;
    
    std::cout << "Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».\n";
    std::cout << "Введите число\n";
    std::cin >> num;

    switch (num/100)
    {
    case 1:
        std::cout << "Сто";
        break;
    case 2:
        std::cout << "Двести";
        break;
    case 3:
        std::cout << "Триста";
        break;
    case 4:
        std::cout << "Четыреста";
        break;
    case 5:
        std::cout << "Пятьсот";
        break;
    case 6:
        std::cout << "Шестьсот";
        break;
    case 7:
        std::cout << "Семьсот";
        break;
    case 8:
        std::cout << "Восемьсот";
        break;
    case 9:
        std::cout << "Девятьсот";
        break;
    default:
        std::cout << "Ошибка в воде числа!";
        break;
    }

    std::cout << " ";

    if (num % 100 > 19)
    {
        switch (num % 100 / 10)
        {
        case 2:
            std::cout << "двадцать";
            break;
        case 3:
            std::cout << "тридцать";
            break;
        case 4:
            std::cout << "сорок";
            break;
        case 5:
            std::cout << "пятьдесят";
            break;
        case 6:
            std::cout << "шестьдесят";
            break;
        case 7:
            std::cout << "семьдесят";
            break;
        case 8:
            std::cout << "восемьдесят";
            break;
        case 9:
            std::cout << "девяносто";
            break;
        default:
            std::cout << "Ошибка в воде числа!";
            break;
        }

        std::cout << " ";

        switch (num % 10)
        {
        case 1:
            std::cout << "один";
            break;
        case 2:
            std::cout << "два";
            break;
        case 3:
            std::cout << "три";
            break;
        case 4:
            std::cout << "яетыре";
            break;
        case 5:
            std::cout << "пять";
            break;
        case 6:
            std::cout << "шесть";
            break;
        case 7:
            std::cout << "семь";
            break;
        case 8:
            std::cout << "восемь";
            break;
        case 9:
            std::cout << "девять";
            break;
        default:
            std::cout << "Ошибка в воде числа!";
            break;
        }
        
    }
    else
    {
        switch (num % 100)
        {
        case 10:
            std::cout << "десять";
            break;
        case 11:
            std::cout << "одинадцать";
            break;
        case 12:
            std::cout << "двенадцать";
            break;
        case 13:
            std::cout << "тринадцать";
            break;
        case 14:
            std::cout << "четырнадцать";
            break;
        case 15:
            std::cout << "пятнадцать";
            break;
        case 16:
            std::cout << "шестнадвать";
            break;
        case 17:
            std::cout << "семнадцать";
            break;
        case 18:
            std::cout << "восемнадцать";
            break;
        case 19:
            std::cout << "девятнадцать";
            break;
        default:
            std::cout << "Ошибка в воде числа!";
            break;
        }
    }

    return 0;
}

int five()
{
    string colors[] = { "зеленой/ого", "красной/ого", "желтой/ого", "белой/ого", "черной/ого" };
    string animals[] = { "крысы", "быка", "тигра", "кролика", "дракона", "змеи", "лошади", "козла", "обезьяны","петуха", "собаки", "свиньи" };

    int year, a, b, c;
    std::cout << "В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».\n";
    std::cout << "Введите год\n";

    cin >> year;

    a = (year - 4) % 60;

    b = a / 12;
    c = a % 12;

    if (year == 0)
    {
        cout << "Год черной обезьяны" << endl;
    }
    else
    {
        cout << "Год " << colors[b] << " " << animals[c];
    }

    return 0;

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    one();
    two();
    three();
    four();
    five();

    return 0;
}