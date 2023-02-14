public class DOG{

        int dogAge;

	public DOG(String name){
		System.out.println("The dogs name is:" + name );
	}


	public void dogAGE( int age ){
		dogAge = age;
	}
	
	public int getAge(){
		System.out.println("The dog age is: " +dogAge  );
		return dogAge;
	}

	public static void main(String []args){
		DOG myDog = new DOG( "pegi" );
	        myDog.dogAGE( 5 );
		myDog.getAge();
	System.out.println("the value of the variable age is:" + myDog.dogAge );
	}
}
