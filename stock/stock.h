#ifndef STOCK_H_//��������� STOCK_H_��������Ϊ�� ����������
//#endif֮����������ݣ��������봦�� 
#define STOCK_H_//���� 

//�������� �����ڱ���Ԥ���� ��ڶ��еĺ궨����ϣ������ظ����� 

#include <string>

class Stock
{
	private:
		std::string company;
		//˫ð�ţ������ռ�����������
	/*
	�����ռ�
	namespace wenhui{
	   double pail;
	   void fetch();
	   in pal;
	   struct well{....} ;	
	} 
	namespace jiaxing{
	   double bucket(double n){......};
	   void fetch();
	   in pal;
	   struct hill{....} ;	
	} 	
    �÷���	
	using wenhui;
	using wenhui::fetch;
	std::string company;
	
	*/
		
		long shares;
		double share_val;
		double total_val;
		void set_tot(){total_val = shares * share_val;}
	// ˽�еķ���������ʵ���ˣ���һ���������� 
	//���ڵķ�����������������г�Ա 
	public:
		void acquire(const std::string &co,long n,double pr);
		void buy(long num,double price);
		void sell(long num,double price);
		void update(double price);
		void show();	
		};

#endif
