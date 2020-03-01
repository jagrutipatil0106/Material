class Super {
    public int index = 1;
}

class App extends Super {

	public int var;

    public App(int index, int var) {
    	System.out.println(index);
        this.index = index + 1;
        this.var = var;
    }

    public static void main(String args[]) {
        App myApp = new App(10, 20);
        System.out.println(myApp.index);
        System.out.println(myApp.var);
    }
}


