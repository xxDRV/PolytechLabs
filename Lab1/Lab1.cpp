#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    //1 Name
    cout << "Davletshin Damir Venerovich\n221-332\ngithub.com/xxDRV\n\n";
    
    //2 MaxMin i prochiy bred (Svoroval iz .cpp prepoda)
    cout << "minimal int = " << (int)0b10000000000000000000000000000000 << ", maximal int = " << (int)0b01111111111111111111111111111111 << ", size of int = " << sizeof(int) << endl;
    cout << "minimal unsigned int = " << (unsigned int)0 << ", maximal unsigned int = " << (unsigned int)0b11111111111111111111111111111111 << ", size of unsigned int = " << sizeof(unsigned int) << endl;
    cout << "minimal short = " << (short)0b1000000000000000 << ", maximal short = " << (short)0b0111111111111111 << ", size of short = " << sizeof(short) << endl;
    cout << "minimal unsigned short = " << (unsigned short)0 << ", maximal unsigned short = " << (unsigned short)0b1111111111111111 << ", size of unsigned short = " << sizeof(unsigned short) << endl;
    cout << "minimal long = " << (long)0b10000000000000000000000000000000 << ", maximal long = " << (long)0b01111111111111111111111111111111 << ", size of long = " << sizeof(long) << endl;
    cout << "minimal long long = " << (long long)0b1000000000000000000000000000000000000000000000000000000000000000 << ", maximal long long = " << (long long)0b0111111111111111111111111111111111111111111111111111111111111111 << ", size of long long = " << sizeof(long long) << endl;
    cout << "minimal double = -" << (double)0b1000000000000000000000000000000000000000000000000000000000000000 << ", maximal double = " << (double)0b0111111111111111111111111111111111111111111111111111111111111111 << ", size of double = " << sizeof(double) << endl;
    cout << "minimal char = " << (char)0b10000000 << ", maximal char = " << (char)0b01111111 << ", size of char = " << sizeof(char) << endl;
    cout << "minimal bool = " << (bool)0 << ", maximal bool = " << (bool)0b01111111 << ", size of bool = " << sizeof(bool) << endl << endl;
    
    //3 Zapros chisla
    cout << "Enter some number:" << endl;
    int bases;
    cin >> bases;
    int hhex = bases;
    //Otvet na chislo
    cout << "bin: " << bitset<16>(int(bases)) << endl;
    cout << "hex: ";
    cout << hex << hhex <<dec<< endl;
    cout << "bool: " << (bool)hhex << endl;
    cout << "double: " << (double)hhex << endl;
    cout << "char: " << (char)hhex << endl;
    
    //4 Uravnenie 
    cout << "Enter coeffs (a and b):" << endl;
    int a, b;
    double res;
    cin >> a>>b;
    cout << a << "*x=" << b << endl;
    cout << "x=" << b << "/" << a << endl;
    cout << "x=" << b / a << endl;
    res = b / a;
    cout << "Result: " << res << endl;
    
    //5 Ceredina otrezzzzzka
    cout << "Enter two points:" << endl;
    cin >> a >> b;
    double cent;
    cent = ((b - a) / 2.) + a;
    cout << "Center: " << cent << endl;
    return 0;
}


