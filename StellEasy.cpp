#include <iostream>
#include <cstring> 

using namespace std;

//1.переменные типы данных

//Задача 1.1
void task1_1() {
    int a, b;
    cout << "Введите два целых числа: ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b << endl;
}

//Задача 1.2
void task1_2() {
    double celsius;
    cout << "Введите температуру в градусах Цельсия: ";
    cin >> celsius;
    double fahrenheit = celsius * 9.0 / 5.0 + 32;
    cout << celsius << "°C = " << fahrenheit << "°F" << endl;
}

// 2.лог.операторы

//Задача 2.1
void task2_1() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " - четное число." << endl;
    }
    else {
        cout << number << " - нечетное число." << endl;
    }
}

//Задача 2.2
void task2_2() {
    int year;
    cout << "Введите год: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " - високосный год." << endl;
    }
    else {
        cout << year << " - не високосный год." << endl;
    }
}

//3.циклы

//Задача 3.1
void task3_1() {
    int N;
    cout << "Введите N: ";
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Сумма чисел от 1 до " << N << " равна " << sum << "." << endl;
}

//Задача 3.2
void task3_2() {
    int N;
    cout << "Введите число для таблицы умножения: ";
    cin >> N;

    for (int i = 1; i <= 10; i++) {
        cout << N << " x " << i << " = " << N * i << endl;
    }
}

//4.массивы

//Задача 4.1
void task4_1() {
    const int size = 10;
    int arr[size];

    cout << "Введите " << size << " целых чисел: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Минимальный элемент: " << min << endl;
}

//Задача 4.2
void task4_2() {
    const int rows = 3, cols = 3;
    int matrix[rows][cols];

    cout << "Введите матрицу 3x3:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        cout << "Сумма строки " << i + 1 << ": " << sum << endl;
    }
}

//5.функции

//Задача 5.1
int max(int a, int b) {
    return (a > b) ? a : b;
}

void task5_1() {
    int a, b;
    cout << "Введите два целых числа: ";
    cin >> a >> b;
    cout << "Наибольшее число: " << max(a, b) << endl;
}

//Задача 5.2
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void task5_2() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " - простое число." << endl;
    }
    else {
        cout << number << " - не простое число." << endl;
    }
}

//6.указатели

// Задача 6.1
void task6_1() {
    int a = 10, b = 20;
    cout << "До: a = " << a << ", b = " << b << endl;

    int* ptrA = &a;
    int* ptrB = &b;
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    cout << "После: a = " << a << ", b = " << b << endl;
}

//Задача 6.2
void task6_2() {
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };
    int sum = 0;

    int* ptr = arr;

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    cout << "Сумма элементов: " << sum << endl;
}

//7.строки

//Задача 7.1
void task7_1() {
    char str[100];
    cout << "Введите строку: ";
    cin.ignore(); // Очищаем буфер перед чтением строки
    cin.getline(str, 100);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    cout << "Длина строки \"" << str << "\" равна " << length << " символам." << endl;
}

//Задача 7.2
void task7_2() {
    char str[100];
    cout << "Введите строку: ";
    cin.ignore();
    cin.getline(str, 100);

    int vowels = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'а' || c == 'е' || c == 'ё' || c == 'и' || c == 'о' ||
            c == 'у' || c == 'ы' || c == 'э' || c == 'ю' || c == 'я') {
            vowels++;
        }
    }

    cout << "Количество гласных: " << vowels << endl;
}

//доп.задачи

//Задача 8.1
void task8_1() {
    const int size = 5;
    int arr[size];

    cout << "Введите " << size << " чисел: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / size;
    cout << "Среднее арифметическое: " << average << endl;
}

//Задача 8.2
void task8_2() {
    const int size = 5;
    int arr[size];

    cout << "Введите " << size << " чисел: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "Массив является палиндромом" << endl;
    }
    else {
        cout << "Массив не является палиндромом" << endl;
    }
}


int main() {
    setlocale(LC_ALL, "ru");

    task1_1();
    task1_2();

    task2_1();
    task2_2();

    task3_1();
    task3_2();

    task4_1();
    task4_2();

    task5_1();
    task5_2();

    task6_1();
    task6_2();

    task7_1();
    task7_2();

    task8_1();
    task8_2();

    return 0;
}