class Demo
{
private:
    int a;
    int b;
public:
    int c;

    void set(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    int getA() const { return a; }
    int getB() const { return b; }
};
int main()
{
    Demo d;
    d.set(10, 20, 30);   
    cout << d.getA();    
    cout << d.getB();    
}
