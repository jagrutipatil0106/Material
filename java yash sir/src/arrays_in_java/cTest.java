package arrays_in_java;

public class cTest 
{
	public static void main(String[] args) 
	{
		//DataType arrayName[] = new DataType[size];
		
		int arr[] = new int[5]; //An array with name "arr", data type "int" and size "5" is created
		
		for(int i=0 ; i<arr.length ; i++ )
		{
			System.out.println(arr[i]);
		}
		
		arr[0] = 10;
		arr[1] = 20;
		arr[2] = 30;
		arr[3] = 40;
		arr[4] = 50;
		
		System.out.println();
		for(int i=0 ; i<arr.length ; i++ )
		{
			System.out.println(arr[i]);
		}		
		
		System.out.println("Value of arr.length is : "+arr.length);

		//---------------------------------------------------------------------------------------------
		
		//DataType arrayName[] = {Initaialzation list sepeated by a comma (,)};
		
		int brr[] = {1, 2, 3, 4, 5, 6, 7 };
		System.out.println("Value of brr.length is : "+brr.length);
		
		System.out.println();
		for(int i=0 ; i<brr.length ; i++ )
		{
			System.out.println(brr[i]);
		}			
		
		
		
		//--------------------------------------------------------------------------------------------------
		
		//Enhanced-for-loop
		
		/*
		for( DataType Variable     : collectionName       )
		{
			
		}
		*/
		
		for(int value : brr)
		{
			System.out.println(value);
		}
		
	}
}
