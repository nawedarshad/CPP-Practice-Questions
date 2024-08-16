#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector <string> romanNumber(int num){
    vector <string> numRoman;
    int numDecimal[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000,3999};
    string numstr[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","DM","M"," "};
    for (int i = 13; i >= 0; --i){
        while(num>=numDecimal[i]){
                num -= numDecimal[i];
                numRoman.push_back(numstr[i]);  
        }        
    }
    return numRoman;
}
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter Decimal Number: ";
    cin>>num;
    vector <string> result = romanNumber(num);
    for (auto i = result.begin(); i < result.end(); i++)
    {
        cout<< *i;
    }
    return 0;
}
