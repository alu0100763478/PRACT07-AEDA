#ifndef DNI_H
#define DNI_H

#include <iostream>


class DNI
{

private:
	int n_;

public:
	DNI(void): n_(-1) {}
	explicit DNI(int n): n_(n) {}

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

