#include <iostream>
#include <queue>
using namespace std;
void search_numbers_div_2_3_5() {
    double max_num;
    double c = 0;
    double min_num = 0;
    double trig;
    int count;
    cout << "Enter some num with 2 3 or 5 multiplier: ";
    cin >> count;
    queue <double>  q2;
    queue <double>  q3;
    queue <double>  q5;
    q2.push(2);
    q3.push(3);
    q5.push(5);
    while (count != 0){
        min_num=min(q2.front(), q3.front());
        min_num = min(min_num, q5.front());
        c++;
        cout << min_num<<' ';
        q2.push(min_num * 2);
        q3.push(min_num * 3);
        q5.push(min_num * 5);
        if (q2.front() == min_num) {
            q2.pop();
        }
        if (q3.front() == min_num) {
            q3.pop();
        }
        if (q5.front() == min_num) {
            q5.pop();
        }
        count--;
    }
}
int main() {
    search_numbers_div_2_3_5();
}
