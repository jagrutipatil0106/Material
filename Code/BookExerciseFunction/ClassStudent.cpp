#include<iostream>
using namespace std;
class Student
{
	int id;
	char name[20], grade; //string name; 
	float phy;
  float chem;
  float math;
  float total=0;
  float per;

	void getData(int i, string name, float phy, float chem, float = math, float Total, float Per, char grade)
	{
		id=i;
		name=name;
		phy=phy;
		chem=chem;
		math=math;
		sub_Total=Total;
		Per=per;
		Grade=grade;
	}
	void showData()
	{
		cout<<"Sid:"<<Sid<<"Sname:"<<Sname<<phy_marks<<chem_marks<<math_marks<<sub_Total<<per<<Grade<<endl;
	}
	void calcTotal()
	{
		Total=phy_marks+chem_marks+math_marks;

		cout<<"Total:"<<Total;
	}
	void calcper()
	{
		Per=[(phy_marks+chem_marks+math_marks)/3]*100;

		cout<<"per:"<<per;
	}	
    void calcGrade()
    {
    	if(per>=80)
    	{
    		grade=A;
    	}
    	elseif(per>=70 && per<80)
    	{
    		grade=B;
    	}
    	elseif(per>=60 && per<70)
    	{
    		grade=C;
    	}
    	elseif(per>=50 && per<60)
    	{
    		grade=D;
    	}
    	elseif(per<50)
    	{
    		grade=F;
    	}

    }
    int main()
    {
    	
      Student s1;
      s1.getData();
      s1.showData();
      s1.calcTotal();
      s1.calcper();
      s1.calcGrade();
  
     }

    }

};