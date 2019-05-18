#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>	//格式化流 
#define WIDTH 15	//宏定义 
#define space setw(WIDTH)
#define NEWLINE "\r\n" //回车换行 
using namespace std;
void Login();
void adminLogin1();
void adminLogin2();
void teacherLogin1();
void teacherLogin2();
void studentLogin1();
void studentLogin2();
void threeLogin(string user);
int quryBuName(string name,string pwd,string user);
void add(string user);
void addInfo(string user);
void del(string user);
void update(string user);
void queryAll(string user);
void queryById(string user);
int byId(int id,string user);
void cPwd(string user);
int byName(string name,string user);
//开始菜单
void Login()
{
    cout<<"*******************"<<endl;
    cout<<"    1.我是管理员   "<<endl;
    cout<<"    2.我是老师     "<<endl;
    cout<<"    3.我是学生	  "<<endl;
	cout<<"    4.退出系统	  "<<endl;
	cout<<"*******************"<<endl;
    cout<<"请选择菜单项的数字（确认后将无法更改）:"<<endl;
    int chioce;
    cin>>chioce;
    switch(chioce)
    {
        case 1: 
        	adminLogin1();
            break;
        case 2:
            teacherLogin1();
            break;
        case 3:
            studentLogin1();
            break;
        case 4:
        	cout<<"系统退出！！！"<<endl;
			exit(0); 
        default:
        	cout<<"输入有误，系统异常退出！！！"<<endl; 
        	exit(1);
    }
}
//管理员菜单1级 
void adminLogin1()
{
    cout<<"*******************"<<endl;
    cout<<"      1.登录       "<<endl;
    cout<<"      2.退出       "<<endl;
    cout<<"*******************"<<endl;
    cout<<"请选择菜单项的数字:"<<endl;
    int chioce;
    cin>>chioce;
    switch(chioce)
    {
        case 1: 
        	threeLogin("admin");
        	adminLogin2(); 
            break;
        case 2:
        	cout<<"系统退出！！！"<<endl;
			exit(0); 
        default:
        	cout<<"输入有误，系统异常退出！！！"<<endl; 
        	exit(1);
    }
}

//管理员菜单2级
void adminLogin2()
{
	cout<<"*******************"<<endl;
	cout<<"      1.添加老师           "<<endl;
    cout<<"      2.删除老师           "<<endl;
	cout<<"      3.修改老师           "<<endl;
    cout<<"      4.全查老师           "<<endl;
    cout<<"      5.单查老师           "<<endl; 
	cout<<"      6.添加学生           "<<endl;
    cout<<"      7.删除学生           "<<endl;
	cout<<"      8.修改学生           "<<endl;
    cout<<"      9.全查学生           "<<endl;
	cout<<"      10.单查学生           "<<endl;	
    cout<<"      11.重置老师的密码     "<<endl;
    cout<<"      12.重置学生的密码    "<<endl;
    cout<<"      13.返回              "<<endl;
    cout<<"      14.退出              "<<endl; 
    cout<<"*******************"<<endl;
    cout<<"请选择菜单项的数字:"<<endl;
    int chioce;
    cin>>chioce;
    switch(chioce)
    {
        case 1: 
        	addInfo("teacher");
        	adminLogin2(); 
            break;
        case 2:
        	del("teacher");
        	adminLogin2();
			break;
        case 3:
        	update("teacher");
        	adminLogin2();
        	break;
        case 4:
        	queryAll("teacher");
        	adminLogin2();
        	break;
        case 5:
        	queryById("teacher");
        	adminLogin2();
        	break;
        case 6:
        	addInfo("student");
        	adminLogin2();
        	break;
        case 7:
        	del("student");
        	adminLogin2();
        	break;			
        case 8:
        	update("student");
        	adminLogin2();
        	break;
        case 9:
        	queryAll("student");
        	adminLogin2();
        	break;
        case 10:
       		queryById("student");
       		adminLogin2();
       		break;
        case 11:
        	cPwd("teacher");
        	adminLogin2();
        	break;
         case 12:
        	cPwd("student");
        	adminLogin2();
        	break;       
        case 13:
        	adminLogin1(); 
        	break;											        
        case 14:
        	cout<<"系统退出！！！"<<endl;
			exit(0); 
        default:
        	cout<<"输入有误，系统异常退出！！！"<<endl; 
        	exit(1);
    }
}

//老师菜单1级 
void teacherLogin1()
{
	cout<<"*******************"<<endl;
    cout<<"      1.登录"       <<endl;
    cout<<"      2.注册"	   <<endl; 
    cout<<"      3.退出"       <<endl;
    cout<<"*******************"<<endl;
    cout<<"请选择菜单项的数字:"<<endl;
    int chioce;
    cin>>chioce;
    string user;
    switch(chioce)
    {
        case 1:
        	threeLogin("teacher");
        	teacherLogin2();
            break;
        case 2:
        	add("teacher");
        	break;
        case 3:
        	cout<<"系统退出！！！"<<endl;
			exit(0); 
        default:
        	cout<<"输入有误，系统异常退出！！！"<<endl; 
        	exit(1);
    }
}

//老师菜单2级
void teacherLogin2()
{
	cout<<"*******************"<<endl;
	cout<<"      1.添加学生   "<<endl;
	cout<<"      2.删除学生   "<<endl;
	cout<<"      3.修改学生   "<<endl;
    cout<<"      4.全查学生   "<<endl;
    cout<<"      5.单查学生   "<<endl;
	cout<<"      6.注册老师   "<<endl;	
    cout<<"      7.返回       "<<endl;
    cout<<"      8.退出       "<<endl;
    cout<<"*******************"<<endl;
    cout<<"请选择菜单项的数字:"<<endl;
    int chioce;
    cin>>chioce;
    switch(chioce)
    {
        case 1:
        	addInfo("student");
        	teacherLogin2();
        	break;
        case 2:
        	del("student");
        	teacherLogin2();
        	break;			
        case 3:
        	update("student");
        	teacherLogin2();
        	break;
        case 4:
        	queryAll("student");
        	teacherLogin2();
        	break;
        case 5:
        	queryById("student");
        	teacherLogin2();
        	break;
		case 6:
        	addInfo("teacher");
        	teacherLogin2();
        case 7:
        	teacherLogin1(); 
        	break;											        
        case 8:
        	cout<<"系统退出！！！"<<endl;
			exit(0); 
        default:
        	cout<<"输入有误，系统异常退出！！！"<<endl; 
        	exit(1);
    }
}

//学生菜单1级 
void studentLogin1()
{
    cout<<"*******************"<<endl;
    cout<<"       1.登录      "<<endl;
    cout<<"       2.注册      "<<endl;
    cout<<"       3.退出      "<<endl;
    cout<<"*******************"<<endl;
    cout<<"请选择菜单项的数字:"<<endl;
    int chioce;
    cin>>chioce;
    switch(chioce)
    {
        case 1: 
        	threeLogin("student");
        	studentLogin2();
            break;
        case 2:
        	add("student");
        	break;
        case 3:
        	cout<<"系统退出！！！"<<endl;
			exit(0); 
        default:
        	cout<<"输入有误，系统异常退出！！！"<<endl; 
        	exit(1);
    }
}

//二级学生菜单
void studentLogin2()
{
    cout<<"*******************"<<endl;
    cout<<"       1.注册学生  "<<endl;
    cout<<"       2.查询信息  "<<endl;
    cout<<"       3.返回      "<<endl; 
    cout<<"       4.退出      "<<endl;
    cout<<"*******************"<<endl;
    cout<<"请选择菜单项的数字:"<<endl;
    int chioce;
    cin>>chioce;
    switch(chioce)
    {
        case 1: 
			addInfo("student");
			studentLogin2(); 
            break;
        case 2:
        	queryAll("student");
        	studentLogin2();
        	break;
        case 3:
			studentLogin1();
			break; 
        case 4:
        	cout<<"系统退出！！！"<<endl;
			exit(0); 
        default:
        	cout<<"输入有误，系统异常退出！！！"<<endl; 
        	exit(1);
    }	
}

//三次登陆
void threeLogin(string user)
{
    string name;
    string pwd;     //密码
    for(int i=0;i<3;i++)
    {
        cout<<"请输入用户名和密码："<<endl;
        cin>>name>>pwd;
        int stat=quryBuName(name,pwd,user);
        if(stat>=0)
		{
			cout<<"登陆成功！  "<<endl;
			break;
		}
		else
		{
			if(i==2)
				cout<<"输入次数过多，系统退出"<<endl;
			else
				cout<<"输入的密码错误或用户名错误，请重新输入"<<endl;
		} 

    }
}

int quryBuName(string name,string pwd,string user)
{
	ifstream in;
	if(user=="admin")
		in.open("aLogin.txt",ios::in|ios::binary);//\r\n   //二进制的输入或输出 
	if(user=="teacher")
		in.open("tLogin.txt",ios::in|ios::binary);//\r\n   //二进制的输入或输出 
	if(user=="student")
		in.open("sLogin.txt",ios::in|ios::binary);//\r\n   //二进制的输入或输出 
	if(!in.is_open())
	{
		cout<<"缺少重要文件，请重新下载!"<<endl;
		exit(0); 
	} 
	else
	{
		stringstream ss;
		while(in.peek()!=EOF)
		{
			int stat=in.tellg();	//指针所指的位置 
			string line;
			getline(in,line);
			ss<<line;
			string curname,curpwd;
			ss>>curname>>curpwd;
			if(curname==name&&curpwd==pwd)
			{
				return stat;
			}
			ss.str("");		//字符串初始化 
		}
		in.close();
		
	}
	return -1;
}

//注册 
void add(string user)
{
	ofstream out;
	if(user=="teacher")
		out.open("tLogin.txt",ios::app);
	if(user=="student")
		out.open("sLogin.txt",ios::app);
	if(!out.is_open())
	{
		cerr<<"缺少重要文件，请重新下载!"<<endl;
		exit(1);
	}
	else
	{
		string name,pwd;
		cout<<"请输入用户名和密码："<<endl;
		cin>>name>>pwd;
		out.setf(ios::left);
		out<<space<<name<<space<<pwd<<endl;
		cout<<"注册成功!"<<endl;
	}
	out.close();
	cout<<"*******************"<<endl;
	cout<<"      1.返回       "<<endl;
	cout<<"      2.退出       "<<endl;
	cout<<"*******************"<<endl;
	cout<<"请选择菜单项的数字:"<<endl;
	int chioce;
    cin>>chioce;
    switch(chioce)
    {
        case 1:
        	if(user=="teacher")
        		teacherLogin1();
			else
				studentLogin1();	
            break;
        case 2:
        	cout<<"系统退出！！！"<<endl;
			exit(0);     
        default:
        	cout<<"输入有误，系统异常退出！！！"<<endl; 
        	exit(1);			
   }
}

//添加老师或学生信息
void addInfo(string user)
{
	ofstream out;
	if(user=="teacher")
		out.open("teacher.txt",ios::app);
	if(user=="student")
		out.open("student.txt",ios::app);
	if(!out.is_open())
	{
		cerr<<"缺少重要文件，请重新下载!"<<endl;
		exit(1);
	}
	else
	{
		int id;
		string name;
		int age;
		cout<<"请输入"<<user<<"的编号、姓名和年龄："<<endl;
		cin>>id>>name>>age;
		out.setf(ios::left);
		out<<space<<id<<space<<name<<space<<age<<NEWLINE;
		cout<<"添加成功!"<<endl;
	}
	out.close();
}

//删除老师或学生信息
void del(string user)
{
	int id;
	cout<<"请输入要删除的ID编号："<<endl;
	cin>>id;
	ifstream in;
	if(user=="teacher")
		in.open("teacher.txt",ios::in);
	else 
		in.open("student.txt",ios::in);
	if(!in.is_open())
	{
		cerr<<"缺少重要文件，请重新下载!"<<endl;
		exit(1);
	}
	else
	{
		string temp;	//声明的空间 
		stringstream ss;
		int curID;
		while(in.peek()!=EOF)	//end of file
		{
			string line;
			getline(in,line);
			ss<<line;
			ss>>curID;
			if(curID!=id)		//把ID不相等的放入temp空间，相当于删除curID 
			{
				temp+=line+NEWLINE;	 
			}
			ss.clear();
		}
		in.close();
		ofstream out;
		if(user=="teacher") 
			out.open("teacher.txt",ios::out);
		else
			out.open("student.txt",ios::out);
		if(!out.is_open())
		{ 
			cerr<<"缺少重要文件，请重新下载!"<<endl;
			exit(1);
		}
		else
		{
			out<<temp;
			out.close();
			cout<<"删除成功"<<endl; 
		}
	}
}

//修改老师或学生信息
void update(string user)
{
	int id;
	cout<<"请输入要修改的编号："<<endl;
	cin>>id;
	int stat=byId(id,user);
	if(stat==-1)
		return;
	string name;
	int age;
	cout<<"请输入"<<user<<"的姓名和年龄："<<endl;
	cin>>name>>age;
	stringstream infotemp;
	infotemp.setf(ios::left);
	infotemp<<space<<id<<space<<name<<space<<age;	// 流的格式化
	string line;
	getline(infotemp,line);
	fstream out;
	if(user=="teacher")
		out.open("teacher.txt",ios::in|ios::out|ios::binary);
	else
		out.open("student.txt",ios::in|ios::out|ios::binary);
	if(!out.is_open())
	{
		cerr<<"缺少重要文件，请重新下载!"<<endl;
		exit(1);
	}
	else
	{
		out.seekg(stat,ios::beg);
		out<<line;
		cout<<"修改后的信息为："<<endl;
		cout<<line<<endl;
		out.close();
	}
}
int byId(int id,string user)
{
	ifstream in;
	if(user=="tecaher")
		in.open("teacher.txt",ios::in|ios::binary);//\r\n   //二进制的输入或输出 
	else
		in.open("student.txt",ios::in|ios::binary);//\r\n   //二进制的输入或输出 
	if(!in.is_open())
	{
		cerr<<"缺少重要文件，请重新下载!"<<endl;
		exit(1);
	} 
	else
	{
		stringstream ss;
		while(in.peek()!=EOF)
		{
			int stat=in.tellg();	//指针所指的位置 
			string line;
			getline(in,line);
			ss<<line;
			int curId;
			ss>>curId;
			if(curId==id)
			{
				return stat;
			}
			ss.str("");		//字符串初始化 
		}
		cout<<"id不存在！"<<endl;
		in.close();
		
	}
	return -1;
}

//跟据ID查询老师或学生信息
void queryById(string user)
{
	int crid;	//输进来的ID
	cout<<"请输入要查询的编号："<<endl;
	cin>>crid;
	int stat=byId(crid,user);
	string line;
	fstream in;
	if(user=="teacher")
		in.open("teacher.txt",ios::in|ios::binary);
	else
		in.open("student.txt",ios::in|ios::binary);
	in.seekg(stat,ios::beg);	// ios::beg 流的位置
	getline(in,line);
	cout.setf(ios::left);
	cout<<space<<"id"<<space<<"name"<<space<<"age"<<endl;
	stringstream ss;	//字符串的流 
	ss<<line;
	int id;
	string name;
	int age;
	ss>>id>>name>>age;
	cout<<space<<id<<space<<name<<space<<age<<endl;
	ss.clear();		//清空字符串 
	in.close();
	 
}
//查询老师或学生信息
void  queryAll(string user)
{
	ifstream in;
	if(user=="teacher")
		in.open("teacher.txt",ios::in);
	else
		in.open("student.txt",ios::in);
	if(!in.is_open())
	{
		cerr<<"缺少重要文件，请重新下载!"<<endl;
		exit(1);
	} 
	else
	{
		stringstream ss;	//字符串的流 
		string line;
		cout.setf(ios::left);	//从左往右读
		cout<<space<<"id"<<space<<"name"<<space<<"age"<<endl;
		while(in.peek()!=EOF)	//end of file
		{
			getline(in,line);
			ss<<line;
			int id;
			string name;
			int age;
			ss>>id>>name>>age;
			cout<<space<<id<<space<<name<<space<<age<<endl;
			ss.clear();		//清空字符串 
		} 
		in.close(); 
	}
}

//重置密码
void cPwd(string user)
{
	string name;
	cout<<"请输入"<<user<<"的账户名："<<endl;
	cin>>name;
	int stat=byName(name,user);
	if(stat==-1)
		return;
	string pwd="000000";
	stringstream infotemp;
	infotemp.setf(ios::left);
	infotemp<<space<<name<<space<<pwd;	// 流的格式化
	string line;
	getline(infotemp,line);
	fstream out;
	if(user=="teacher")
		out.open("tLogin.txt",ios::in|ios::out|ios::binary);
	else
		out.open("sLogin.txt",ios::in|ios::out|ios::binary);
	if(!out.is_open())
	{
		cerr<<"缺少重要文件，请重新下载!"<<endl;
		exit(1);		
	}
	else
	{
		out.seekg(stat,ios::beg);
		out<<line;
		cout<<"重置为(000000)"<<endl;
		out.close();
	}
 
 }
int byName(string name,string user)
{
	ifstream in;
	if(user=="teacher")
		in.open("tLogin.txt",ios::in|ios::binary);//\r\n   //二进制的输入或输出 
	else
		in.open("sLogin.txt",ios::in|ios::binary);//\r\n   //二进制的输入或输出 
	if(!in.is_open())
	{
		cerr<<"缺少重要文件，请重新下载!"<<endl;
		exit(1);		
	} 
	else
	{
		stringstream ss;
		while(in.peek()!=EOF)
		{
			int stat=in.tellg();	//指针所指的位置 
			string line;
			getline(in,line);
			ss<<line;
			string curName;
			ss>>curName;
			if(curName==name)
			{
				return stat;
			}
			ss.str("");		//字符串初始化 
		}
		cout<<"信息不存在！"<<endl;
		in.close();
		
	}
	return -1;
}
int main()
{
	Login();	//开始菜单
}
