using namespace std;

Vector::Vector() {
	x = 0;
	y = 0;
}

Vector::Vector(double _x, double _y) {
	x = _x;
	y = _y;
}

void Vector::add(Vector v) {
    this->x += v.x;
    this->y += v.y;
}

double Vector::distance(Vector* v) const {
    double dx = this->x - v->x;
    double dy = this->y - v->y;
    return sqrt(dx * dx + dy * dy);
}
