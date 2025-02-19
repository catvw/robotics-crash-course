// Rectangle Example Class
class Rectangle {
    // Private variables that can only be accessed within the class
    int width, height;
  // Everything after "public" can be accesed outside of the class (i.e in "setup" or "loop")
  public:
    Rectangle();
    Rectangle(int, int);
    int area() {return width  * height;}
    void setValues(int, int);
};
Rectangle::Rectangle(){}
// Definition of function declared above
Rectangle::Rectangle(int x, int y) {
  width = x;
  height = y;
}
void Rectangle::setValues(int x, int y)
{
  width=x;
  height=y;
}

void setup() {
  // Instantiates the Rectangle class
  Rectangle rect;
  // Calls the area() function within the class
  rect.setValues(3,4);
  int area = rect.area();
  Serial.begin(9600);
  Serial.println(area);
}

void loop() {
  // put your main code here, to run repeatedly:
}
