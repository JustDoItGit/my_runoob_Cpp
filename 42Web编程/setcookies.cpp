#include <iostream>
using namespace std;

int main ()
{

    cout << "Set-Cookie:UserID=XYZ;\r\n";
    cout << "Set-Cookie:Password=XYZ123;\r\n";
    cout << "Set-Cookie:Domain=www.w3cschool.cc;\r\n";
    cout << "Set-Cookie:Path=/perl;\n";
    cout << "Content-type:text/html\r\n\r\n";

    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>CGI 中的 Cookies</title>\n";
    cout << "</head>\n";
    cout << "<body>\n";

    cout << "设置 cookies" << endl;

    cout << "<br/>\n";
    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}