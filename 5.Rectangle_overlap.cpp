#include <iostream>
using namespace std;
struct Rectangle{
    int top[2];
    int bottom[2];
};

bool doOverlap(Rectangle R1, Rectangle R2){
    if (R1.top[0] > R2.bottom[0] || R2.top[0] > R1.bottom[0]){
        return false;
    } if (R1.top[1] < R2.bottom[1] || R2.top[1] < R1.bottom[1]){
        return false;
    }
    return true;
}

int main(int argc, char const *argv[]){
    Rectangle R1 = {{0,2},{1,1}};
    Rectangle R2 = {{-2,0},{0,-3}};
    cout<<bool(doOverlap(R1,R2));
    return 0;
}

