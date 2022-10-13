#include <iostream>

using namespace std;
void sort1(int mas,int num) {
    int helpnum;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num-i-1; j++)
        {
            if (mas[j] > mas[j + 1]) {
                helpnum = mas[j + 1];
                mas[j + 1] = mas[j];
                mas[j] = helpnum;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << mas[i] << ' ';
    }
}
void sort2(char mas, int num) {
    int mass[int('z')+1] = {0};//подсчет кол-вa
    for (int i = 0; i < num; i++)
    {
        for (int j = int('a'); j <= 'z'; j++)
        {
            if (int(mas[i]) == j) {//подсчет кол-ва
                mass[j] += 1;
                break;
            }
        }

    }
    for (int i = int('a'); i <= int('z'); i++)
    {
        for (int j = mass[i]; j>0 ; j--)
        {
            cout << char(i) << " ";
        }
    }
}
void sort3(int arr, int size) {
    int left_size = size / 2;
    int right_size = size - left_size;
    if (size>1)
    {
        sort3(&arr[0], left_size);
        sort3(&arr[left_size], right_size);
    }
    int arr2[1000];
    int cnt, lcnt, rcnt;
    rcnt = left_size;
    cnt = lcnt = 0;
    while ((lcnt < left_size) or (rcnt < size))
    {
        if (arr[lcnt] < arr[rcnt]) {
            arr2[cnt++] = arr[lcnt++];
        }
        else
        {
            arr2[cnt++] = arr[rcnt++];
        }
        if (lcnt == left_size) {
            for (int i = rcnt; i < size; i++)
            {
                arr2[cnt++] = arr[i];
            }
            break;
        }
        if (rcnt == size) {
            for (int i = lcnt; i < left_size; i++)
            {
                arr2[cnt++] = arr[i];
            }
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr2[i];
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int sort_num;
    int ct_mas;
    cout << "1.Сортировка пузырьком\n2.Сортировка подсчетом\n3.Сортировка объединением\n"<<endl;
    cin >> sort_num;
    switch (sort_num)
    {
    case 1:
    {cout << "Введите количество элементов массива: ";
    cin >> ct_mas;
    int arr[1000] = {0}; //объявление динамического массива
    cout << "Введите значения для массива: \n";
    for (int i = 0; i < ct_mas; i++)
    {
        cin >> arr[i];
    }
    sort1(arr, ct_mas); }
    break;
    case 2:
    {cout << "Введите количество элементов массива: ";
        cin >> ct_mas;
        char arr1[1000] = {0}; //динамический массив только уже символьного типа
        cout << "Введите значения для массива: \n";
        for (int i = 0; i < ct_mas; i++)
        {
            cin >> arr1[i];
        }
        sort2(arr1, ct_mas); // передаю функции указатель на массив и число элементов массива
    }
            break;
    case 3:
    {cout << "Введите количество элементов массива: ";
    cin >> ct_mas;
    int arr1[1000] = {0};
    cout << "Введите значения для массива: \n";
    for (int i = 0; i < ct_mas; i++)
    {
        cin >> arr1[i];
    }
    sort3(arr1, ct_mas);
    for (int i = 0; i < ct_mas; i++)
    {
        cout << arr1[i]<<" ";
    }
    break;
    
    }
        default:
            cout << "а куда?))))" << endl;
            break;

        
        
        
        
    }
    
    
    return 0;
            
}
