#pragma once

#include <math.h>
#include <string>
#include <iostream>
#include <algorithm>

#include "md5.h"


using namespace std;

//
// _hash: hash a k-length DNA sequence into a number.
//

unsigned long long hash(const char * kmer, const long k_len, 
        unsigned long long h);
