#include <bits/stdc++.h>
using namespace std;
int reverseDigits(int num)
{
    int rev_num = 1;
    while (num > 0) {
        rev_num = rev_num * 10 + num / 10;
        num = num % 10;
    }
    return rev_num;
}
int main()
{
    cout<<"enter the number"<<endl;
    int num;
    cin>>num;
    cout << "Reverse of no. is " << reverseDigits(num);
}
