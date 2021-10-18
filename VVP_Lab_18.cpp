#include <iostream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    vector <int> MasA;
    vector <int> MasB;
    vector <int> Razm;
    vector <float> Razm1;
    vector <int> Nech;
    vector <int> Obmen;
    vector <int> Poryadok;
    bool end = true, eb = true;
    int number, n, d, nech, min, max, c1, c2, value;
    float c, sum;
    while (end == true) {
        cout << "Выберите номер для проверки (Для выхода нажмите любую цифру, не являющуюся заданием):\n";
        cin >> number;
        if (number >= 1 and number <= 5) {
            switch (number)
            {
            case 1:
                system("cls");
                cout << "Вы просматриваете " << number << " задание...\n";
                cout << "Введите размер массива: ";
                cin >> n;
                if (n>0) {
                    MasA.reserve(n);
                    MasB.reserve(n);
                    cout << "Заполните первый массив: ";
                    for (int i = 0; i < n; i++) {
                        cin >> d;
                        MasA.push_back(d);
                    }
                    cout << "Заполните второй массив: ";
                    for (int i = 0; i < n; i++) {
                        cin >> d;
                        MasB.push_back(d);
                    }
                    for (int i = 0; i < n; i++) {
                        swap(MasA[i], MasB[i]);
                    }
                    cout << "массив А: { ";
                    for (int i = 0; i < n; i++) {
                        cout << MasA[i] << " ";
                    }
                    cout << "}\n";
                    cout << "массив B: { ";
                    for (int i = 0; i < n; i++) {
                        cout << MasB[i] << " ";
                    }
                    cout << "}\n";
                }
                else {
                    system("cls");
                    cout << "Ошибка ввода размерности массива!!!\n";
                }
                MasA.clear();
                MasB.clear();
                MasA.shrink_to_fit();
                MasB.shrink_to_fit();
                break;
            case 2:
                system("cls");
                cout << "Вы просматриваете " << number << " задание...\n";
                cout << "Введите размер массива А: ";
                cin >> n;
                if (n > 0) {
                    Razm.reserve(n);
                    cout << "Заполните массив: ";
                    for (int i = 0; i < n; i++) {
                        cin >> d;
                        Razm.push_back(d);
                    }
                    for (int i = 0; i < n; i++) {
                        c = 0;
                        sum = 0;
                        for (int j = 0; j <= i; j++) {
                            sum += Razm[j];
                            c += 1;
                        }
                        sum /= c;
                        Razm1.push_back(sum);
                    }
                    cout << "Итоговый массив: { ";
                    for (int i = 0; i < n; i++) {
                        cout << Razm1[i] << " ";
                    }
                    cout << "}\n";
                    Razm.clear();
                    Razm1.clear();
                    Razm.shrink_to_fit();
                    Razm1.shrink_to_fit();
                }
                else {
                    system("cls");
                    cout << "Ошибка ввода размера массива!\n";
                }
                break;
            case 3:
                system("cls");
                cout << "Вы просматриваете " << number << " задание...\n";
                cout << "Введите размер массива А: ";
                cin >> n;
                if (n > 0) {
                    cout << "Заполните массив: ";
                    nech = 0;
                    for (int i = 0; i < n; i++) {
                        cin >> d;
                        if (d % 2 == 1) {
                            nech = d;
                        }
                        Nech.push_back(d);
                    }
                    if (nech != 0) {
                        system("cls");
                        cout << "Начальный массив { ";
                            for (int i = 0; i < n; i++) {
                                cout << Nech[i] << " ";
                            }
                        cout << "}\n";
                        for (int i = 0; i < n; i++) {
                            if (Nech[i] % 2 == 1) {
                                Nech[i] += nech;
                            }
                        }
                        cout << "Нечётные элементы массива увеличились на " << nech << endl;
                        cout << "Массив после изменений: { ";
                        for (int i = 0; i < n; i++) {
                            cout << Nech[i] << " ";
                        }
                        cout << "}\n";
                    }
                    else {
                        system("cls");
                        cout << "Массив остался без изменений: { ";
                        for (int i = 0; i < n; i++) {
                            cout << Nech[i] << " ";
                        }
                        cout << "}\n";
                    }
                }
                else {
                    system("cls");
                    cout << "Вы ввели некорректные данные\n";
                }
                Nech.clear();
                Nech.shrink_to_fit();
                break;
            case 4:
                system("cls");
                cout << "Вы просматриваете " << number << " задание...\n";
                cout << "Введите размер массива А: ";
                cin >> n;
                if (n > 0) {
                    Obmen.reserve(n);
                    cout << "Заполните массив: ";
                    cin >> d;
                    Obmen.push_back(d);
                    c1 = 0;
                    c2 = 0;
                    min = d;
                    max = d;
                    for (int i = 0; i < n - 1; i++) {
                        cin >> d;
                        if (min >= d) {
                            min = d;
                            c1 = i + 1;
                        }
                        if (max < d) {
                            max = d;
                            c2 = i + 1;
                        }
                        Obmen.push_back(d);
                    }
                    if (c1!=c2) {
                        system("cls");
                        cout << "Начальный массив: { ";
                        for (int i = 0; i < n; i++) {
                            cout << Obmen[i] << " ";
                        }
                        cout << "}\n";
                        if (c1>c2) {
                            for (int i = c2 + 1; i < c1; i++) {
                                Obmen[i] = 0;
                            }
                        }
                        else if (c2>c1) {
                            for (int i = c1 + 1; i < c2; i++) {
                                Obmen[i] = 0;
                            }
                        }
                        cout << "Конечный массив: { ";
                        for (int i = 0; i < n; i++) {
                            cout << Obmen[i] << " ";
                        }
                        cout << "}\n";
                    }
                    else {
                        system("cls");
                        cout << "Изменений в массиве не происходило: { ";
                        for (int i = 0; i < n; i++) {
                            cout << Obmen[i] << " ";
                        }
                        cout << "}\n";
                    }
                }
                else {
                    system("cls");
                    cout << "Вы ввели не корректные данные...\n";
                }
                Obmen.clear();
                Obmen.shrink_to_fit();
                break;
            case 5:
                system("cls");
                cout << "Вы просматриваете " << number << " задание...\n";
                cout << "Введите размер массива А: ";
                cin >> n;
                if (n > 0) {
                    cout << "Введите упорядоченный массив, кроме первого элемента: ";
                    for (int i = 0; i < n; i++) {
                        cin >> d;
                        Poryadok.push_back(d);
                    }
                    for (int i = 1; i < n-1; i++) {
                        if (Poryadok[i] > Poryadok[i + 1]) {
                            cout << "Вы ввели некорректные данные в массив!!!\n";
                            eb = false;
                        }
                        if (eb == false) {
                            break;
                        }
                    }
                    if (eb == true and Poryadok[0] > Poryadok[1]) {
                        cout << "Начальный массив: { ";
                        for (int i = 0; i < n; i++) {
                            cout << Poryadok[i] << " ";
                        }
                        cout << "}\n";
                        for (int i = 0; i < n - 1; i++) {
                            if (Poryadok[i] > Poryadok[i+1]) {
                                value = Poryadok[i];
                                Poryadok[i] = Poryadok[i+1];
                                Poryadok[i + 1] = value;
                            }
                            else {
                                break;
                            }
                        }
                        cout << "}\n";
                        cout << "Рассортированный массив: { ";
                        for (int i = 0; i < n; i++) {
                            cout << Poryadok[i] << " ";
                        }
                        cout << "}\n";
                    }
                    else if (eb == true and Poryadok[0] == Poryadok[1]) {
                        cout << "Массив остался прежним: { ";
                        for (int i = 0; i < n; i++) {
                            cout << Poryadok[i] << " ";
                        }
                        cout << "}\n";
                    }
                    else if (eb == true and Poryadok[0] < Poryadok[1]) {
                        cout << "Массив был введён уже отсортированным!!!\n";
                    }
                }
                else {
                    system("cls");
                    cout << "Ввод некорректных данных!!!\n";
                }
                Poryadok.clear();
                Poryadok.shrink_to_fit();
                break;
            }
        }
    }
}