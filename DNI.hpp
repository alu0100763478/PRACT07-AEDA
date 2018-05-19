#ifndef DNI_H
#define DNI_H

#include <iostream>


class DNI
{

private:
	int n_;

public:
	DNI(void): n_(-1) {}
<<<<<<< HEAD
	explicit DNI(int n): n_(n) {}
=======
	DNI(int n): n_(n) {}
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034

	int n(void) const
	{
		return n_;
	}

	void operator=(int n)
	{
		n_=n;
	}
	


	
};

	std::ostream& operator << (std::ostream& out, const DNI& dni)
	{
		out << dni.n();
	}
	
	bool operator==(const DNI& a, const DNI& b)
	{
		return a.n()==b.n();
	}
	
	bool operator==(const DNI& a, int n)
	{
		return a.n()==n;
	}
	
	int operator%(const DNI& a, const DNI& b)
	{
		return a.n()%b.n();
	}
	
	bool operator<(const DNI& a, const DNI& b)
	{
		return a.n()<b.n();
	}
	
	bool operator<=(const DNI& a, const DNI& b)
	{
		return a.n()<b.n();
	}
	
	bool operator>(const DNI& a, const DNI& b)
	{
		return a.n()<b.n();
	}
	
	int operator%(const DNI& a, int n)
	{
		return a.n()%n;
	}
	
	int operator/(const DNI& a, int n)
	{
		return a.n()/n;
	}
	
	int operator>(const DNI& a, int n)
	{
		return a.n()>n;
	}
	
	int operator<(const DNI& a, int n)
	{
		return a.n()<n;
	}
#endif 

