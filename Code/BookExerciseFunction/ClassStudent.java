class Student
{
	int Sid;
	float phy_marks,chem_marks,math_marks,Total;
	float per;
	String Sname,grade;

	void getData(int id, float phy, float chem, float math, String name)
	{
		Sid=id;
		phy_marks=phy;
		chem_marks=chem;
		math_marks=math;
	}

	void showData()
	{
		System.out.println("student id="+Sid);
		System.out.println("Student name="+Sname);
		System.out.println("physics marks="+phy_marks);
		System.out.println("chem_marks="+chem_marks);
		System.out.println("maths marks="+math_marks);
		System.out.println("total="+Total);
		System.out.println("percentage="+per);
		System.out.println("grade="+grade);
	}

	void calcTotal()
	{
		Total=phy_marks+chem_marks+math_marks;
		System.out.println("Total="Total);
	}
	void calcper()
	{
		per=(Total/300)*100;
		System.out.println("percentage="+per);
	}
	void calcgrade()
	{
		if(per>=80)
		{
			System.out.println("grade A");
		}
		else if(per>=70 && per<80)
		{
			System.out.println("grade B");
		}
		else if(per>=60 && per<70)
		{
			System.out.println("grade c");
		}
		elseif(per>=50 && per<60)
		{
			System.out.println("grade D");
		}
		else
		{
			System.out.println("grade F ");
		}
	}

public static void main(String[] args) 
{
	Student s=new Student;
	s.getData(22, 78, 89, 79,"Jagruti");
	s.calcTotal();
	s.calcper();
	s.calcgrade();
	s.showData();
}



















































}