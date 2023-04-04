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
    string names[]={"蔡","王","张","刘","陈","杨","赵","黄","周","吴","徐",
                    "孙","胡","朱","高","林","何","郭","马","罗","董","于",
                    "冯","萧","谢","梁","宋","郑","唐","韩","曾","吕","沈",
                    "阎","叶","彭","薛","傅","邓","夏","许","袁","曹","程",
                    "丁","姜","苏","潘","魏","杜","田","余","蒋","卢","任",
                    "林","刁","钟","徐","邱","骆","高","夏","蔡","田","樊",
                    "胡","凌","霍","虞","万","支","柯","昝","管","卢","莫",
                    "经","房","裘","缪","干","解","应","宗","丁","宣","贲",
                    "邓","郁","单","杭","洪","包","诸","左","石","崔","吉",};

    string lastNames[]={"徐", "坤", "勇", "毅", "俊", "峰", "强", "军", "平", "保",
                        "东", "文", "辉", "力", "明", "永", "健", "世", "广", "志",
                        "义", "兴", "良", "海", "山", "仁", "波", "宁", "贵", "福",
                        "生", "龙", "元", "全", "国", "胜", "学", "祥", "才", "发",
                        "秀", "娟", "英", "华", "慧", "巧", "美", "娜", "静", "淑",
                        "惠", "珠", "翠", "雅", "芝", "玉", "萍", "红", "娥", "玲",
                        "芬", "芳", "燕", "彩", "春", "菊", "兰", "凤", "洁", "梅",
                        "琳", "素", "云", "莲", "真", "环", "雪", "荣", "爱", "妹",
                        "霞", "香", "月", "莺", "媛", "艳", "瑞", "凡", "佳", "嘉",
                        "琼", "勤", "珍", "贞", "莉", "桂", "娣", "叶", "璧", "璐"};

    string schools[]={"中国人民大学","北京师范大学","北京航空大学","中国农业大学","华北电力大学",
                     "北京理工大学","北京交通大学","中央音乐学院","北京邮电大学","北京化工大学",
                     "大连理工大学","东北工业大学","辽宁理工大学","辽宁工程大学","大连海事大学",
                     "东北师范大学","东北林业大学","东北农业大学","成都理工大学","西安交通大学",
                     "上海交通大学","上海理工大学","华东师范大学","上海音乐学院","上海戏剧学院",
                     "上海财经大学","华东理工大学","第二军医大学","吉林师范大学","中央名族大学",
                     "中国矿业大学","南京师范大学","南京农业大学","中国药科大学","西北工业大学",
                     "电子科技大学","西南交通大学","西南财经大学","太原理工大学","华东师范大学",};

    string classes[]={"心理健康教育","形势与政策","数据库技术","量子力学","广义相对论","军事理论",
                      "高等数学","中国近现代史纲要","线性代数","综合日语","网站设计与开发",
                      "马克思主义基本原理","概率论与数理统计","毛泽东思想","三个代表","C语言程序设计",
                      "计算机网络","计算机组成原理","数据结构","操作系统",};

    string citys[]={"北京市","上海市","天津市","重庆市","珠海市","汕头市",
                    "佛山市","韶关市","湛江市","肇庆市","江门市","茂名市",
                    "武汉市","荆门市","咸宁市","襄阳市","荆州市","黄石市",
                    "宜昌市","随州市","鄂州市","孝感市","黄冈市","十堰市",};

    string addresses1[]={"浙江省杭州市上城区","浙江省杭州市下城区","浙江省杭州市江干区","浙江省杭州市拱墅区",
                         "浙江省杭州市西湖区","浙江省杭州市滨江区","浙江省杭州市萧山区","浙江省杭州市余杭区",
                         "浙江省杭州市富阳区","浙江省杭州市临安区","浙江省杭州市钱塘区","辽宁省沈阳市和平区",
                         "辽宁省沈阳市沈河区","辽宁省沈阳市皇姑区","辽宁省沈阳市大东区","辽宁省沈阳市铁西区",
                         "辽宁省沈阳市浑南区","辽宁省沈阳市于洪区","辽宁省沈阳市苏家屯","辽宁省沈阳市辽中区"};

    string addresses2[]={"文庭雅苑","美景天城","田园牧歌","水木春城","顶秀青溪","中景濠庭","西钓鱼台",
                         "枫蓝国际","季景沁园","蓝调国际","北苑家园","国典华园","北苑家园","枫桥别墅",
                         "京艺天朗","阳光上东","天和人家","蓝山国际","旺座中心","城市复兴","华城上园"};

    string addresses3[]={"A区","B区","C区","D区","E区","F区"};

    string addresses4[]={"一单元","二单元","三单元","四单元","五单元","六单元","七单元","八单元"};


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

            cout<<i<<".姓名:"<<person[i].name<<endl<<"  学校:"<<person[i].school<<"  电话:";
            for(int j=0;j<11;j++){  cout<<person[i].tele[j];  }
            cout<<"  身份证号:";
            for(int j=0;j<17;j++){  cout<<person[i].id_num[j];  }cout<<person[i].id_numl;
            cout<<"  QQ号:";
            for(int j=0;j<10;j++){  cout<<person[i].qq[j];  }
            cout<<"  邮箱:www.";
            for(int j=0;j<10;j++){  cout<<person[i].email[j]; }cout<<"@163.com";
            cout<<"  微信号:";
            for(int j=0;j<10;j++){  cout<<person[i].wechat[j]; }
            cout<<"  年龄:"<<person[i].age<<endl;
            cout<<"  家庭住址:      "<<person[i].address<<endl;
            cout<<"  最近上过的课程:"<<person[i].class1<<"  "<<person[i].class2<<"  "<<person[i].class3<<endl;
            cout<<"  最近去过的城市:"<<person[i].city1<<"  "<<person[i].city2<<"  "<<person[i].city3<<endl;
            cout<<"  最近见过的人:  "<<person[i].hito1<<"  "<<person[i].hito2<<"  "<<person[i].hito3<<endl;
            cout<<endl;

        }

}
