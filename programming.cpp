#include<iostream>
using namespace std;
class sem1
{protected:
	float tgpa1;
	public:
		void in1()
		{cin>>tgpa1;
		}
	
};
class sem2:public sem1{
	protected:
	float tgpa2;
	public:
		void in2()
		{cin>>tgpa2;
		}
	
};
class sem3:public sem2
{
		protected:
	float tgpa3;
	public:
		void in3()
		{cin>>tgpa3;
		}
};
class sem4:public sem3{
	protected:
	float tgpa4,cgpa;
	public:
		void in4()
		{cin>>tgpa4;
		cgpa=(tgpa1+tgpa2+tgpa3+tgpa4)/4;
		cout<<cgpa;
		
	}
};
int main()
{
	sem4 ss;
	ss.in1();
	ss.in2();
	ss.in3();
	ss.in4();
	
}

#include<iostream>
using namespace std;
class lpu
{protected:
    int b1;
    float budget;
public:
    void in()
    {cin>>b1>>budget;
    }
};
class cse:public lpu
{
public:
    void mes()
    {
        cout<<"my cse building no is: "<<b1<<endl<<"budget is="<<budget*.30;
    }
};

class mech:public lpu
{
    public:
    void mes()
    {
        cout<<"my mech building no is: "<<b1<<endl<<"budget is="<<budget*.30;
    }

};
class ece:public lpu
{
public:
    void mes()
    {
        cout<<"my ece building no is: "<<b1<<endl<<"budget is="<<budget*.30;
    }
};
int main()
{

    class cse cc;
    cc.in();
    cc.mes();
    class mech ms;
    ms.in();
    ms.mes();
    class ece es;
    es.in();
    es.mes();
}
