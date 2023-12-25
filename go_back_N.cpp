#include <bits/stdc++.h>
using namespace std;

int main()
{
    int no_of_frames;
    cout << "Enter the no of frames: ";
    cin >> no_of_frames;

    int window_size;
    cout << "Enter the window size: ";
    cin >> window_size;

    deque<int> frames;
    for (int i = 1; i <= no_of_frames; i++)
        frames.push_back(i);

    int no_of_transmissions = 0;

    int curr = 1;
    while (!frames.empty() && curr <= no_of_frames)
    {
        // simply printing the transmitted frame
        for (int i = curr; i < curr + window_size; i++)
        {
            if (i > no_of_frames)
            {
                cout << "No. of total transmissions is: " << no_of_transmissions << endl;
                return 0;
            }
            no_of_transmissions++;
            cout << "Frame: " << i << " Has been transmitted" << endl;
        }

        cout << "Please enter the last acknowlege recieved: ";
        int err;
        cin >> err;

        // removing those which are sucessfull (i.e. those frames which have their ack received)
        while (frames.front() != err + 1)
        {
            frames.pop_front();
        }
        curr = frames.front();
    }
    cout << "No. of total transmissions is: " << no_of_transmissions << endl;
    return 0;
}