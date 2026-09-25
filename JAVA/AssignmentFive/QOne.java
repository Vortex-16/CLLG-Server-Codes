class Car{
	void start() {
		System.out.println("Car is startingg.....");
	}
}

class Defender extends Car
{
	@Override
	void start() {
		System.out.println("Defender Is Ready to Offraod");
	}
}
public class QOne{
	public static void main(String args[]){
        Defender d = new Defender();
        d.start();
    }
}
