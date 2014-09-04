#ifndef JSON_DEFINE_HPP__
#define JSON_DEFINE_HPP__

#include <json/json.h>
#include "define.hpp"
#include "json_serializer_helper.hpp"

#define FE_1(WHAT, X) WHAT(X)
#define FE_2(WHAT, X, ...) WHAT(X),FE_1(WHAT, __VA_ARGS__)
#define FE_3(WHAT, X, ...) WHAT(X),FE_2(WHAT, __VA_ARGS__)
#define FE_4(WHAT, X, ...) WHAT(X),FE_3(WHAT, __VA_ARGS__)
#define FE_5(WHAT, X, ...) WHAT(X),FE_4(WHAT, __VA_ARGS__)
#define FE_6(WHAT, X, ...) WHAT(X),FE_5(WHAT, __VA_ARGS__)
#define FE_7(WHAT, X, ...) WHAT(X),FE_6(WHAT, __VA_ARGS__)
#define FE_8(WHAT, X, ...) WHAT(X),FE_7(WHAT, __VA_ARGS__)
#define FE_9(WHAT, X, ...) WHAT(X),FE_8(WHAT, __VA_ARGS__)
#define FE_10(WHAT, X, ...) WHAT(X),FE_9(WHAT, __VA_ARGS__)
#define FE_11(WHAT, X, ...) WHAT(X),FE_10(WHAT, __VA_ARGS__)
#define FE_12(WHAT, X, ...) WHAT(X),FE_11(WHAT, __VA_ARGS__)
#define FE_13(WHAT, X, ...) WHAT(X),FE_12(WHAT, __VA_ARGS__)
#define FE_14(WHAT, X, ...) WHAT(X),FE_13(WHAT, __VA_ARGS__)
#define FE_15(WHAT, X, ...) WHAT(X),FE_14(WHAT, __VA_ARGS__)
#define FE_16(WHAT, X, ...) WHAT(X),FE_15(WHAT, __VA_ARGS__)
#define FE_17(WHAT, X, ...) WHAT(X),FE_16(WHAT, __VA_ARGS__)
#define FE_18(WHAT, X, ...) WHAT(X),FE_17(WHAT, __VA_ARGS__)
#define FE_19(WHAT, X, ...) WHAT(X),FE_18(WHAT, __VA_ARGS__)
#define FE_20(WHAT, X, ...) WHAT(X),FE_19(WHAT, __VA_ARGS__)
#define FE_21(WHAT, X, ...) WHAT(X),FE_20(WHAT, __VA_ARGS__)
#define FE_22(WHAT, X, ...) WHAT(X),FE_21(WHAT, __VA_ARGS__)
#define FE_23(WHAT, X, ...) WHAT(X),FE_22(WHAT, __VA_ARGS__)
#define FE_24(WHAT, X, ...) WHAT(X),FE_23(WHAT, __VA_ARGS__)
#define FE_25(WHAT, X, ...) WHAT(X),FE_24(WHAT, __VA_ARGS__)
#define FE_26(WHAT, X, ...) WHAT(X),FE_25(WHAT, __VA_ARGS__)
#define FE_27(WHAT, X, ...) WHAT(X),FE_26(WHAT, __VA_ARGS__)
#define FE_28(WHAT, X, ...) WHAT(X),FE_27(WHAT, __VA_ARGS__)
#define FE_29(WHAT, X, ...) WHAT(X),FE_28(WHAT, __VA_ARGS__)
#define FE_30(WHAT, X, ...) WHAT(X),FE_29(WHAT, __VA_ARGS__)
#define FE_31(WHAT, X, ...) WHAT(X),FE_30(WHAT, __VA_ARGS__)
#define FE_32(WHAT, X, ...) WHAT(X),FE_31(WHAT, __VA_ARGS__)

#define GET_MACRO(x,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,NAME,...) NAME 

#define FOR_EACH(action, ...) \
    GET_MACRO(,##__VA_ARGS__,FE_32,FE_31,FE_30,FE_29,FE_28,FE_27,FE_26,FE_25,FE_24,FE_23,FE_22,FE_21,FE_20,FE_19,FE_18,FE_17,FE_16,FE_15,FE_14,FE_13,FE_12,FE_11,FE_10,FE_9,FE_8,FE_7,FE_6,FE_5,FE_4,FE_3,FE_2,FE_1)(action,##__VA_ARGS__)

#define EXPAND(...) FOR_EACH(NVP, ##__VA_ARGS__)


#define ST_1(WHAT, X) WHAT(X)
#define ST_2(WHAT, X, ...) WHAT(X);ST_1(WHAT, __VA_ARGS__)
#define ST_3(WHAT, X, ...) WHAT(X);ST_2(WHAT, __VA_ARGS__)
#define ST_4(WHAT, X, ...) WHAT(X);ST_3(WHAT, __VA_ARGS__)
#define ST_5(WHAT, X, ...) WHAT(X);ST_4(WHAT, __VA_ARGS__)
#define ST_6(WHAT, X, ...) WHAT(X);ST_5(WHAT, __VA_ARGS__)
#define ST_7(WHAT, X, ...) WHAT(X);ST_6(WHAT, __VA_ARGS__)
#define ST_8(WHAT, X, ...) WHAT(X);ST_7(WHAT, __VA_ARGS__)
#define ST_9(WHAT, X, ...) WHAT(X);ST_8(WHAT, __VA_ARGS__)
#define ST_10(WHAT, X, ...) WHAT(X);ST_9(WHAT, __VA_ARGS__)
#define ST_11(WHAT, X, ...) WHAT(X);ST_10(WHAT, __VA_ARGS__)
#define ST_12(WHAT, X, ...) WHAT(X);ST_11(WHAT, __VA_ARGS__)
#define ST_13(WHAT, X, ...) WHAT(X);ST_12(WHAT, __VA_ARGS__)
#define ST_14(WHAT, X, ...) WHAT(X);ST_13(WHAT, __VA_ARGS__)
#define ST_15(WHAT, X, ...) WHAT(X);ST_14(WHAT, __VA_ARGS__)
#define ST_16(WHAT, X, ...) WHAT(X);ST_15(WHAT, __VA_ARGS__)
#define ST_17(WHAT, X, ...) WHAT(X);ST_16(WHAT, __VA_ARGS__)
#define ST_18(WHAT, X, ...) WHAT(X);ST_17(WHAT, __VA_ARGS__)
#define ST_19(WHAT, X, ...) WHAT(X);ST_18(WHAT, __VA_ARGS__)
#define ST_20(WHAT, X, ...) WHAT(X);ST_19(WHAT, __VA_ARGS__)
#define ST_21(WHAT, X, ...) WHAT(X);ST_20(WHAT, __VA_ARGS__)
#define ST_22(WHAT, X, ...) WHAT(X);ST_21(WHAT, __VA_ARGS__)
#define ST_23(WHAT, X, ...) WHAT(X);ST_22(WHAT, __VA_ARGS__)
#define ST_24(WHAT, X, ...) WHAT(X);ST_23(WHAT, __VA_ARGS__)
#define ST_25(WHAT, X, ...) WHAT(X);ST_24(WHAT, __VA_ARGS__)
#define ST_26(WHAT, X, ...) WHAT(X);ST_25(WHAT, __VA_ARGS__)
#define ST_27(WHAT, X, ...) WHAT(X);ST_26(WHAT, __VA_ARGS__)
#define ST_28(WHAT, X, ...) WHAT(X);ST_27(WHAT, __VA_ARGS__)
#define ST_29(WHAT, X, ...) WHAT(X);ST_28(WHAT, __VA_ARGS__)
#define ST_30(WHAT, X, ...) WHAT(X);ST_29(WHAT, __VA_ARGS__)
#define ST_31(WHAT, X, ...) WHAT(X);ST_30(WHAT, __VA_ARGS__)
#define ST_32(WHAT, X, ...) WHAT(X);ST_31(WHAT, __VA_ARGS__)

#define FOR_EACH_ST(action, ...) \
    GET_MACRO(,##__VA_ARGS__,ST_32,ST_31,ST_30,ST_29,ST_28,ST_27,ST_26,ST_25,ST_24,ST_23,ST_22,ST_21,ST_20,ST_19,ST_18,ST_17,ST_16,ST_15,ST_14,ST_13,ST_12,ST_11,ST_10,ST_9,ST_8,ST_7,ST_6,ST_5,ST_4,ST_3,ST_2,ST_1)(action,##__VA_ARGS__)

#define SERIALIZE_FUNC(n) \
	do { \
		std::string key = #n ; \
		if (m_flags.find(key) != m_flags.end()) { \
			pk.SerializeNVP(n); \
		} \
	} while(0)

#define SERIALIZE(...) FOR_EACH_ST(SERIALIZE_FUNC, ##__VA_ARGS__)

#define DESERIALIZE_FUNC(n) \
	do { \
		std::string key = #n ; \
		if (pk.JsonValue.isMember(key)) { \
			pk.DeSerializeNVP(n); \
			m_flags[key] = true; \
		} \
	} while(0)

#define DESERIALIZE(...) FOR_EACH_ST(DESERIALIZE_FUNC, ##__VA_ARGS__)


#define JSON_DEFINE(...) \
    void Serialize(JsonSerializerHelper &pk) const \
    {	\
      SERIALIZE(__VA_ARGS__);	\
    }	\
    void DeSerialize(const JsonSerializerHelper &pk) \
	{	\
	  DESERIALIZE(__VA_ARGS__); \
    }	\
	void json_pack(Json::Value& o) const \
	{ \
		JsonSerializerHelper pk; 	\
		json::type::make_define(EXPAND(__VA_ARGS__)).json_pack(pk, m_flags); \
		o = pk.JsonValue; 	\
	} \
	void json_unpack(const Json::Value& o) \
	{ \
		JsonSerializerHelper pk;	\
		pk.JsonValue = o;	\
		json::type::make_define(EXPAND(__VA_ARGS__)).json_unpack(pk, m_flags); \
	} \
private: \
    std::map<std::string, bool> m_flags; 

namespace json {
namespace type {


template <typename A0 = void, typename A1 = void, typename A2 = void, typename A3 = void, typename A4 = void, typename A5 = void, typename A6 = void, typename A7 = void, typename A8 = void, typename A9 = void, typename A10 = void, typename A11 = void, typename A12 = void, typename A13 = void, typename A14 = void, typename A15 = void, typename A16 = void, typename A17 = void, typename A18 = void, typename A19 = void, typename A20 = void, typename A21 = void, typename A22 = void, typename A23 = void, typename A24 = void, typename A25 = void, typename A26 = void, typename A27 = void, typename A28 = void, typename A29 = void, typename A30 = void, typename A31 = void, typename A32 = void>
struct define;


template <>
struct define<> {
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		pk.JsonValue = Json::Value::null;
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
	}
};

template <typename A0>
struct define<A0> {
	define(const std::string& _k0, A0& _a0) :
		k0(_k0), a0(_a0) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
};

template <typename A0, typename A1>
struct define<A0, A1> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
};

template <typename A0, typename A1, typename A2>
struct define<A0, A1, A2> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
};

template <typename A0, typename A1, typename A2, typename A3>
struct define<A0, A1, A2, A3> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4>
struct define<A0, A1, A2, A3, A4> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5>
struct define<A0, A1, A2, A3, A4, A5> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
struct define<A0, A1, A2, A3, A4, A5, A6> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
struct define<A0, A1, A2, A3, A4, A5, A6, A7> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20, const std::string& _k21, A21& _a21) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20), k21(_k21), a21(_a21) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
		if (m_flags.find(k21) != m_flags.end()) {
			pk.Serialize(k21, a21);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
		if (pk.JsonValue.isMember(k21)) { 
			pk.DeSerialize(k21, a21); 
			m_flags[k21]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
	std::string k21;
	A21& a21;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20, const std::string& _k21, A21& _a21, const std::string& _k22, A22& _a22) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20), k21(_k21), a21(_a21), k22(_k22), a22(_a22) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
		if (m_flags.find(k21) != m_flags.end()) {
			pk.Serialize(k21, a21);
		}
		if (m_flags.find(k22) != m_flags.end()) {
			pk.Serialize(k22, a22);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
		if (pk.JsonValue.isMember(k21)) { 
			pk.DeSerialize(k21, a21); 
			m_flags[k21]=true; 
		}
		if (pk.JsonValue.isMember(k22)) { 
			pk.DeSerialize(k22, a22); 
			m_flags[k22]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
	std::string k21;
	A21& a21;
	std::string k22;
	A22& a22;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20, const std::string& _k21, A21& _a21, const std::string& _k22, A22& _a22, const std::string& _k23, A23& _a23) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20), k21(_k21), a21(_a21), k22(_k22), a22(_a22), k23(_k23), a23(_a23) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
		if (m_flags.find(k21) != m_flags.end()) {
			pk.Serialize(k21, a21);
		}
		if (m_flags.find(k22) != m_flags.end()) {
			pk.Serialize(k22, a22);
		}
		if (m_flags.find(k23) != m_flags.end()) {
			pk.Serialize(k23, a23);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
		if (pk.JsonValue.isMember(k21)) { 
			pk.DeSerialize(k21, a21); 
			m_flags[k21]=true; 
		}
		if (pk.JsonValue.isMember(k22)) { 
			pk.DeSerialize(k22, a22); 
			m_flags[k22]=true; 
		}
		if (pk.JsonValue.isMember(k23)) { 
			pk.DeSerialize(k23, a23); 
			m_flags[k23]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
	std::string k21;
	A21& a21;
	std::string k22;
	A22& a22;
	std::string k23;
	A23& a23;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20, const std::string& _k21, A21& _a21, const std::string& _k22, A22& _a22, const std::string& _k23, A23& _a23, const std::string& _k24, A24& _a24) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20), k21(_k21), a21(_a21), k22(_k22), a22(_a22), k23(_k23), a23(_a23), k24(_k24), a24(_a24) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
		if (m_flags.find(k21) != m_flags.end()) {
			pk.Serialize(k21, a21);
		}
		if (m_flags.find(k22) != m_flags.end()) {
			pk.Serialize(k22, a22);
		}
		if (m_flags.find(k23) != m_flags.end()) {
			pk.Serialize(k23, a23);
		}
		if (m_flags.find(k24) != m_flags.end()) {
			pk.Serialize(k24, a24);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
		if (pk.JsonValue.isMember(k21)) { 
			pk.DeSerialize(k21, a21); 
			m_flags[k21]=true; 
		}
		if (pk.JsonValue.isMember(k22)) { 
			pk.DeSerialize(k22, a22); 
			m_flags[k22]=true; 
		}
		if (pk.JsonValue.isMember(k23)) { 
			pk.DeSerialize(k23, a23); 
			m_flags[k23]=true; 
		}
		if (pk.JsonValue.isMember(k24)) { 
			pk.DeSerialize(k24, a24); 
			m_flags[k24]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
	std::string k21;
	A21& a21;
	std::string k22;
	A22& a22;
	std::string k23;
	A23& a23;
	std::string k24;
	A24& a24;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20, const std::string& _k21, A21& _a21, const std::string& _k22, A22& _a22, const std::string& _k23, A23& _a23, const std::string& _k24, A24& _a24, const std::string& _k25, A25& _a25) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20), k21(_k21), a21(_a21), k22(_k22), a22(_a22), k23(_k23), a23(_a23), k24(_k24), a24(_a24), k25(_k25), a25(_a25) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
		if (m_flags.find(k21) != m_flags.end()) {
			pk.Serialize(k21, a21);
		}
		if (m_flags.find(k22) != m_flags.end()) {
			pk.Serialize(k22, a22);
		}
		if (m_flags.find(k23) != m_flags.end()) {
			pk.Serialize(k23, a23);
		}
		if (m_flags.find(k24) != m_flags.end()) {
			pk.Serialize(k24, a24);
		}
		if (m_flags.find(k25) != m_flags.end()) {
			pk.Serialize(k25, a25);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
		if (pk.JsonValue.isMember(k21)) { 
			pk.DeSerialize(k21, a21); 
			m_flags[k21]=true; 
		}
		if (pk.JsonValue.isMember(k22)) { 
			pk.DeSerialize(k22, a22); 
			m_flags[k22]=true; 
		}
		if (pk.JsonValue.isMember(k23)) { 
			pk.DeSerialize(k23, a23); 
			m_flags[k23]=true; 
		}
		if (pk.JsonValue.isMember(k24)) { 
			pk.DeSerialize(k24, a24); 
			m_flags[k24]=true; 
		}
		if (pk.JsonValue.isMember(k25)) { 
			pk.DeSerialize(k25, a25); 
			m_flags[k25]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
	std::string k21;
	A21& a21;
	std::string k22;
	A22& a22;
	std::string k23;
	A23& a23;
	std::string k24;
	A24& a24;
	std::string k25;
	A25& a25;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20, const std::string& _k21, A21& _a21, const std::string& _k22, A22& _a22, const std::string& _k23, A23& _a23, const std::string& _k24, A24& _a24, const std::string& _k25, A25& _a25, const std::string& _k26, A26& _a26) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20), k21(_k21), a21(_a21), k22(_k22), a22(_a22), k23(_k23), a23(_a23), k24(_k24), a24(_a24), k25(_k25), a25(_a25), k26(_k26), a26(_a26) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
		if (m_flags.find(k21) != m_flags.end()) {
			pk.Serialize(k21, a21);
		}
		if (m_flags.find(k22) != m_flags.end()) {
			pk.Serialize(k22, a22);
		}
		if (m_flags.find(k23) != m_flags.end()) {
			pk.Serialize(k23, a23);
		}
		if (m_flags.find(k24) != m_flags.end()) {
			pk.Serialize(k24, a24);
		}
		if (m_flags.find(k25) != m_flags.end()) {
			pk.Serialize(k25, a25);
		}
		if (m_flags.find(k26) != m_flags.end()) {
			pk.Serialize(k26, a26);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
		if (pk.JsonValue.isMember(k21)) { 
			pk.DeSerialize(k21, a21); 
			m_flags[k21]=true; 
		}
		if (pk.JsonValue.isMember(k22)) { 
			pk.DeSerialize(k22, a22); 
			m_flags[k22]=true; 
		}
		if (pk.JsonValue.isMember(k23)) { 
			pk.DeSerialize(k23, a23); 
			m_flags[k23]=true; 
		}
		if (pk.JsonValue.isMember(k24)) { 
			pk.DeSerialize(k24, a24); 
			m_flags[k24]=true; 
		}
		if (pk.JsonValue.isMember(k25)) { 
			pk.DeSerialize(k25, a25); 
			m_flags[k25]=true; 
		}
		if (pk.JsonValue.isMember(k26)) { 
			pk.DeSerialize(k26, a26); 
			m_flags[k26]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
	std::string k21;
	A21& a21;
	std::string k22;
	A22& a22;
	std::string k23;
	A23& a23;
	std::string k24;
	A24& a24;
	std::string k25;
	A25& a25;
	std::string k26;
	A26& a26;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20, const std::string& _k21, A21& _a21, const std::string& _k22, A22& _a22, const std::string& _k23, A23& _a23, const std::string& _k24, A24& _a24, const std::string& _k25, A25& _a25, const std::string& _k26, A26& _a26, const std::string& _k27, A27& _a27) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20), k21(_k21), a21(_a21), k22(_k22), a22(_a22), k23(_k23), a23(_a23), k24(_k24), a24(_a24), k25(_k25), a25(_a25), k26(_k26), a26(_a26), k27(_k27), a27(_a27) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
		if (m_flags.find(k21) != m_flags.end()) {
			pk.Serialize(k21, a21);
		}
		if (m_flags.find(k22) != m_flags.end()) {
			pk.Serialize(k22, a22);
		}
		if (m_flags.find(k23) != m_flags.end()) {
			pk.Serialize(k23, a23);
		}
		if (m_flags.find(k24) != m_flags.end()) {
			pk.Serialize(k24, a24);
		}
		if (m_flags.find(k25) != m_flags.end()) {
			pk.Serialize(k25, a25);
		}
		if (m_flags.find(k26) != m_flags.end()) {
			pk.Serialize(k26, a26);
		}
		if (m_flags.find(k27) != m_flags.end()) {
			pk.Serialize(k27, a27);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
		if (pk.JsonValue.isMember(k21)) { 
			pk.DeSerialize(k21, a21); 
			m_flags[k21]=true; 
		}
		if (pk.JsonValue.isMember(k22)) { 
			pk.DeSerialize(k22, a22); 
			m_flags[k22]=true; 
		}
		if (pk.JsonValue.isMember(k23)) { 
			pk.DeSerialize(k23, a23); 
			m_flags[k23]=true; 
		}
		if (pk.JsonValue.isMember(k24)) { 
			pk.DeSerialize(k24, a24); 
			m_flags[k24]=true; 
		}
		if (pk.JsonValue.isMember(k25)) { 
			pk.DeSerialize(k25, a25); 
			m_flags[k25]=true; 
		}
		if (pk.JsonValue.isMember(k26)) { 
			pk.DeSerialize(k26, a26); 
			m_flags[k26]=true; 
		}
		if (pk.JsonValue.isMember(k27)) { 
			pk.DeSerialize(k27, a27); 
			m_flags[k27]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
	std::string k21;
	A21& a21;
	std::string k22;
	A22& a22;
	std::string k23;
	A23& a23;
	std::string k24;
	A24& a24;
	std::string k25;
	A25& a25;
	std::string k26;
	A26& a26;
	std::string k27;
	A27& a27;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20, const std::string& _k21, A21& _a21, const std::string& _k22, A22& _a22, const std::string& _k23, A23& _a23, const std::string& _k24, A24& _a24, const std::string& _k25, A25& _a25, const std::string& _k26, A26& _a26, const std::string& _k27, A27& _a27, const std::string& _k28, A28& _a28) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20), k21(_k21), a21(_a21), k22(_k22), a22(_a22), k23(_k23), a23(_a23), k24(_k24), a24(_a24), k25(_k25), a25(_a25), k26(_k26), a26(_a26), k27(_k27), a27(_a27), k28(_k28), a28(_a28) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
		if (m_flags.find(k21) != m_flags.end()) {
			pk.Serialize(k21, a21);
		}
		if (m_flags.find(k22) != m_flags.end()) {
			pk.Serialize(k22, a22);
		}
		if (m_flags.find(k23) != m_flags.end()) {
			pk.Serialize(k23, a23);
		}
		if (m_flags.find(k24) != m_flags.end()) {
			pk.Serialize(k24, a24);
		}
		if (m_flags.find(k25) != m_flags.end()) {
			pk.Serialize(k25, a25);
		}
		if (m_flags.find(k26) != m_flags.end()) {
			pk.Serialize(k26, a26);
		}
		if (m_flags.find(k27) != m_flags.end()) {
			pk.Serialize(k27, a27);
		}
		if (m_flags.find(k28) != m_flags.end()) {
			pk.Serialize(k28, a28);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
		if (pk.JsonValue.isMember(k21)) { 
			pk.DeSerialize(k21, a21); 
			m_flags[k21]=true; 
		}
		if (pk.JsonValue.isMember(k22)) { 
			pk.DeSerialize(k22, a22); 
			m_flags[k22]=true; 
		}
		if (pk.JsonValue.isMember(k23)) { 
			pk.DeSerialize(k23, a23); 
			m_flags[k23]=true; 
		}
		if (pk.JsonValue.isMember(k24)) { 
			pk.DeSerialize(k24, a24); 
			m_flags[k24]=true; 
		}
		if (pk.JsonValue.isMember(k25)) { 
			pk.DeSerialize(k25, a25); 
			m_flags[k25]=true; 
		}
		if (pk.JsonValue.isMember(k26)) { 
			pk.DeSerialize(k26, a26); 
			m_flags[k26]=true; 
		}
		if (pk.JsonValue.isMember(k27)) { 
			pk.DeSerialize(k27, a27); 
			m_flags[k27]=true; 
		}
		if (pk.JsonValue.isMember(k28)) { 
			pk.DeSerialize(k28, a28); 
			m_flags[k28]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
	std::string k21;
	A21& a21;
	std::string k22;
	A22& a22;
	std::string k23;
	A23& a23;
	std::string k24;
	A24& a24;
	std::string k25;
	A25& a25;
	std::string k26;
	A26& a26;
	std::string k27;
	A27& a27;
	std::string k28;
	A28& a28;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20, const std::string& _k21, A21& _a21, const std::string& _k22, A22& _a22, const std::string& _k23, A23& _a23, const std::string& _k24, A24& _a24, const std::string& _k25, A25& _a25, const std::string& _k26, A26& _a26, const std::string& _k27, A27& _a27, const std::string& _k28, A28& _a28, const std::string& _k29, A29& _a29) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20), k21(_k21), a21(_a21), k22(_k22), a22(_a22), k23(_k23), a23(_a23), k24(_k24), a24(_a24), k25(_k25), a25(_a25), k26(_k26), a26(_a26), k27(_k27), a27(_a27), k28(_k28), a28(_a28), k29(_k29), a29(_a29) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
		if (m_flags.find(k21) != m_flags.end()) {
			pk.Serialize(k21, a21);
		}
		if (m_flags.find(k22) != m_flags.end()) {
			pk.Serialize(k22, a22);
		}
		if (m_flags.find(k23) != m_flags.end()) {
			pk.Serialize(k23, a23);
		}
		if (m_flags.find(k24) != m_flags.end()) {
			pk.Serialize(k24, a24);
		}
		if (m_flags.find(k25) != m_flags.end()) {
			pk.Serialize(k25, a25);
		}
		if (m_flags.find(k26) != m_flags.end()) {
			pk.Serialize(k26, a26);
		}
		if (m_flags.find(k27) != m_flags.end()) {
			pk.Serialize(k27, a27);
		}
		if (m_flags.find(k28) != m_flags.end()) {
			pk.Serialize(k28, a28);
		}
		if (m_flags.find(k29) != m_flags.end()) {
			pk.Serialize(k29, a29);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
		if (pk.JsonValue.isMember(k21)) { 
			pk.DeSerialize(k21, a21); 
			m_flags[k21]=true; 
		}
		if (pk.JsonValue.isMember(k22)) { 
			pk.DeSerialize(k22, a22); 
			m_flags[k22]=true; 
		}
		if (pk.JsonValue.isMember(k23)) { 
			pk.DeSerialize(k23, a23); 
			m_flags[k23]=true; 
		}
		if (pk.JsonValue.isMember(k24)) { 
			pk.DeSerialize(k24, a24); 
			m_flags[k24]=true; 
		}
		if (pk.JsonValue.isMember(k25)) { 
			pk.DeSerialize(k25, a25); 
			m_flags[k25]=true; 
		}
		if (pk.JsonValue.isMember(k26)) { 
			pk.DeSerialize(k26, a26); 
			m_flags[k26]=true; 
		}
		if (pk.JsonValue.isMember(k27)) { 
			pk.DeSerialize(k27, a27); 
			m_flags[k27]=true; 
		}
		if (pk.JsonValue.isMember(k28)) { 
			pk.DeSerialize(k28, a28); 
			m_flags[k28]=true; 
		}
		if (pk.JsonValue.isMember(k29)) { 
			pk.DeSerialize(k29, a29); 
			m_flags[k29]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
	std::string k21;
	A21& a21;
	std::string k22;
	A22& a22;
	std::string k23;
	A23& a23;
	std::string k24;
	A24& a24;
	std::string k25;
	A25& a25;
	std::string k26;
	A26& a26;
	std::string k27;
	A27& a27;
	std::string k28;
	A28& a28;
	std::string k29;
	A29& a29;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20, const std::string& _k21, A21& _a21, const std::string& _k22, A22& _a22, const std::string& _k23, A23& _a23, const std::string& _k24, A24& _a24, const std::string& _k25, A25& _a25, const std::string& _k26, A26& _a26, const std::string& _k27, A27& _a27, const std::string& _k28, A28& _a28, const std::string& _k29, A29& _a29, const std::string& _k30, A30& _a30) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20), k21(_k21), a21(_a21), k22(_k22), a22(_a22), k23(_k23), a23(_a23), k24(_k24), a24(_a24), k25(_k25), a25(_a25), k26(_k26), a26(_a26), k27(_k27), a27(_a27), k28(_k28), a28(_a28), k29(_k29), a29(_a29), k30(_k30), a30(_a30) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
		if (m_flags.find(k21) != m_flags.end()) {
			pk.Serialize(k21, a21);
		}
		if (m_flags.find(k22) != m_flags.end()) {
			pk.Serialize(k22, a22);
		}
		if (m_flags.find(k23) != m_flags.end()) {
			pk.Serialize(k23, a23);
		}
		if (m_flags.find(k24) != m_flags.end()) {
			pk.Serialize(k24, a24);
		}
		if (m_flags.find(k25) != m_flags.end()) {
			pk.Serialize(k25, a25);
		}
		if (m_flags.find(k26) != m_flags.end()) {
			pk.Serialize(k26, a26);
		}
		if (m_flags.find(k27) != m_flags.end()) {
			pk.Serialize(k27, a27);
		}
		if (m_flags.find(k28) != m_flags.end()) {
			pk.Serialize(k28, a28);
		}
		if (m_flags.find(k29) != m_flags.end()) {
			pk.Serialize(k29, a29);
		}
		if (m_flags.find(k30) != m_flags.end()) {
			pk.Serialize(k30, a30);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
		if (pk.JsonValue.isMember(k21)) { 
			pk.DeSerialize(k21, a21); 
			m_flags[k21]=true; 
		}
		if (pk.JsonValue.isMember(k22)) { 
			pk.DeSerialize(k22, a22); 
			m_flags[k22]=true; 
		}
		if (pk.JsonValue.isMember(k23)) { 
			pk.DeSerialize(k23, a23); 
			m_flags[k23]=true; 
		}
		if (pk.JsonValue.isMember(k24)) { 
			pk.DeSerialize(k24, a24); 
			m_flags[k24]=true; 
		}
		if (pk.JsonValue.isMember(k25)) { 
			pk.DeSerialize(k25, a25); 
			m_flags[k25]=true; 
		}
		if (pk.JsonValue.isMember(k26)) { 
			pk.DeSerialize(k26, a26); 
			m_flags[k26]=true; 
		}
		if (pk.JsonValue.isMember(k27)) { 
			pk.DeSerialize(k27, a27); 
			m_flags[k27]=true; 
		}
		if (pk.JsonValue.isMember(k28)) { 
			pk.DeSerialize(k28, a28); 
			m_flags[k28]=true; 
		}
		if (pk.JsonValue.isMember(k29)) { 
			pk.DeSerialize(k29, a29); 
			m_flags[k29]=true; 
		}
		if (pk.JsonValue.isMember(k30)) { 
			pk.DeSerialize(k30, a30); 
			m_flags[k30]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
	std::string k21;
	A21& a21;
	std::string k22;
	A22& a22;
	std::string k23;
	A23& a23;
	std::string k24;
	A24& a24;
	std::string k25;
	A25& a25;
	std::string k26;
	A26& a26;
	std::string k27;
	A27& a27;
	std::string k28;
	A28& a28;
	std::string k29;
	A29& a29;
	std::string k30;
	A30& a30;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31>
struct define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31> {
	define(const std::string& _k0, A0& _a0, const std::string& _k1, A1& _a1, const std::string& _k2, A2& _a2, const std::string& _k3, A3& _a3, const std::string& _k4, A4& _a4, const std::string& _k5, A5& _a5, const std::string& _k6, A6& _a6, const std::string& _k7, A7& _a7, const std::string& _k8, A8& _a8, const std::string& _k9, A9& _a9, const std::string& _k10, A10& _a10, const std::string& _k11, A11& _a11, const std::string& _k12, A12& _a12, const std::string& _k13, A13& _a13, const std::string& _k14, A14& _a14, const std::string& _k15, A15& _a15, const std::string& _k16, A16& _a16, const std::string& _k17, A17& _a17, const std::string& _k18, A18& _a18, const std::string& _k19, A19& _a19, const std::string& _k20, A20& _a20, const std::string& _k21, A21& _a21, const std::string& _k22, A22& _a22, const std::string& _k23, A23& _a23, const std::string& _k24, A24& _a24, const std::string& _k25, A25& _a25, const std::string& _k26, A26& _a26, const std::string& _k27, A27& _a27, const std::string& _k28, A28& _a28, const std::string& _k29, A29& _a29, const std::string& _k30, A30& _a30, const std::string& _k31, A31& _a31) :
		k0(_k0), a0(_a0), k1(_k1), a1(_a1), k2(_k2), a2(_a2), k3(_k3), a3(_a3), k4(_k4), a4(_a4), k5(_k5), a5(_a5), k6(_k6), a6(_a6), k7(_k7), a7(_a7), k8(_k8), a8(_a8), k9(_k9), a9(_a9), k10(_k10), a10(_a10), k11(_k11), a11(_a11), k12(_k12), a12(_a12), k13(_k13), a13(_a13), k14(_k14), a14(_a14), k15(_k15), a15(_a15), k16(_k16), a16(_a16), k17(_k17), a17(_a17), k18(_k18), a18(_a18), k19(_k19), a19(_a19), k20(_k20), a20(_a20), k21(_k21), a21(_a21), k22(_k22), a22(_a22), k23(_k23), a23(_a23), k24(_k24), a24(_a24), k25(_k25), a25(_a25), k26(_k26), a26(_a26), k27(_k27), a27(_a27), k28(_k28), a28(_a28), k29(_k29), a29(_a29), k30(_k30), a30(_a30), k31(_k31), a31(_a31) {}
	void json_pack(JsonSerializerHelper& pk, const std::map<std::string, bool>& m_flags) const
	{
		if (m_flags.find(k0) != m_flags.end()) {
			pk.Serialize(k0, a0);
		}
		if (m_flags.find(k1) != m_flags.end()) {
			pk.Serialize(k1, a1);
		}
		if (m_flags.find(k2) != m_flags.end()) {
			pk.Serialize(k2, a2);
		}
		if (m_flags.find(k3) != m_flags.end()) {
			pk.Serialize(k3, a3);
		}
		if (m_flags.find(k4) != m_flags.end()) {
			pk.Serialize(k4, a4);
		}
		if (m_flags.find(k5) != m_flags.end()) {
			pk.Serialize(k5, a5);
		}
		if (m_flags.find(k6) != m_flags.end()) {
			pk.Serialize(k6, a6);
		}
		if (m_flags.find(k7) != m_flags.end()) {
			pk.Serialize(k7, a7);
		}
		if (m_flags.find(k8) != m_flags.end()) {
			pk.Serialize(k8, a8);
		}
		if (m_flags.find(k9) != m_flags.end()) {
			pk.Serialize(k9, a9);
		}
		if (m_flags.find(k10) != m_flags.end()) {
			pk.Serialize(k10, a10);
		}
		if (m_flags.find(k11) != m_flags.end()) {
			pk.Serialize(k11, a11);
		}
		if (m_flags.find(k12) != m_flags.end()) {
			pk.Serialize(k12, a12);
		}
		if (m_flags.find(k13) != m_flags.end()) {
			pk.Serialize(k13, a13);
		}
		if (m_flags.find(k14) != m_flags.end()) {
			pk.Serialize(k14, a14);
		}
		if (m_flags.find(k15) != m_flags.end()) {
			pk.Serialize(k15, a15);
		}
		if (m_flags.find(k16) != m_flags.end()) {
			pk.Serialize(k16, a16);
		}
		if (m_flags.find(k17) != m_flags.end()) {
			pk.Serialize(k17, a17);
		}
		if (m_flags.find(k18) != m_flags.end()) {
			pk.Serialize(k18, a18);
		}
		if (m_flags.find(k19) != m_flags.end()) {
			pk.Serialize(k19, a19);
		}
		if (m_flags.find(k20) != m_flags.end()) {
			pk.Serialize(k20, a20);
		}
		if (m_flags.find(k21) != m_flags.end()) {
			pk.Serialize(k21, a21);
		}
		if (m_flags.find(k22) != m_flags.end()) {
			pk.Serialize(k22, a22);
		}
		if (m_flags.find(k23) != m_flags.end()) {
			pk.Serialize(k23, a23);
		}
		if (m_flags.find(k24) != m_flags.end()) {
			pk.Serialize(k24, a24);
		}
		if (m_flags.find(k25) != m_flags.end()) {
			pk.Serialize(k25, a25);
		}
		if (m_flags.find(k26) != m_flags.end()) {
			pk.Serialize(k26, a26);
		}
		if (m_flags.find(k27) != m_flags.end()) {
			pk.Serialize(k27, a27);
		}
		if (m_flags.find(k28) != m_flags.end()) {
			pk.Serialize(k28, a28);
		}
		if (m_flags.find(k29) != m_flags.end()) {
			pk.Serialize(k29, a29);
		}
		if (m_flags.find(k30) != m_flags.end()) {
			pk.Serialize(k30, a30);
		}
		if (m_flags.find(k31) != m_flags.end()) {
			pk.Serialize(k31, a31);
		}
	}
	void json_unpack(JsonSerializerHelper &pk, std::map<std::string, bool>& m_flags)
	{
		if (pk.JsonValue.isMember(k0)) { 
			pk.DeSerialize(k0, a0); 
			m_flags[k0]=true; 
		}
		if (pk.JsonValue.isMember(k1)) { 
			pk.DeSerialize(k1, a1); 
			m_flags[k1]=true; 
		}
		if (pk.JsonValue.isMember(k2)) { 
			pk.DeSerialize(k2, a2); 
			m_flags[k2]=true; 
		}
		if (pk.JsonValue.isMember(k3)) { 
			pk.DeSerialize(k3, a3); 
			m_flags[k3]=true; 
		}
		if (pk.JsonValue.isMember(k4)) { 
			pk.DeSerialize(k4, a4); 
			m_flags[k4]=true; 
		}
		if (pk.JsonValue.isMember(k5)) { 
			pk.DeSerialize(k5, a5); 
			m_flags[k5]=true; 
		}
		if (pk.JsonValue.isMember(k6)) { 
			pk.DeSerialize(k6, a6); 
			m_flags[k6]=true; 
		}
		if (pk.JsonValue.isMember(k7)) { 
			pk.DeSerialize(k7, a7); 
			m_flags[k7]=true; 
		}
		if (pk.JsonValue.isMember(k8)) { 
			pk.DeSerialize(k8, a8); 
			m_flags[k8]=true; 
		}
		if (pk.JsonValue.isMember(k9)) { 
			pk.DeSerialize(k9, a9); 
			m_flags[k9]=true; 
		}
		if (pk.JsonValue.isMember(k10)) { 
			pk.DeSerialize(k10, a10); 
			m_flags[k10]=true; 
		}
		if (pk.JsonValue.isMember(k11)) { 
			pk.DeSerialize(k11, a11); 
			m_flags[k11]=true; 
		}
		if (pk.JsonValue.isMember(k12)) { 
			pk.DeSerialize(k12, a12); 
			m_flags[k12]=true; 
		}
		if (pk.JsonValue.isMember(k13)) { 
			pk.DeSerialize(k13, a13); 
			m_flags[k13]=true; 
		}
		if (pk.JsonValue.isMember(k14)) { 
			pk.DeSerialize(k14, a14); 
			m_flags[k14]=true; 
		}
		if (pk.JsonValue.isMember(k15)) { 
			pk.DeSerialize(k15, a15); 
			m_flags[k15]=true; 
		}
		if (pk.JsonValue.isMember(k16)) { 
			pk.DeSerialize(k16, a16); 
			m_flags[k16]=true; 
		}
		if (pk.JsonValue.isMember(k17)) { 
			pk.DeSerialize(k17, a17); 
			m_flags[k17]=true; 
		}
		if (pk.JsonValue.isMember(k18)) { 
			pk.DeSerialize(k18, a18); 
			m_flags[k18]=true; 
		}
		if (pk.JsonValue.isMember(k19)) { 
			pk.DeSerialize(k19, a19); 
			m_flags[k19]=true; 
		}
		if (pk.JsonValue.isMember(k20)) { 
			pk.DeSerialize(k20, a20); 
			m_flags[k20]=true; 
		}
		if (pk.JsonValue.isMember(k21)) { 
			pk.DeSerialize(k21, a21); 
			m_flags[k21]=true; 
		}
		if (pk.JsonValue.isMember(k22)) { 
			pk.DeSerialize(k22, a22); 
			m_flags[k22]=true; 
		}
		if (pk.JsonValue.isMember(k23)) { 
			pk.DeSerialize(k23, a23); 
			m_flags[k23]=true; 
		}
		if (pk.JsonValue.isMember(k24)) { 
			pk.DeSerialize(k24, a24); 
			m_flags[k24]=true; 
		}
		if (pk.JsonValue.isMember(k25)) { 
			pk.DeSerialize(k25, a25); 
			m_flags[k25]=true; 
		}
		if (pk.JsonValue.isMember(k26)) { 
			pk.DeSerialize(k26, a26); 
			m_flags[k26]=true; 
		}
		if (pk.JsonValue.isMember(k27)) { 
			pk.DeSerialize(k27, a27); 
			m_flags[k27]=true; 
		}
		if (pk.JsonValue.isMember(k28)) { 
			pk.DeSerialize(k28, a28); 
			m_flags[k28]=true; 
		}
		if (pk.JsonValue.isMember(k29)) { 
			pk.DeSerialize(k29, a29); 
			m_flags[k29]=true; 
		}
		if (pk.JsonValue.isMember(k30)) { 
			pk.DeSerialize(k30, a30); 
			m_flags[k30]=true; 
		}
		if (pk.JsonValue.isMember(k31)) { 
			pk.DeSerialize(k31, a31); 
			m_flags[k31]=true; 
		}
	}
	
	std::string k0;
	A0& a0;
	std::string k1;
	A1& a1;
	std::string k2;
	A2& a2;
	std::string k3;
	A3& a3;
	std::string k4;
	A4& a4;
	std::string k5;
	A5& a5;
	std::string k6;
	A6& a6;
	std::string k7;
	A7& a7;
	std::string k8;
	A8& a8;
	std::string k9;
	A9& a9;
	std::string k10;
	A10& a10;
	std::string k11;
	A11& a11;
	std::string k12;
	A12& a12;
	std::string k13;
	A13& a13;
	std::string k14;
	A14& a14;
	std::string k15;
	A15& a15;
	std::string k16;
	A16& a16;
	std::string k17;
	A17& a17;
	std::string k18;
	A18& a18;
	std::string k19;
	A19& a19;
	std::string k20;
	A20& a20;
	std::string k21;
	A21& a21;
	std::string k22;
	A22& a22;
	std::string k23;
	A23& a23;
	std::string k24;
	A24& a24;
	std::string k25;
	A25& a25;
	std::string k26;
	A26& a26;
	std::string k27;
	A27& a27;
	std::string k28;
	A28& a28;
	std::string k29;
	A29& a29;
	std::string k30;
	A30& a30;
	std::string k31;
	A31& a31;
};


inline define<> make_define()
{
	return define<>();
}

template <typename A0>
define<A0> make_define(const std::string& k0, A0& a0)
{
	return define<A0>(k0, a0);
}

template <typename A0, typename A1>
define<A0, A1> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1)
{
	return define<A0, A1>(k0, a0, k1, a1);
}

template <typename A0, typename A1, typename A2>
define<A0, A1, A2> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2)
{
	return define<A0, A1, A2>(k0, a0, k1, a1, k2, a2);
}

template <typename A0, typename A1, typename A2, typename A3>
define<A0, A1, A2, A3> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3)
{
	return define<A0, A1, A2, A3>(k0, a0, k1, a1, k2, a2, k3, a3);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4>
define<A0, A1, A2, A3, A4> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4)
{
	return define<A0, A1, A2, A3, A4>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5>
define<A0, A1, A2, A3, A4, A5> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5)
{
	return define<A0, A1, A2, A3, A4, A5>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
define<A0, A1, A2, A3, A4, A5, A6> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6)
{
	return define<A0, A1, A2, A3, A4, A5, A6>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
define<A0, A1, A2, A3, A4, A5, A6, A7> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20, const std::string& k21, A21& a21)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20, k21, a21);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20, const std::string& k21, A21& a21, const std::string& k22, A22& a22)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20, k21, a21, k22, a22);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20, const std::string& k21, A21& a21, const std::string& k22, A22& a22, const std::string& k23, A23& a23)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20, k21, a21, k22, a22, k23, a23);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20, const std::string& k21, A21& a21, const std::string& k22, A22& a22, const std::string& k23, A23& a23, const std::string& k24, A24& a24)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20, k21, a21, k22, a22, k23, a23, k24, a24);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20, const std::string& k21, A21& a21, const std::string& k22, A22& a22, const std::string& k23, A23& a23, const std::string& k24, A24& a24, const std::string& k25, A25& a25)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20, k21, a21, k22, a22, k23, a23, k24, a24, k25, a25);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20, const std::string& k21, A21& a21, const std::string& k22, A22& a22, const std::string& k23, A23& a23, const std::string& k24, A24& a24, const std::string& k25, A25& a25, const std::string& k26, A26& a26)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20, k21, a21, k22, a22, k23, a23, k24, a24, k25, a25, k26, a26);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20, const std::string& k21, A21& a21, const std::string& k22, A22& a22, const std::string& k23, A23& a23, const std::string& k24, A24& a24, const std::string& k25, A25& a25, const std::string& k26, A26& a26, const std::string& k27, A27& a27)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20, k21, a21, k22, a22, k23, a23, k24, a24, k25, a25, k26, a26, k27, a27);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20, const std::string& k21, A21& a21, const std::string& k22, A22& a22, const std::string& k23, A23& a23, const std::string& k24, A24& a24, const std::string& k25, A25& a25, const std::string& k26, A26& a26, const std::string& k27, A27& a27, const std::string& k28, A28& a28)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20, k21, a21, k22, a22, k23, a23, k24, a24, k25, a25, k26, a26, k27, a27, k28, a28);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20, const std::string& k21, A21& a21, const std::string& k22, A22& a22, const std::string& k23, A23& a23, const std::string& k24, A24& a24, const std::string& k25, A25& a25, const std::string& k26, A26& a26, const std::string& k27, A27& a27, const std::string& k28, A28& a28, const std::string& k29, A29& a29)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20, k21, a21, k22, a22, k23, a23, k24, a24, k25, a25, k26, a26, k27, a27, k28, a28, k29, a29);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20, const std::string& k21, A21& a21, const std::string& k22, A22& a22, const std::string& k23, A23& a23, const std::string& k24, A24& a24, const std::string& k25, A25& a25, const std::string& k26, A26& a26, const std::string& k27, A27& a27, const std::string& k28, A28& a28, const std::string& k29, A29& a29, const std::string& k30, A30& a30)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20, k21, a21, k22, a22, k23, a23, k24, a24, k25, a25, k26, a26, k27, a27, k28, a28, k29, a29, k30, a30);
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31>
define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31> make_define(const std::string& k0, A0& a0, const std::string& k1, A1& a1, const std::string& k2, A2& a2, const std::string& k3, A3& a3, const std::string& k4, A4& a4, const std::string& k5, A5& a5, const std::string& k6, A6& a6, const std::string& k7, A7& a7, const std::string& k8, A8& a8, const std::string& k9, A9& a9, const std::string& k10, A10& a10, const std::string& k11, A11& a11, const std::string& k12, A12& a12, const std::string& k13, A13& a13, const std::string& k14, A14& a14, const std::string& k15, A15& a15, const std::string& k16, A16& a16, const std::string& k17, A17& a17, const std::string& k18, A18& a18, const std::string& k19, A19& a19, const std::string& k20, A20& a20, const std::string& k21, A21& a21, const std::string& k22, A22& a22, const std::string& k23, A23& a23, const std::string& k24, A24& a24, const std::string& k25, A25& a25, const std::string& k26, A26& a26, const std::string& k27, A27& a27, const std::string& k28, A28& a28, const std::string& k29, A29& a29, const std::string& k30, A30& a30, const std::string& k31, A31& a31)
{
	return define<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31>(k0, a0, k1, a1, k2, a2, k3, a3, k4, a4, k5, a5, k6, a6, k7, a7, k8, a8, k9, a9, k10, a10, k11, a11, k12, a12, k13, a13, k14, a14, k15, a15, k16, a16, k17, a17, k18, a18, k19, a19, k20, a20, k21, a21, k22, a22, k23, a23, k24, a24, k25, a25, k26, a26, k27, a27, k28, a28, k29, a29, k30, a30, k31, a31);
}


}  // namespace type
}  // namespace json


#endif 

