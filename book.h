#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class book
{
private:
	string m_ISBN;			//图书主标识码ISBN
	string m_name;			//图书名
	string m_author;		//作者名
	string m_publisher;		//出版社名
	string m_ID;			//图书编号/条码
	int    m_time;			//出版日期
   	int    m_Total;   		//sum of books
    	int    m_left;    		// number of books unborrowed
public:
	book();
	~book();
	friend class manager;
	friend class reader;
//读取操作
	string GetISBN();		//获取书的ISBN码
	string GetName();		//获取书的名称
	string GetAuthor();		//获取书的作者名
	string GetPublisher();	//获取书的出版社名
	string GetID();			//获取图书ID
    	int    GetTotal();		//获取图书总数
    	int    GetLeft();		//获取图书剩余量
	int    GetTime();		//获取书的出版日期
//修改操作
	void SetPress(string publisher);
	void SetISBN(string ISBN);
	void SetName(string name);
	void SetAuthor(string author);
	void SetID(string ID);
	void SetTotal(int total);
	void SetLeft(int left);
	void SetTime(int time);

};
// 书名，作者，编号，ISBN,出版社，馆藏数，剩余数。
// 无图书分类
// 电子版本？？？
#endif // BOOK_H
