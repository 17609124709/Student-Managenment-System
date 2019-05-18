#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>	//��ʽ���� 
#define WIDTH 15	//�궨�� 
#define space setw(WIDTH)
#define NEWLINE "\r\n" //�س����� 
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
//��ʼ�˵�
void Login()
{
    cout<<"*******************"<<endl;
    cout<<"    1.���ǹ���Ա   "<<endl;
    cout<<"    2.������ʦ     "<<endl;
    cout<<"    3.����ѧ��	  "<<endl;
	cout<<"    4.�˳�ϵͳ	  "<<endl;
	cout<<"*******************"<<endl;
    cout<<"��ѡ��˵�������֣�ȷ�Ϻ��޷����ģ�:"<<endl;
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
        	cout<<"ϵͳ�˳�������"<<endl;
			exit(0); 
        default:
        	cout<<"��������ϵͳ�쳣�˳�������"<<endl; 
        	exit(1);
    }
}
//����Ա�˵�1�� 
void adminLogin1()
{
    cout<<"*******************"<<endl;
    cout<<"      1.��¼       "<<endl;
    cout<<"      2.�˳�       "<<endl;
    cout<<"*******************"<<endl;
    cout<<"��ѡ��˵��������:"<<endl;
    int chioce;
    cin>>chioce;
    switch(chioce)
    {
        case 1: 
        	threeLogin("admin");
        	adminLogin2(); 
            break;
        case 2:
        	cout<<"ϵͳ�˳�������"<<endl;
			exit(0); 
        default:
        	cout<<"��������ϵͳ�쳣�˳�������"<<endl; 
        	exit(1);
    }
}

//����Ա�˵�2��
void adminLogin2()
{
	cout<<"*******************"<<endl;
	cout<<"      1.�����ʦ           "<<endl;
    cout<<"      2.ɾ����ʦ           "<<endl;
	cout<<"      3.�޸���ʦ           "<<endl;
    cout<<"      4.ȫ����ʦ           "<<endl;
    cout<<"      5.������ʦ           "<<endl; 
	cout<<"      6.���ѧ��           "<<endl;
    cout<<"      7.ɾ��ѧ��           "<<endl;
	cout<<"      8.�޸�ѧ��           "<<endl;
    cout<<"      9.ȫ��ѧ��           "<<endl;
	cout<<"      10.����ѧ��           "<<endl;	
    cout<<"      11.������ʦ������     "<<endl;
    cout<<"      12.����ѧ��������    "<<endl;
    cout<<"      13.����              "<<endl;
    cout<<"      14.�˳�              "<<endl; 
    cout<<"*******************"<<endl;
    cout<<"��ѡ��˵��������:"<<endl;
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
        	cout<<"ϵͳ�˳�������"<<endl;
			exit(0); 
        default:
        	cout<<"��������ϵͳ�쳣�˳�������"<<endl; 
        	exit(1);
    }
}

//��ʦ�˵�1�� 
void teacherLogin1()
{
	cout<<"*******************"<<endl;
    cout<<"      1.��¼"       <<endl;
    cout<<"      2.ע��"	   <<endl; 
    cout<<"      3.�˳�"       <<endl;
    cout<<"*******************"<<endl;
    cout<<"��ѡ��˵��������:"<<endl;
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
        	cout<<"ϵͳ�˳�������"<<endl;
			exit(0); 
        default:
        	cout<<"��������ϵͳ�쳣�˳�������"<<endl; 
        	exit(1);
    }
}

//��ʦ�˵�2��
void teacherLogin2()
{
	cout<<"*******************"<<endl;
	cout<<"      1.���ѧ��   "<<endl;
	cout<<"      2.ɾ��ѧ��   "<<endl;
	cout<<"      3.�޸�ѧ��   "<<endl;
    cout<<"      4.ȫ��ѧ��   "<<endl;
    cout<<"      5.����ѧ��   "<<endl;
	cout<<"      6.ע����ʦ   "<<endl;	
    cout<<"      7.����       "<<endl;
    cout<<"      8.�˳�       "<<endl;
    cout<<"*******************"<<endl;
    cout<<"��ѡ��˵��������:"<<endl;
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
        	cout<<"ϵͳ�˳�������"<<endl;
			exit(0); 
        default:
        	cout<<"��������ϵͳ�쳣�˳�������"<<endl; 
        	exit(1);
    }
}

//ѧ���˵�1�� 
void studentLogin1()
{
    cout<<"*******************"<<endl;
    cout<<"       1.��¼      "<<endl;
    cout<<"       2.ע��      "<<endl;
    cout<<"       3.�˳�      "<<endl;
    cout<<"*******************"<<endl;
    cout<<"��ѡ��˵��������:"<<endl;
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
        	cout<<"ϵͳ�˳�������"<<endl;
			exit(0); 
        default:
        	cout<<"��������ϵͳ�쳣�˳�������"<<endl; 
        	exit(1);
    }
}

//����ѧ���˵�
void studentLogin2()
{
    cout<<"*******************"<<endl;
    cout<<"       1.ע��ѧ��  "<<endl;
    cout<<"       2.��ѯ��Ϣ  "<<endl;
    cout<<"       3.����      "<<endl; 
    cout<<"       4.�˳�      "<<endl;
    cout<<"*******************"<<endl;
    cout<<"��ѡ��˵��������:"<<endl;
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
        	cout<<"ϵͳ�˳�������"<<endl;
			exit(0); 
        default:
        	cout<<"��������ϵͳ�쳣�˳�������"<<endl; 
        	exit(1);
    }	
}

//���ε�½
void threeLogin(string user)
{
    string name;
    string pwd;     //����
    for(int i=0;i<3;i++)
    {
        cout<<"�������û��������룺"<<endl;
        cin>>name>>pwd;
        int stat=quryBuName(name,pwd,user);
        if(stat>=0)
		{
			cout<<"��½�ɹ���  "<<endl;
			break;
		}
		else
		{
			if(i==2)
				cout<<"����������࣬ϵͳ�˳�"<<endl;
			else
				cout<<"��������������û�����������������"<<endl;
		} 

    }
}

int quryBuName(string name,string pwd,string user)
{
	ifstream in;
	if(user=="admin")
		in.open("aLogin.txt",ios::in|ios::binary);//\r\n   //�����Ƶ��������� 
	if(user=="teacher")
		in.open("tLogin.txt",ios::in|ios::binary);//\r\n   //�����Ƶ��������� 
	if(user=="student")
		in.open("sLogin.txt",ios::in|ios::binary);//\r\n   //�����Ƶ��������� 
	if(!in.is_open())
	{
		cout<<"ȱ����Ҫ�ļ�������������!"<<endl;
		exit(0); 
	} 
	else
	{
		stringstream ss;
		while(in.peek()!=EOF)
		{
			int stat=in.tellg();	//ָ����ָ��λ�� 
			string line;
			getline(in,line);
			ss<<line;
			string curname,curpwd;
			ss>>curname>>curpwd;
			if(curname==name&&curpwd==pwd)
			{
				return stat;
			}
			ss.str("");		//�ַ�����ʼ�� 
		}
		in.close();
		
	}
	return -1;
}

//ע�� 
void add(string user)
{
	ofstream out;
	if(user=="teacher")
		out.open("tLogin.txt",ios::app);
	if(user=="student")
		out.open("sLogin.txt",ios::app);
	if(!out.is_open())
	{
		cerr<<"ȱ����Ҫ�ļ�������������!"<<endl;
		exit(1);
	}
	else
	{
		string name,pwd;
		cout<<"�������û��������룺"<<endl;
		cin>>name>>pwd;
		out.setf(ios::left);
		out<<space<<name<<space<<pwd<<endl;
		cout<<"ע��ɹ�!"<<endl;
	}
	out.close();
	cout<<"*******************"<<endl;
	cout<<"      1.����       "<<endl;
	cout<<"      2.�˳�       "<<endl;
	cout<<"*******************"<<endl;
	cout<<"��ѡ��˵��������:"<<endl;
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
        	cout<<"ϵͳ�˳�������"<<endl;
			exit(0);     
        default:
        	cout<<"��������ϵͳ�쳣�˳�������"<<endl; 
        	exit(1);			
   }
}

//�����ʦ��ѧ����Ϣ
void addInfo(string user)
{
	ofstream out;
	if(user=="teacher")
		out.open("teacher.txt",ios::app);
	if(user=="student")
		out.open("student.txt",ios::app);
	if(!out.is_open())
	{
		cerr<<"ȱ����Ҫ�ļ�������������!"<<endl;
		exit(1);
	}
	else
	{
		int id;
		string name;
		int age;
		cout<<"������"<<user<<"�ı�š����������䣺"<<endl;
		cin>>id>>name>>age;
		out.setf(ios::left);
		out<<space<<id<<space<<name<<space<<age<<NEWLINE;
		cout<<"��ӳɹ�!"<<endl;
	}
	out.close();
}

//ɾ����ʦ��ѧ����Ϣ
void del(string user)
{
	int id;
	cout<<"������Ҫɾ����ID��ţ�"<<endl;
	cin>>id;
	ifstream in;
	if(user=="teacher")
		in.open("teacher.txt",ios::in);
	else 
		in.open("student.txt",ios::in);
	if(!in.is_open())
	{
		cerr<<"ȱ����Ҫ�ļ�������������!"<<endl;
		exit(1);
	}
	else
	{
		string temp;	//�����Ŀռ� 
		stringstream ss;
		int curID;
		while(in.peek()!=EOF)	//end of file
		{
			string line;
			getline(in,line);
			ss<<line;
			ss>>curID;
			if(curID!=id)		//��ID����ȵķ���temp�ռ䣬�൱��ɾ��curID 
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
			cerr<<"ȱ����Ҫ�ļ�������������!"<<endl;
			exit(1);
		}
		else
		{
			out<<temp;
			out.close();
			cout<<"ɾ���ɹ�"<<endl; 
		}
	}
}

//�޸���ʦ��ѧ����Ϣ
void update(string user)
{
	int id;
	cout<<"������Ҫ�޸ĵı�ţ�"<<endl;
	cin>>id;
	int stat=byId(id,user);
	if(stat==-1)
		return;
	string name;
	int age;
	cout<<"������"<<user<<"�����������䣺"<<endl;
	cin>>name>>age;
	stringstream infotemp;
	infotemp.setf(ios::left);
	infotemp<<space<<id<<space<<name<<space<<age;	// ���ĸ�ʽ��
	string line;
	getline(infotemp,line);
	fstream out;
	if(user=="teacher")
		out.open("teacher.txt",ios::in|ios::out|ios::binary);
	else
		out.open("student.txt",ios::in|ios::out|ios::binary);
	if(!out.is_open())
	{
		cerr<<"ȱ����Ҫ�ļ�������������!"<<endl;
		exit(1);
	}
	else
	{
		out.seekg(stat,ios::beg);
		out<<line;
		cout<<"�޸ĺ����ϢΪ��"<<endl;
		cout<<line<<endl;
		out.close();
	}
}
int byId(int id,string user)
{
	ifstream in;
	if(user=="tecaher")
		in.open("teacher.txt",ios::in|ios::binary);//\r\n   //�����Ƶ��������� 
	else
		in.open("student.txt",ios::in|ios::binary);//\r\n   //�����Ƶ��������� 
	if(!in.is_open())
	{
		cerr<<"ȱ����Ҫ�ļ�������������!"<<endl;
		exit(1);
	} 
	else
	{
		stringstream ss;
		while(in.peek()!=EOF)
		{
			int stat=in.tellg();	//ָ����ָ��λ�� 
			string line;
			getline(in,line);
			ss<<line;
			int curId;
			ss>>curId;
			if(curId==id)
			{
				return stat;
			}
			ss.str("");		//�ַ�����ʼ�� 
		}
		cout<<"id�����ڣ�"<<endl;
		in.close();
		
	}
	return -1;
}

//����ID��ѯ��ʦ��ѧ����Ϣ
void queryById(string user)
{
	int crid;	//�������ID
	cout<<"������Ҫ��ѯ�ı�ţ�"<<endl;
	cin>>crid;
	int stat=byId(crid,user);
	string line;
	fstream in;
	if(user=="teacher")
		in.open("teacher.txt",ios::in|ios::binary);
	else
		in.open("student.txt",ios::in|ios::binary);
	in.seekg(stat,ios::beg);	// ios::beg ����λ��
	getline(in,line);
	cout.setf(ios::left);
	cout<<space<<"id"<<space<<"name"<<space<<"age"<<endl;
	stringstream ss;	//�ַ������� 
	ss<<line;
	int id;
	string name;
	int age;
	ss>>id>>name>>age;
	cout<<space<<id<<space<<name<<space<<age<<endl;
	ss.clear();		//����ַ��� 
	in.close();
	 
}
//��ѯ��ʦ��ѧ����Ϣ
void  queryAll(string user)
{
	ifstream in;
	if(user=="teacher")
		in.open("teacher.txt",ios::in);
	else
		in.open("student.txt",ios::in);
	if(!in.is_open())
	{
		cerr<<"ȱ����Ҫ�ļ�������������!"<<endl;
		exit(1);
	} 
	else
	{
		stringstream ss;	//�ַ������� 
		string line;
		cout.setf(ios::left);	//�������Ҷ�
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
			ss.clear();		//����ַ��� 
		} 
		in.close(); 
	}
}

//��������
void cPwd(string user)
{
	string name;
	cout<<"������"<<user<<"���˻�����"<<endl;
	cin>>name;
	int stat=byName(name,user);
	if(stat==-1)
		return;
	string pwd="000000";
	stringstream infotemp;
	infotemp.setf(ios::left);
	infotemp<<space<<name<<space<<pwd;	// ���ĸ�ʽ��
	string line;
	getline(infotemp,line);
	fstream out;
	if(user=="teacher")
		out.open("tLogin.txt",ios::in|ios::out|ios::binary);
	else
		out.open("sLogin.txt",ios::in|ios::out|ios::binary);
	if(!out.is_open())
	{
		cerr<<"ȱ����Ҫ�ļ�������������!"<<endl;
		exit(1);		
	}
	else
	{
		out.seekg(stat,ios::beg);
		out<<line;
		cout<<"����Ϊ(000000)"<<endl;
		out.close();
	}
 
 }
int byName(string name,string user)
{
	ifstream in;
	if(user=="teacher")
		in.open("tLogin.txt",ios::in|ios::binary);//\r\n   //�����Ƶ��������� 
	else
		in.open("sLogin.txt",ios::in|ios::binary);//\r\n   //�����Ƶ��������� 
	if(!in.is_open())
	{
		cerr<<"ȱ����Ҫ�ļ�������������!"<<endl;
		exit(1);		
	} 
	else
	{
		stringstream ss;
		while(in.peek()!=EOF)
		{
			int stat=in.tellg();	//ָ����ָ��λ�� 
			string line;
			getline(in,line);
			ss<<line;
			string curName;
			ss>>curName;
			if(curName==name)
			{
				return stat;
			}
			ss.str("");		//�ַ�����ʼ�� 
		}
		cout<<"��Ϣ�����ڣ�"<<endl;
		in.close();
		
	}
	return -1;
}
int main()
{
	Login();	//��ʼ�˵�
}
