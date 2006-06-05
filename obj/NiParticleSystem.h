/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPARTICLESYSTEM_H_
#define _NIPARTICLESYSTEM_H_

#include "NiParticles.h"

// Forward define of referenced blocks
#include "../Ref.h"
class NiPSysModifier;

#include "../gen/obj_defines.h"

class NiParticleSystem;
typedef Ref<NiParticleSystem> NiParticleSystemRef;

/*!
 * NiParticleSystem - A particle system.
 */

class NiParticleSystem : public NI_PARTICLE_SYSTEM_PARENT {
public:
	NiParticleSystem();
	~NiParticleSystem();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual list<NiObjectRef> GetRefs() const;
	virtual const Type & GetType() const;
protected:
	NI_PARTICLE_SYSTEM_MEMBERS
};

#endif
