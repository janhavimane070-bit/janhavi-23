#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n;
    int frame = 1;

    
    cout << "Stop and Wait ARQ Protocol" << endl;
    cout << "---------------------------" << endl;

    
    srand(time(0));
    n = rand() % 10 + 1;

    cout << "Total number of frames to be transmitted: " << n << endl;
    cout << endl;

    
    while (frame <= n)
    {
        
        cout << "Sending Frame " << frame << "..." << endl;

        
        int ack = rand() % 2;

        if (ack == 1)
        {
        
            cout << "Acknowledgement received for Frame "
                 << frame << endl;

            
            cout << "Remaining frames: " << n - frame << endl;
            cout << endl;

            
            frame++;
        }
        else
        {
            
            cout << "Acknowledgement NOT received for Frame "
                 << frame << endl;

            cout << "Retransmitting Frame " << frame << "..." << endl;
            cout << endl;

            
        }
    }

    
    cout << "All frames transmitted successfully." << endl;
    cout << "Program stopped." << endl;

    return 0;
}
