// Cartesian 3D Vector Class
// MEL (leblanc1@uvic.ca)
// Created 6 April 2012

#include "cartesianVector.h"
using namespace std;

CartVec::CartVec()
{

}

CartVec::CartVec(float x, float y, float z)
{
  i[0]=x;
  i[1]=y;
  i[2]=z;
}

float &CartVec::operator[](int index)
{
  return i[index];
}



float CartVec::operator[](int index) const
{
  return i[index];
}

// Arithmetic                                     
CartVec CartVec::operator*(float scalar) const // Scalar Multiplication
{
  return CartVec(i[0]*scalar, i[1]*scalar, i[2]*scalar);
}
const CartVec &CartVec::operator*=(float scalar)
{
  i[0]*=scalar;
  i[1]*=scalar;
  i[2]*=scalar;

  return *this;
}

CartVec CartVec::operator/(float scalar) const // Scalar Division
{
  return CartVec(i[0]/scalar, i[1]/scalar, i[2]/scalar);
}
const CartVec &CartVec::operator/=(float scalar)
{
  i[0]/=scalar;
  i[1]/=scalar;
  i[2]/=scalar;

  return *this;
}

CartVec CartVec::operator+(const CartVec &prime) const // Vector Additon            
{
  return CartVec(i[0]+prime.i[0], i[1]+prime.i[1], i[2]+prime.i[2]);
}

const CartVec &CartVec::operator+=(const CartVec &prime)
{
  i[0]+=prime.i[0];
  i[1]+=prime.i[1];
  i[2]+=prime.i[2];

  return *this;
}

CartVec CartVec::operator-(const CartVec &prime) const // Vector Subtraction
{
  return CartVec(i[0]-prime.i[0], i[1]-prime.i[1], i[2]-prime.i[2]);
}
const CartVec &CartVec::operator-=(const CartVec &prime)
{
  i[0]-=prime.i[0];
  i[1]-=prime.i[1];
  i[2]-=prime.i[2];

  return *this;
}

CartVec CartVec::operator-() const // Multiply by -1
{
  return CartVec(-i[0],-i[1],-i[2]);
}

// Other functions                                                                                 

void CartVec::print(void) const
{
  cout << "(" << i[0] << "," << i[1] << "," << i[2] << ")" << endl;
}

CartVec CartVec::normalize(void) const
{
  float length = sqrt(i[0]*i[0]+i[1]*i[1]+i[2]*i[2]);
  return CartVec(i[0]/length,i[1]/length,i[2]/length);
}

float CartVec::dot(const CartVec &prime) const
{
  return(i[0]*prime.i[0]+i[1]*prime.i[1]+i[2]*prime.i[2]);
}

CartVec CartVec::cross(const CartVec &prime) const
{
  return CartVec(i[1]*prime.i[2]-i[2]*prime.i[1],
		 i[2]*prime.i[0]-i[0]*prime.i[2],
		 i[0]*prime.i[1]-i[1]*prime.i[0]);
}
