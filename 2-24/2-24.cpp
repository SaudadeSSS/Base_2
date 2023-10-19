

#include <iostream>
using namespace std;

int main()
{
    char answer;
    cout << "现在正在下雨吗？"<<endl;
    cout << "请输入Y或者N" << endl;
    cin >> answer;
    while (1)
    {
        if (answer == 'N')
            cout << "现在正在下雨吗？" << endl;
        else
            cout << "现在没有下雨" << endl;
        break;

    }
    return 0;
}

