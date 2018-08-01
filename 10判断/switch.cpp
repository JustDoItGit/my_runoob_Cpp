#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char grade = 'D';

    switch(grade)
    {
    case 'A' :
        cout << "很棒！" << endl;
        break;
    case 'B' :
    case 'C' :
        cout << "做的好" << endl;
    case 'D' :
        cout << "您通过了" << endl;
        break;
    case 'F' :
        cout << "您通过了" << endl;
        break;
    default :
        cout << "无效的成绩" << endl;
    }
    cout << "您的成绩是 " << grade << endl;
    return 0;
}