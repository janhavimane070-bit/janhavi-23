#include<iostream>
#include<string>
using namespace std;
string bitDestuffing(string input)
{
    string output = "";
    int counter = 0;

    for (int i = 0; i < input.length(); i++)
    {
        output += input[i];

        if (input[i] == '1')
        {
            counter++;

            if (counter == 5)
            {
                i++;          // Skip stuffed 0
                counter = 0;
            }
        }
        else
        {
            counter = 0;
        }
    }

    return output;
}

int main()
{
    string input;

    cout << "Enter Bit Stream: ";
    cin >> input;

    string destuffed = bitDestuffing(stuffed);
    cout << "Receiver Side (Destuffed Data): " << destuffed << endl;

    return 0;
}
