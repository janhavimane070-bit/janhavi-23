#include <iostream>
#include <string>
using namespace std;

int main() {
string msg, divisor;

cout << "Enter message bits: ";
cin >> msg;

cout << "Enter divisor bits: ";
cin >> divisor;

int m = msg.length();
int n = divisor.length();

    
 string temp = msg + string(n - 1, '0');

    for (int i = 0; i <= temp.length() - n; i++) {
        if (temp[i] == '1') {
            for (int j = 0; j < n; j++) {
                temp[i + j] =
                    (temp[i + j] == divisor[j]) ? '0' : '1';
            }
        }
    }

    string crc = temp.substr(m, n - 1);

    string codeword = msg + crc;

   cout<<"\nMessage:"<<msg<<endl;
   cout<<"\nDivisor:"<<divisor<<endl;
   cout<<"\nCRC:"<<crc<<endl;
   cout<<"\nCodeword:"<<codeword<<endl;
return 0;
}
