struct Point {
    int x, y;
};

class Fruit {
public:
    Fruit() : position({0, 0}) {}
    Fruit(const Point &position) : position(position) {}
    Point GetPosition() const { return position;}

private:
    Point position;
};