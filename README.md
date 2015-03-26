# C++ class for timing 

Class for measuring CPU time (Timer). Can be used on most OS. Note that the measure unit is 
nanoseconds (10e-9 of a second) which are stored as a uint64_t, i.e. on my 64-bit windows 
machine maximum time measured can be 18446744073709551615 nanoseconds = 213504 days.

**Usage**: Just include the header and use the member functions. See file `test_main.cpp` for 
an example.
