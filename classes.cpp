class student
{
    private:
    int rollno;
    float marks;
    public:
    void putdata(int a, float b);
    void display();
};
int main()
{
    student s1;
    s1(12,54.3);
    return 0;
}