#include <iostream>
#include <vector>
using namespace std;

vector <long> binary(int num){
    vector <long> binary_string;
    while(num>0){
        binary_string.push_back(num%2);
        num /= 2;
    }  
    return binary_string;
}

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    vector <long> binary_string = binary(num);
    cout<<endl<<"Binary Representation: ";
    for (auto i = binary_string.rbegin(); i < binary_string.rend(); i++){
        cout<< *i;
    }
    
    return 0;
}
