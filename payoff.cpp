#ifndef __PAY_OFF_CPP
#define __PAY_OFF_CPP

#include "payoff.h"

using namespace std;

PayOff::PayOff () {}

//===========
// PayOffCall
//===========

// Constructor with single strike parameter
PayOffCall::PayOffCall(const double& K_) {K = K_;}

// Over-ridden operator() method, which turns PayOffCall into a function object
double PayOffCall::operator() (const double& S) const {
	return max(S-K,0.0);	// Standard European call payoff
}

//===========
// PayOffPut
//===========

// Constructor with single strike parameter
PayOffPut::PayOffPut(const double& K_) {K = K_;}

//Over-ridden operator() method, which turns PayOffCall into a function object
double PayOffPut::operator() (const double& S) const {
	return max(K-S,0.0);	// Standard European put payoff
}

#endif








