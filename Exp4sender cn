#include <iostream>
using namespace std; n   
    int frame1[20], frame2[40];
    int i, j = 0, counter = 0, n;

    cout << "Enter the size of the frame: ";
    cin >> n;

    cout << "Enter the bits of the frame: ";
    for (i = 0; i < n; i++)
    {
        cin >> frame1[i];
    }

    for (i = 0; i < n; i++)
    {
        if (frame1[i] == 1)
        {
            counter++;
            frame2[j] = frame1[i];
            j++;

            if (counter == 5)
            {
                frame2[j] = 0;
                j++;
                counter = 0;
            }
        }
        else
        {
            frame2[j] = 0;
            j++;
            counter = 0;
        }
    }

    cout << "After bit stuffing: ";

    for (i = 0; i < j; i++)
    {
        cout << frame2[i] << " ";
    }

    return 0;
}

