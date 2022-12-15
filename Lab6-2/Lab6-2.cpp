#include <iostream>
#include<deque>
#include<string>
using namespace std;
string cin_line() {
    string s_value;
    cout << "Введите строку: " << endl;
    cin >> s_value;
    return s_value;
}
void check_s_palindrom(string value) {
    deque <char> deck1;
    for (int i = 0; i < value.size(); i++) {
        deck1.push_back(value[i]);
    }
    int c = 1;
    while (!deck1.empty()) {
        if (deck1.front() != deck1.back()) {
            c *= 0;
            break;
        }
        if (deck1.size() != 1) {
            deck1.pop_back();
            deck1.pop_front();
        }
        else {
            deck1.pop_front();
        }
    }
    if (c == 0) {
        cout << "no" << endl;
    }
    else {
        cout<< "yes" << endl;
    }

}
void Alg_Grah() {
    deque <double> M;
    deque <int> B;
    deque <int> C;
    int last_C;
    int j;
    double min_x = 100000;
    int k = 0;
    int l_x;
    int val;
    double x, y, x1, y1, x2, y2;
    cout << "введите кол-во точек";
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cout << "введите точки (x, y через пробел):";
        cin >> x >> y;
        if (x < min_x)
        {
            min_x = x;
            l_x = i;
        }
        M.emplace_back(x);
        M.emplace_back(y);
    }
    B.emplace_back(l_x);
    for (int i = 0; i < k; i++)
    {
        if (i != l_x)
        {
            B.emplace_back(i);
        }
    }
    x = M[B[0] * 2];
    y = M[B[0] * 2 + 1];
    for (int i = 2; i < B.size(); i++)
    {
        j = i;
        x1 = M[B[i - 1] * 2];
        y1 = M[B[i - 1] * 2 + 1];
        x2 = M[B[i] * 2];
        y2 = M[B[i] * 2 + 1];
        while ((j > 1) && (((x1 - x) * (y2 - y1) - (y1 - y) * (x2 - x1)) < 0))
        {
            val = B[j];
            B[j] = B[j - 1];
            B[j - 1] = val;
            j -= 1;
        }
    }
    C.emplace_back(B[0]);
    C.emplace_back(B[1]);
    last_C = 1;
    for (int i = 2; i < B.size(); i++)
    {
        x2 = M[B[0] * 2];
        y2 = M[B[0] * 2 + 1];
        x = M[C[last_C - 1] * 2];
        y = M[C[last_C - 1] * 2 + 1];
        x1 = M[C[last_C] * 2];
        y1 = M[C[last_C] * 2 + 1];
        while ((((x1 - x) * (y2 - y1)) - ((y1 - y) * (x2 - x1))) < 0)
        {
            C.pop_back();
            last_C -= 1;
        }
        C.emplace_back(B[i]);
        last_C += 1;
    }
    cout << "результат:"<< endl;
    for (int i = 0; i < C.size(); i++)
    {
        cout << M[C[i] * 2] << ' ' << M[C[i] * 2 + 1] << endl;
    }
    for (int i = 0; i < C.size(); i++)
    {
        C.pop_back();
    }
    for (int i = 0; i < M.size(); i++)
    {
        M.pop_back();
    }
    for (int i = 0; i < B.size(); i++)
    {
        B.pop_back();
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    string a = cin_line();
    check_s_palindrom(a);
    Alg_Grah();
    
}

