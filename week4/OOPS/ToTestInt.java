interface test {
    int square(int a);
}

class arithmetic implements test {
    @Override
    public int square(int a) {
        return a * a;
    }
}

public class ToTestInt {
    public static void main(String[] args) {
        test t = new arithmetic();
        int num = 5;
        System.out.println("Square of " + num + " is " + t.square(num));
    }
}
