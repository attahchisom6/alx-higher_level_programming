public class Dog{

        int dogAge;

	public Dog(String name){
		System.out.println("The dogs name is:" + name );
	}


	public int dogAGE( int age ){
		dogAge = age;
	
		System.out.println("The dog age is: " +dogAge  );
		return dogAge;
	}

	public static void main(String []args){
		Dog myDog = new Dog( "pegi" );
	        myDog.dogAGE( 5 );
		
	System.out.println("the value of the variable age is:" + myDog.dogAge );
	}
}
