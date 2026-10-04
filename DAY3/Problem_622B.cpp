#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    //input
    int h;
    int m;
    int n;
    char colon;
    cin >> h >> colon >> m;
    cin >> n;

    //logic
    m=m+n;
    int i =0;
    while(m > 59){
        m = m-60;
        i++;
    }

    while(i >0){
        h=h+1;
        if(h >= 24){
            h = h - 24; 
        }
        i--;
    }

    //output
    cout << setfill('0') << setw(2) << h << colon 
         << setfill('0') << setw(2) << m << endl;
    return 0;
    
}