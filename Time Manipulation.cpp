#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    int h1=(int)s[0]-48;
    int h2=(int )s[1]-48;
    int h=(h1*10)+h2;
    h+=12;
    if(h>=24)
    h-=24;
    s[0]=(char)((h/10)+48);
    s[1]=(char)((h%10)+48);
    int n=s.size();
    s[n-1]='\0';
    s[n-2]='\0';
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
