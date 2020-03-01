package array_passing;

public class cTest 
{
	
	public void swap(cDate trr[])
	{
		cDate temp;
		
		temp = trr[0];
		trr[0] = trr[1];
		trr[1] = temp;
	}
	public static void main(String[] args) 
	{
		cDate arr[] = new cDate[2];
		//"arr" is an array of "ref of type cDate" with size 2
		//arr[0] this array element is the reference
		//arr[1] this array element is the reference
		
		//arr[0] = base-address-of-actual-object-of-type-cDate;
		
		arr[0] = new cDate(1, 1, 1);
		arr[1] = new cDate(2, 2, 2);
		
		System.out.println("Before Swapping : ");
		arr[0].display();
		arr[1].display();
		
		cTest obj = new cTest();
		obj.swap(arr); //i.e. to pass an array -- just pass it's name
		
		System.out.println("After Swapping : ");
		arr[0].display();
		arr[1].display();
	}
}
