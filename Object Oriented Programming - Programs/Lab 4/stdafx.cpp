// stdafx.cpp : source file that includes just the standard includes
// $safeprojectname$.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

//Function Definitions

//Calculating the Modulus of Complex Number
double modulus(Complex num)
{
	double mod;
	mod = sqrt((num.rp*num.rp) + (num.ip*num.ip));
	return (double)mod;
}

//Calculating the Conjugate of Complex Number
Complex conjugate(Complex num)
{
	num.ip = -1 * num.ip;
	return num;
}

//Calculating the Sum of Complex Numbers
Complex sumOf(Complex num, Complex conj)
{
	Complex sum;
	sum.rp = num.rp + conj.rp;
	sum.ip = num.ip + conj.ip;
	return sum;
}

//Calculating the Product of Complex Numbers
Complex product(Complex num, Complex conj)
{
	Complex product;
	product.rp = ((num.rp * conj.rp) - (num.ip * conj.ip));
	product.ip = ((num.rp * conj.ip) + (num.ip * conj.rp));
	return product;
}