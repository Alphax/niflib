/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _APSYSDATA_H_
#define _APSYSDATA_H_

#include "NiTriBasedGeomData.h"

#include "../gen/obj_defines.h"

class APSysData;
typedef Ref<APSysData> APSysDataRef;

/*!
 * APSysData - Particle system data.  Probably really NiPSysData.
 */

class APSysData : public A_P_SYS_DATA_PARENT {
public:
	APSysData();
	~APSysData();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual list<NiObjectRef> GetRefs() const;
	virtual const Type & GetType() const;
protected:
	A_P_SYS_DATA_MEMBERS
};

#endif
