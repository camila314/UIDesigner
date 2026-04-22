#pragma once

#define GEODE_DEFINE_EVENT_EXPORTS
#include <VirtualNodeAPI.hpp>
using namespace uidesigner;
#undef GEODE_EVENT_EXPORT_NORES
#define GEODE_EVENT_EXPORT_NORES(fnPtr, callArgs) \
	GEODE_EVENT_EXPORT_CALL_NORES(fnPtr, callArgs, GEODE_EVENT_EXPORT_ID_FOR(#fnPtr, #callArgs))
#undef MY_MOD_ID
#undef GEODE_DEFINE_EVENT_EXPORTS