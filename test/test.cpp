#include <iostream>
#include <json/json.h>
#include "type.hpp"

using namespace std;

int main()
{
	B b;
	vector<A> alist;
	A a1;
	//a1.set_ival(1);
	a1.set_lval(1000);
	a1.set_sval("hello");
	alist.push_back(a1);
	b.set_alist(alist);
	map<string, A> amap;
	A a2;
	a2.set_ival(2);
	//a2.set_lval(2000);
	a2.set_sval("world");
	amap["second"] = a2;
	b.set_amap(amap);

	Json::FastWriter writer;
	JsonSerializerHelper wh;
	b.Serialize(wh);
	cout << writer.write(wh.JsonValue) << endl;

	Json::Value jsval;
	b.json_pack(jsval);
	cout << writer.write(jsval) << endl;

	string buf = writer.write(jsval);
	B b1;
	Json::Reader reader;
	Json::Value value;
	if (reader.parse(buf, value)) {
		JsonSerializerHelper rh;
		rh.JsonValue = value;
		b1.DeSerialize(rh);
		if (b1.get_alist()[0].has_ival())
			cout << b1.get_alist()[0].get_ival() << endl;
		if (b1.get_alist()[0].has_lval())
			cout << b1.get_alist()[0].get_lval() << endl;
		if (b1.get_alist()[0].has_sval())
			cout << b1.get_alist()[0].get_sval() << endl;

		if (b1.get_amap()["second"].has_ival())
			cout << b1.get_amap()["second"].get_ival() << endl;
		if (b1.get_amap()["second"].has_lval())
			cout << b1.get_amap()["second"].get_lval() << endl;
		if (b1.get_amap()["second"].has_sval())
			cout << b1.get_amap()["second"].get_sval() << endl;
	}

	B b2;
	b2.json_unpack(value);
	if (b2.get_alist()[0].has_ival())
		cout << b2.get_alist()[0].get_ival() << endl;
	if (b2.get_alist()[0].has_lval())
		cout << b2.get_alist()[0].get_lval() << endl;
	if (b2.get_alist()[0].has_sval())
		cout << b2.get_alist()[0].get_sval() << endl;

	if (b2.get_amap()["second"].has_ival())
		cout << b2.get_amap()["second"].get_ival() << endl;
	if (b2.get_amap()["second"].has_lval())
		cout << b2.get_amap()["second"].get_lval() << endl;
	if (b2.get_amap()["second"].has_sval())
		cout << b2.get_amap()["second"].get_sval() << endl;

	return 0;
}
