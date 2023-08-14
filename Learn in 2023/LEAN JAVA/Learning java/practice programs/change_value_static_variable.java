package Rudraksh;

class Student{
    int a;
    static int id=35;

    void change(){
        System.out.println(id);
    }
};

class Rudraksh{
    public static void main(String[] args){
        Student s1 = new Student();
        Student s2 = new Student();

        s1.change();
        Student.id=1;
        s2.change();
    }
}