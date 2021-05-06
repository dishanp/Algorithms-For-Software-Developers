#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
class String 
{
    char *str;
    int l;
    public:
    String()
    {
        str=0;
        l=0;
    }
    String(const char *s)
    {
        l=strlen(s);
        str=new char[l+1];
        strcpy(str,s);
    }
    friend String operator +(const String &,const String &);
    friend ostream & operator <<(ostream &,String &);
};
 String operator+(const String &s1,const String &s2)
 {
     String temp;
     temp.l=s1.l+s2.l;
     temp.str=new char[temp.l+1];
     strcpy(temp.str,s1.str);
     strcat(temp.str,s2.str);
     return temp;
 }
 ostream & operator <<(ostream &out,String &s)
 {
     out<<s.str<<endl;
     return(out);
 }
 int main()
 {
     String obj1("KIIT ");
     String obj2("UNIVERSITY");
     String obj3;
     obj3=obj1+obj2;
     cout<<obj3;
 }
 