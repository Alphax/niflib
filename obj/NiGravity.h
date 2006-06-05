/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIGRAVITY_H_
#define _NIGRAVITY_H_

#include "AParticleModifier.h"

#include "../gen/obj_defines.h"

class NiGravity;
typedef Ref<NiGravity> NiGravityRef;

/*!
 * NiGravity - A particle modifier; applies a gravitational field on the
 * particles.
 */

class NiGravity : public NI_GRAVITY_PARENT {
public:
	NiGravity();
	~NiGravity();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual list<NiObjectRef> GetRefs() const;
	virtual const Type & GetType() const;
protected:
	NI_GRAVITY_MEMBERS
};

#endif
