#pragma once
#include <map>
#include <string>
#include <sstream>
#include "Config.h"

#ifdef __LP64__
#define S_ADDR_DIFF(start, end)	(UINT32)((end)-(start))
#else
#define	S_ADDR_DIFF(start, end)	((end)-(start))
#endif

#define ABS_ADDR_DIFF(addr1, addr2)		(addr1 > addr2) ? (addr1)-(addr2) : (addr2)-(addr1);

template<class K, class V>
V& map_at(std::map<K, V> &map, K &k) {
	// TODO handle case map.find(k) == map.end()
	return map[k];
}

template <class T> // thanks https://stackoverflow.com/a/947663
std::string to_string(const T& t)
{
	std::stringstream ss;
	ss << t;
	return ss.str();
}