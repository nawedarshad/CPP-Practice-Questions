#include <iostream>
#include <climits>
using namespace std;
struct Height{
    int feet;
    int inch;
};

int maxStruct(Height ppls[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        if (((ppls[i].feet*12) + ppls[i].inch) > max)
        {
            max = ((ppls[i].feet*12) + ppls[i].inch);
        } 
    }
    return max; 
}

int main(int argc, char const *argv[]){
    Height ppls[] = {
        {3,10}, {5,4}, {5,11}, {3,11}
    };
    cout<<maxStruct(ppls, 4)<<" Inches";
    return 0;
}





