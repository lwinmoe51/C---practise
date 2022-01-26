#include <iostream>
using namespace std;
int main (){
    int waitingPpl = 30.0;
    int busSeat = 50.0;
    int lastBusSeat = 50 - (waitingPpl%busSeat);
    cout<<lastBusSeat;
}