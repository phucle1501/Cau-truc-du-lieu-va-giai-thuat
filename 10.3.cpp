class Vector {
    double x_, y_;
public:
    Vector(double x = 0, double y = 0) : x_(x), y_(y) {}
    void print(int precision = 2, bool newLine = true);
    Vector operator+(double s) const;
    Vector operator-(double s) const;
    Vector operator*(double s) const;
    Vector operator/(double s) const;
    Vector& operator+=(double s);
    Vector& operator-=(double s);
    Vector& operator*=(double s);
    Vector& operator/=(double s);
};

void Vector::print(int precision, bool newLine) {
    std::cout << std::fixed << std::setprecision(precision) << "(" << x_ << ", " << y_ << ")";
    if (newLine)
        std::cout << std::endl;
}

Vector Vector::operator+(double s) const {
    return Vector(x_ + s, y_ + s);
}

Vector Vector::operator-(double s) const {
    return Vector(x_ - s, y_ - s);
}

Vector Vector::operator*(double s) const {
    return Vector(x_ * s, y_ * s);
}

Vector Vector::operator/(double s) const {
    if (s == 0) {
        std::cout << "Error: Division by zero!" << std::endl;
        return Vector(x_, y_);
    } else {
        return Vector(x_ / s, y_ / s);
    }
}

Vector& Vector::operator+=(double s) {
    x_ += s;
    y_ += s;
    return *this;
}

Vector& Vector::operator-=(double s) {
    x_ -= s;
    y_ -= s;
    return *this;
}

Vector& Vector::operator*=(double s) {
    x_ *= s;
    y_ *= s;
    return *this;
}

Vector& Vector::operator/=(double s) {
    if (s == 0) {
        std::cout << "Error: Division by zero!" << std::endl;
    } else {
        x_ /= s;
        y_ /= s;
    }
    return *this;
}

