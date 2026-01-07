class Student{
 private:
    int num;
    char name [20];
    char sex;   
    public:
    Student();
    Student(int n, const char* nm, char s);
    void display();
    int set_value (int num =0, char name[] ="e", char sex ="male");
}; 