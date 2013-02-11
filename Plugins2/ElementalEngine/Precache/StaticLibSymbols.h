//Autogenerated Static Lib File:
//Generated on: 03/23/09 14:24:46

#ifndef INCLUDE_SYMBOLS_PRECACHE
#define INCLUDE_SYMBOLS_PRECACHE
#endif	//#ifndef INCLUDE_SYMBOLS_PRECACHE
#ifdef _LIB

namespace ElementalEngine {
struct INITDLLINFO;
class CRegisterComponent;
class CRegisterMessage;
}

using namespace ElementalEngine;


extern void *PRECACHE_LIBEXTERNS[];
//Singleton externs
extern "C" CRegisterComponent CPrecacheManagerRO;
//Component externs
extern "C" CRegisterComponent CPrecacheManagerRO;
extern "C" CRegisterComponent CPrecacheObjectRO;
//Message externs
extern "C" CRegisterMessage Start_CPrecacheManagerRM;
extern "C" CRegisterMessage Stop_CPrecacheManagerRM;
extern "C" CRegisterMessage LoadFileByExtension_CPrecacheManagerRM;
extern "C" CRegisterMessage RegisterLoadSaveComponent_CPrecacheManagerRM;
extern "C" CRegisterMessage AddPrecache_CPrecacheManagerRM;
extern "C" CRegisterMessage RemovePrecache_CPrecacheManagerRM;
extern "C" CRegisterMessage CommitPrecache_CPrecacheManagerRM;

#endif	//#ifdef _LIB