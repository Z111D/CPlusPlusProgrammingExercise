#include <iostream>
#include <string>
using namespace std;

/* ��Ĵ��뽫Ƕ������ */
void reverse_string(string &s)   // �β�s����ʵ��str�ı��� 
{
    int N = s.size();            // �� N = s.length(); 
    for (int i = 0; i < N / 2; i++)
    {
        char temp;
        temp = s[i];
        s[i] = s[N - i - 1]; 
        s[N - i - 1] = temp;
    }
} 

int main(int argc, char const *argv[])
{
    string str;
    getline(cin, str);		//�����ַ���
    reverse_string(str); 	//�����ַ���str
    cout << str << endl;	//����������ַ���
    return 0;
}
