#include <iostream>
#include <vector>

using namespace std;

int main (){

    //input
    int n;
    cin >> n;

    //logic
    int min =0;
    int temp = n;
    while(temp > 0){
        for(int i =0; i<5; i++){
            temp = temp-1;
            if (temp>0){
                continue;
            }else{
                break;
            }
        }

        if(temp>0){
            for(int i =0; i<2; i++){
                temp = temp-1;
                min +=1;
                if(temp>0){
                    continue;
                }else{
                    break;
                }
            }
        }else{
            break;
        }
    }
    

    int max =0;
    while(n > 0){
        for(int i =0; i<2; i++){
            n = n-1;
            max +=1;
            if(n>0){
                continue;
            }else{
                break;
            }
        }

        if(n>0){
            for(int i =0; i<5; i++){
                n = n-1;
                if(n>0){
                    continue;
                }else{
                    break;
                }
            }
        }else{
            break;
        }
    }

    //output
    cout << min <<" " << max;
    return 0;  

}