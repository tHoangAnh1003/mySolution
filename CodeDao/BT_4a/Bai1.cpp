Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(double _x, double _y) {
    x = _x;
    y = _y;
}

Point::Point(const Point& p) {
    x = p.x;
    y = p.y;
}

Triangle::Triangle(const Point& a, const Point& b,  const Point& c) {
    p1 = a;
    p2 = b;
    p3 = c;
}

double distance(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double Triangle::getPerimeter() const {
    double distance1 = distance(p1, p2);
    double distance2 = distance(p2, p3);
    double distance3 = distance(p3, p1);
    
    return distance1 + distance2 + distance3;
}

double Triangle::getArea() const {
    double distance1 = distance(p1, p2);
    double distance2 = distance(p2, p3);
    double distance3 = distance(p3, p1);
    double perimeter = getPerimeter() / 2;
    return sqrt(perimeter * (perimeter - distance1) * (perimeter - distance2) * (perimeter - distance3));
}