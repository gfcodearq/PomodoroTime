// PomodoroTime.cpp 

#include <iostream>
#include <ctime>

using namespace std;


int main()
{
    int workTime, relaxTime, cycles;
    int countCycle = 0; //cuenta los ciclos tendria que verificar si terminaron el WorkTime y el RelaxTime
    bool finishWt = false; //cada ciclo se reinicia a false
    bool finishRt = false; //cada ciclo se reinicia a false
    double time = clock();
    int x = 0;
  
	cout<<"Define work time: ";
	cin>>workTime;
	
	relaxTime = 60 - workTime;
		
    while (x <= workTime)
    {
        if (clock() > (time + 1000))
        {
            time = clock();
            cout << x << endl;
            x++;
        }
    }
    cin.get();
}


