class AddMyFavorite{

	AddMyFavorite()
	{
		
	}

	public void add(int a,int b)
	{
		int c=a+b;
		System.out.println("Addition is: "+c);
	}

	public static void main(String[] args)
	{
		AddMyFavorite s=new AddMyFavorite();
		s.add(5,5);
	}

}
