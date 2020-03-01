abstract class shape{
	String Name;

	shape()  //constructor wthaut parameter
	{
		this.Name=Name; //initalization
	}
	 public abstract void Draw();
	 public abstract int Area(int a);

	 public void Show(){
	 	System.out.println("This is show method.");
	 }

}

class Rect extends shape{

	Rect(String Name){ // constructor
		this.Name=Name;
		System.out.println("Name: "+Name);
	}
	public void Draw(){
		System.out.println("This is draw method rectangle.");
	}
	public int Area(int length){
		int result=length*length;

		System.out.println("This is area rectangle: ");
		return result;
	}
}
class circle extends shape{
	int result;
	circle(String Name){ //constructor
		this.Name=Name;


	}
	public void Draw(){
		System.out.println("This is draw method circle.");
	}

	public int Area(int r){

		int result=3*r*r;

		System.out.println("This is Area Method circle");
		return result;
	}
}
class TestAbstract{


	public static void main(String[] args){
		shape s=new Rect("jagruti");
		s.Show();
		s.Draw();
		int result=s.Area(4);
		System.out.println("Area of rectangle= "+result);
		shape s1=new circle("jagruuti");
		s1.Draw();
		result=s1.Area(4);
		System.out.println("Area of circle= "+result);

	}
}
