// Cartesian 3D Vector Class (Header)
// MEL (leblanc1@uvic.ca)
// Created 6 April 2012

#include <iostream>
#include <math.h>

class CartVec
{
 private:
  float i[3]; // These are 3D Vectors
 public:
  CartVec();
  CartVec(float x, float y, float z);

  float &operator[](int index);
  float operator[](int index) const;

  // Arithmetic
  CartVec operator*(float scalar) const; // Scalar Multiplication
  const CartVec &operator*=(float scalar);
  CartVec operator/(float scalar) const; // Scalar Division
  const CartVec &operator/=(float scalar);
  CartVec operator+(const CartVec &prime) const; // Vector Additon
  const CartVec &operator+=(const CartVec &prime);
  CartVec operator-(const CartVec &prime) const; // Vector Subtraction
  const CartVec &operator-=(const CartVec &prime);
  CartVec operator-() const; // Multiply by -1

  // Other functions
  void print(void) const;
  float dot(const CartVec &prime) const;
};
