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
