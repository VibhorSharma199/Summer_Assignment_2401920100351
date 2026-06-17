import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "FirstClass: This is a premium first-class coach. Reservation required.";
    }
}

class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies: This coach is reserved exclusively for women.";
    }
}

class General extends Compartment {
    @Override
    public String notice() {
        return "General: Unreserved general coach. Standard fares apply.";
    }
}

class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Luggage: Luggage van. Carriage of passengers is prohibited.";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] compartments = new Compartment[10];
        Random rand = new Random();

        for (int i = 0; i < compartments.length; i++) {
            // Generate a random number from 1 to 4
            int type = rand.nextInt(4) + 1;
            switch (type) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    break;
                case 3:
                    compartments[i] = new General();
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }

        System.out.println("Checking polymorphic behavior of notice method on 10 random compartments:");
        for (int i = 0; i < compartments.length; i++) {
            System.out.println("Compartment " + (i + 1) + ": " + compartments[i].notice());
        }
    }
}
