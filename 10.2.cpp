
class Vector {
    double x_, y_;
public:
    Vector(double x = 0, double y = 0);  
    void print(int precision = 2, bool newLine = true); 
    Vector& operator=(const Vector& v);    
    Vector operator+(const Vector& v) const;
    Vector operator-(const Vector& v) const;
    Vector& operator+=(const Vector& v);
    Vector& operator-=(const Vector& v);
};

Vector::Vector(double x, double y) : x_(x), y_(y) {}

void Vector::print(int precision, bool newLine) {
    std::cout << std::fixed << std::setprecision(precision) << "(" << x_ << ", " << y_ << ")";
    if (newLine) {
        std::cout << std::endl;
    }
}

Vector& Vector::operator=(const Vector& v) {
    if (this == &v) {
        return *this;
    }
    x_ = v.x_;
    y_ = v.y_;
    return *this;
}

Vector Vector::operator+(const Vector& v) const {
    Vector result;
    result.x_ = x_ + v.x_;
    result.y_ = y_ + v.y_;
    return result;
}

Vector Vector::operator-(const Vector& v) const {
    Vector result;
    result.x_ = x_ - v.x_;
    result.y_ = y_ - v.y_;
    return result;
}

Vector& Vector::operator+=(const Vector& v) {
    x_ += v.x_;
    y_ += v.y_;
    return *this;
}

Vector& Vector::operator-=(const Vector& v) {
    x_ -= v.x_;
    y_ -= v.y_;
    return *this;
}



