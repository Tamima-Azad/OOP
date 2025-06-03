#include &lt;iostream&gt;
using namespace std;
class A
{
private:
int z;
protected:
int y;
public:
int x;
void funA()
{
x = 10;
y = 5;
z = 15;
}
};
class B:public A
{
// x is public
// y is protected
// z is not accessible from B
public:
void funB()
{
x = 15;
y = 25;
//z=25; //Error
}
void DispalyB()
{
cout &lt;&lt; &quot;Class B Accessing x: &quot; &lt;&lt; x &lt;&lt; endl;
cout &lt;&lt; &quot;Class B Accessing y: &quot; &lt;&lt; y &lt;&lt; endl;

// We cannot access z as it is private in class A
//cout &lt;&lt; &quot;Class B Accessing z: &quot; &lt;&lt; z;
}
};
class C:protected A
{
// x is protected
// y is protected
// z is not accessible from C
public:
void funC()
{
x = 35;
y = 45;
//z=45; //Error as it is private in A
}
void DispalyC()
{
cout &lt;&lt; &quot;Class C Accessing x: &quot; &lt;&lt; x &lt;&lt; endl;
cout &lt;&lt; &quot;Class C Accessing y: &quot; &lt;&lt; y &lt;&lt; endl;
// We cannot access z as it is private in class A
//cout &lt;&lt; &quot;Class C Accessing z: &quot; &lt;&lt; z;
}
};
class D:private A // &#39;private&#39; is default for classes
{
// x is private
// y is private
// z is not accessible from D
public:
void funD()
{
x = 55;

y = 65;
//z=45; //Error
}
void DispalyD()
{
cout &lt;&lt; &quot;Class D Accessing x: &quot; &lt;&lt; x &lt;&lt; endl;
cout &lt;&lt; &quot;Class D Accessing y: &quot; &lt;&lt; y &lt;&lt; endl;
// We cannot access z as it is private in class A
//cout &lt;&lt; &quot;Class D Accessing z: &quot; &lt;&lt; z;
}
};
int main()
{
B b;
//Only public members are accessible from outside the class
b.x = 10;
//Cannot access the protected and private data members from outside the class
//b.y = 5;
//b.z = 20;
b.funB();
b.DispalyB();
C c;
//Cannot access the protected and private data members from outside the class
//c.x = 10;
//c.y = 5;
//c.z = 20;
c.funC();
c.DispalyC();
D d;
//Cannot access the private data members
//d.x = 10;
//d.y = 5;
//d.z = 20;

d.funD();
d.DispalyD();
}
