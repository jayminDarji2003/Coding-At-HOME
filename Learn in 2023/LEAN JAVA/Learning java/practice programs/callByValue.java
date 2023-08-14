class callByValue{

    public void callByValuefunction(int x){
        x=100;
    }
    public static void main(String[] args){
        int x = 50;
        callByValue f = new callByValue();
        f.callByValuefunction(x);
        System.out.println(x);
    }
}