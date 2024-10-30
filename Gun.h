#ifndef GUN_H
#define GUN_H




class Gun {
public:
    Gun(int bullets = 5);
    void shoot();
    void print() const;

private:
    int bullets;
};

#endif //GUN_H
