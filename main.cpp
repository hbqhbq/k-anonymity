#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

class person{
public:
    string name;
    string address;
    string school;
    int tele[11];
    int id_num[17];
    char id_numl;
    int qq[10];
    int wechat[10];
    int email[10];
    int age;
    string class1,class2,class3;
    string city1,city2,city3;
    string hito1,hito2,hito3;
}person[2000];

int main()
{
    string s2;string s3;
    int k,s;
    string names[]={"��","��","��","��","��","��","��","��","��","��","��",
                    "��","��","��","��","��","��","��","��","��","��","��",
                    "��","��","л","��","��","֣","��","��","��","��","��",
                    "��","Ҷ","��","Ѧ","��","��","��","��","Ԭ","��","��",
                    "��","��","��","��","κ","��","��","��","��","¬","��",
                    "��","��","��","��","��","��","��","��","��","��","��",
                    "��","��","��","��","��","֧","��","��","��","¬","Ī",
                    "��","��","��","��","��","��","Ӧ","��","��","��","��",
                    "��","��","��","��","��","��","��","��","ʯ","��","��",};

    string lastNames[]={"��", "��", "��", "��", "��", "��", "ǿ", "��", "ƽ", "��",
                        "��", "��", "��", "��", "��", "��", "��", "��", "��", "־",
                        "��", "��", "��", "��", "ɽ", "��", "��", "��", "��", "��",
                        "��", "��", "Ԫ", "ȫ", "��", "ʤ", "ѧ", "��", "��", "��",
                        "��", "��", "Ӣ", "��", "��", "��", "��", "��", "��", "��",
                        "��", "��", "��", "��", "֥", "��", "Ƽ", "��", "��", "��",
                        "��", "��", "��", "��", "��", "��", "��", "��", "��", "÷",
                        "��", "��", "��", "��", "��", "��", "ѩ", "��", "��", "��",
                        "ϼ", "��", "��", "ݺ", "��", "��", "��", "��", "��", "��",
                        "��", "��", "��", "��", "��", "��", "�", "Ҷ", "�", "�"};

    string schools[]={"�й������ѧ","����ʦ����ѧ","�������մ�ѧ","�й�ũҵ��ѧ","����������ѧ",
                     "��������ѧ","������ͨ��ѧ","��������ѧԺ","�����ʵ��ѧ","����������ѧ",
                     "��������ѧ","������ҵ��ѧ","��������ѧ","�������̴�ѧ","�������´�ѧ",
                     "����ʦ����ѧ","������ҵ��ѧ","����ũҵ��ѧ","�ɶ�����ѧ","������ͨ��ѧ",
                     "�Ϻ���ͨ��ѧ","�Ϻ�����ѧ","����ʦ����ѧ","�Ϻ�����ѧԺ","�Ϻ�Ϸ��ѧԺ",
                     "�Ϻ��ƾ���ѧ","��������ѧ","�ڶ���ҽ��ѧ","����ʦ����ѧ","���������ѧ",
                     "�й���ҵ��ѧ","�Ͼ�ʦ����ѧ","�Ͼ�ũҵ��ѧ","�й�ҩ�ƴ�ѧ","������ҵ��ѧ",
                     "���ӿƼ���ѧ","���Ͻ�ͨ��ѧ","���ϲƾ���ѧ","̫ԭ����ѧ","����ʦ����ѧ",};

    string classes[]={"����������","����������","���ݿ⼼��","������ѧ","���������","��������",
                      "�ߵ���ѧ","�й����ִ�ʷ��Ҫ","���Դ���","�ۺ�����","��վ����뿪��",
                      "���˼�������ԭ��","������������ͳ��","ë��˼��","��������","C���Գ������",
                      "���������","��������ԭ��","���ݽṹ","����ϵͳ",};

    string citys[]={"������","�Ϻ���","�����","������","�麣��","��ͷ��",
                    "��ɽ��","�ع���","տ����","������","������","ï����",
                    "�人��","������","������","������","������","��ʯ��",
                    "�˲���","������","������","Т����","�Ƹ���","ʮ����",};

    string addresses1[]={"�㽭ʡ�������ϳ���","�㽭ʡ�������³���","�㽭ʡ�����н�����","�㽭ʡ�����й�����",
                         "�㽭ʡ������������","�㽭ʡ�����б�����","�㽭ʡ��������ɽ��","�㽭ʡ�������ຼ��",
                         "�㽭ʡ�����и�����","�㽭ʡ�������ٰ���","�㽭ʡ������Ǯ����","����ʡ�����к�ƽ��",
                         "����ʡ�����������","����ʡ�����лʹ���","����ʡ�����д���","����ʡ������������",
                         "����ʡ�����л�����","����ʡ�������ں���","����ʡ�������ռ���","����ʡ������������"};

    string addresses2[]={"��ͥ��Է","�������","��԰����","ˮľ����","������Ϫ","�о��ͥ","������̨",
                         "��������","������԰","��������","��Է��԰","���仪԰","��Է��԰","���ű���",
                         "��������","�����϶�","����˼�","��ɽ����","��������","���и���","������԰"};

    string addresses3[]={"A��","B��","C��","D��","E��","F��"};

    string addresses4[]={"һ��Ԫ","����Ԫ","����Ԫ","�ĵ�Ԫ","�嵥Ԫ","����Ԫ","�ߵ�Ԫ","�˵�Ԫ"};


    for(int i=0;i<2000;i++)
        {
            person[i].name=names[(int)(rand()%99)]+lastNames[(int)(rand()%100)];
            person[i].school=schools[(int)(rand()%40)];
            for(int j=0;j<11;j++)
            {
                k=(int)rand()%10;
                if(k!=1&&j==0)
                {
                    j--;
                }
                else person[i].tele[j]=k;
            }
            for(int j=0;j<17;j++)
            {
                do
                {
                    person[i].id_num[j]=(int)rand()%10;
                }while(person[i].id_num[0]==0);
            }
            s=
            person[i].id_num[0]*7+
            person[i].id_num[1]*9+
            person[i].id_num[2]*10+
            person[i].id_num[3]*5+
            person[i].id_num[4]*8+
            person[i].id_num[5]*4+
            person[i].id_num[6]*2+
            person[i].id_num[7]*1+
            person[i].id_num[8]*6+
            person[i].id_num[9]*3+
            person[i].id_num[10]*7+
            person[i].id_num[11]*9+
            person[i].id_num[12]*10+
            person[i].id_num[13]*5+
            person[i].id_num[14]*8+
            person[i].id_num[15]*4+
            person[i].id_num[16]*2;
            s=s%11;
            if(s==0) person[i].id_numl='1';
            if(s==1) person[i].id_numl='0';
            if(s==2) person[i].id_numl='X';
            if(s==3) person[i].id_numl='9';
            if(s==4) person[i].id_numl='8';
            if(s==5) person[i].id_numl='7';
            if(s==6) person[i].id_numl='6';
            if(s==7) person[i].id_numl='5';
            if(s==8) person[i].id_numl='4';
            if(s==9) person[i].id_numl='3';
            if(s==10) person[i].id_numl='2';

            for(int j=0;j<10;j++)
            {
                person[i].qq[j]=(int)rand()%10;
            }
            for(int j=0;j<10;j++)
            {
                person[i].wechat[j]=(int)rand()%10;
            }
            for(int j=0;j<10;j++)
            {
                person[i].email[j]=(int)rand()%10;
            }
            for(int j=0;j<90;j++)
            {
                person[i].age=(int)rand()%20+11;
            }
            person[i].class1=classes[(int)(rand()%20)];
            do
            {
                s2=classes[(int)(rand()%20)];
            }while(s2==person[i].class1);
            person[i].class2=s2;
            do
            {
                s3=classes[(int)(rand()%20)];
            }while(s3==s2||s3==person[i].class1);
            person[i].class3=s3;

            person[i].city1=citys[(int)(rand()%24)];
            do
            {
                s2=citys[(int)(rand()%24)];
            }while(s2==person[i].city1);
            person[i].city2=s2;
            do
            {
                s3=citys[(int)(rand()%24)];
            }while(s3==s2||s3==person[i].city1);
            person[i].city3=s3;

            person[i].hito1=names[(int)(rand()%99)]+lastNames[(int)(rand()%100)];
            do
            {
                s2=names[(int)(rand()%99)]+lastNames[(int)(rand()%100)];
            }while(s2==person[i].hito1);
            person[i].hito2=s2;
            do
            {
                s3=names[(int)(rand()%99)]+lastNames[(int)(rand()%100)];
            }while(s3==s2||s3==person[i].hito1);
            person[i].hito3=s3;

            person[i].address=addresses1[(int)(rand()%20)]+addresses2[(int)(rand()%21)]+addresses3[(int)(rand()%6)]+addresses4[(int)(rand()%8)];

            cout<<i<<".����:"<<person[i].name<<endl<<"  ѧУ:"<<person[i].school<<"  �绰:";
            for(int j=0;j<11;j++){  cout<<person[i].tele[j];  }
            cout<<"  ���֤��:";
            for(int j=0;j<17;j++){  cout<<person[i].id_num[j];  }cout<<person[i].id_numl;
            cout<<"  QQ��:";
            for(int j=0;j<10;j++){  cout<<person[i].qq[j];  }
            cout<<"  ����:www.";
            for(int j=0;j<10;j++){  cout<<person[i].email[j]; }cout<<"@163.com";
            cout<<"  ΢�ź�:";
            for(int j=0;j<10;j++){  cout<<person[i].wechat[j]; }
            cout<<"  ����:"<<person[i].age<<endl;
            cout<<"  ��ͥסַ:      "<<person[i].address<<endl;
            cout<<"  ����Ϲ��Ŀγ�:"<<person[i].class1<<"  "<<person[i].class2<<"  "<<person[i].class3<<endl;
            cout<<"  ���ȥ���ĳ���:"<<person[i].city1<<"  "<<person[i].city2<<"  "<<person[i].city3<<endl;
            cout<<"  �����������:  "<<person[i].hito1<<"  "<<person[i].hito2<<"  "<<person[i].hito3<<endl;
            cout<<endl;

        }

}
