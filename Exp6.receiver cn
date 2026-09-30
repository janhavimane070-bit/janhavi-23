#include <iostream>
#include <string>
using namespace std;

int main()
{
    string codeword, divisor;

    cout << "Enter received codeword: ";
    cin >> codeword;

    cout << "Enter divisor bits: ";
    cin >> divisor;

    int n = divisor.length();

    string temp = codeword;

    for (int i = 0; i <= (int)temp.length() - n; i++)
    {
        if (temp[i] == '1')
        {
            for (int j = 0; j < n; j++)
            {
                if (temp[i + j] == divisor[j])
                    temp[i + j] = '0';
                else
                    temp[i + j] = '1';
            }
        }
    }

    string remainder = temp.substr(temp.length() - (n - 1));

    cout << "\nReceived Codeword : " << codeword << endl;
    cout << "Divisor           : " << divisor << endl;
    cout << "Remainder (CRC)   : " << remainder << endl;

    bool error = false;

    for (int i = 0; i < remainder.length(); i++)
    {
        if (remainder[i] == '1')
        {
            error = true;
            break;
        }
    }

    if (error)
    {
        cout << "Result            : Error Detected!" << endl;
    }
    else
    {
        cout << "Result            : No Error - Data Accepted!" << endl;
    }

    return 0;
}
