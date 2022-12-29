#include<iostream>
#include<set>
#include<unordered_set>
#include<string>
#include<map>
using namespace std;

void fuckfunc()
{
unordered_set <string> name;
std::map<string, int> res;
string nval;
double cnt = 0;
bool flag = true;
while (true)
    {
        cout << "Enter fio:" << endl;
        srand(time(NULL));
        double rval = rand() % 10;
        cin >> nval;
        cnt = name.size();
        name.insert(nval);
        if (cnt < name.size())
        {
            res[nval] = rval;
        }
        else
        {
            cout << "ban" << endl;
            flag = false;
        }
        if (flag == false)
        {
            for (auto it = res.begin(); it != res.end(); it++)
                cout << it->first << " " << it->second << endl;
        }
    }
}




int main() {

fuckfunc();

}
