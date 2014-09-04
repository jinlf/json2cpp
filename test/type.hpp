#ifndef __TYPE_HPP__
#define __TYPE_HPP__

#include <string>
#include <vector>
#include <map>

#include "define.hpp"

class A
{
private:
	int	ival;
	long lval;
	std::string sval;
public:
	int get_ival() const { return ival; }
	long get_lval() const { return lval; }
	const std::string &get_sval() const { return sval; }
	std::string &get_sval() { return sval; }
	
	void set_ival(int _ival) { ival = _ival; m_flags["ival"] = true; }
	void set_lval(long _lval) { lval = _lval; m_flags["lval"] = true; }
	void set_sval(const std::string _sval) { sval = _sval; m_flags["sval"] = true; }

	bool has_ival() const { return m_flags.find("ival") != m_flags.end(); }
	bool has_lval() const { return m_flags.find("lval") != m_flags.end(); }
	bool has_sval() const { return m_flags.find("sval") != m_flags.end(); }
public:
	JSON_DEFINE(ival, lval, sval);
};

class B
{
private:
	std::vector<A> alist;
	std::map<std::string, A> amap;
public:
	const std::vector<A> &get_alist() const { return alist; }
	std::vector<A> &get_alist() { return alist; }
	const std::map<std::string, A> &get_amap() const { return amap; }
	std::map<std::string, A> &get_amap() { return amap; }

	void set_alist(const std::vector<A> &_alist) { alist = _alist; m_flags["alist"] = true; }
	void set_amap(const std::map<std::string, A> &_amap) { amap = _amap; m_flags["amap"] = true; }

	bool has_alist() const { return m_flags.find("alist") != m_flags.end(); }
	bool has_amap() const { return m_flags.find("amap") != m_flags.end(); }
public:
	JSON_DEFINE(alist, amap);
};

#endif //__TYPE_HPP__
