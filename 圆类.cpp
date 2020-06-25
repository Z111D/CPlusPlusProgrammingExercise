#include<iostream>
using namespace std;

class Circle
{
private:
    double rad;
    double area;
    
friend istream& operator>>(istream&in, Circle &cl);       //����>>ΪCircle�����Ԫ����
friend ostream& operator<<(ostream&out, Circle &cl);        //����<<ΪCircle�����Ԫ����
public:
    Circle(double r=0)
    {
        rad=r;
        area=3.14*r*r;
    }
    double operator-(Circle &cl)//���ؼ���
    {
        return this->area-cl.area;//��������Բ�������
    }
};
istream& operator>>(istream&in, Circle &cl)
{
    cin >> cl.rad;   //������������ȡ���ݸ�Բ�İ뾶
    cl.area=3.14*cl.rad*cl.rad;
    return in;
}
ostream& operator<<(ostream&out, Circle &cl)
{
    out<<"rad="<< cl.rad;    //���Բ�İ뾶����������磺rad=10 area=314
    return out;
}

int main()
{
    Circle c1,c2;
    cin>>c1>>c2;
    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c2-c1<<endl;
    return 0;
}
