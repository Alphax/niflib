/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiControllerSequence.h"
#include "../gen/ControllerLink.h"
#include "NiInterpolator.h"
#include "NiObject.h"
#include "NiStringPalette.h"
#include "../gen/ControllerLink.h"
#include "NiInterpolator.h"
#include "NiObject.h"
#include "NiStringPalette.h"
#include "NiTextKeyExtraData.h"
#include "NiControllerManager.h"
#include "NiStringPalette.h"

//Definition of TYPE constant
const Type NiControllerSequence::TYPE("NiControllerSequence", &NI_CONTROLLER_SEQUENCE_PARENT::TYPE );

NiControllerSequence::NiControllerSequence() NI_CONTROLLER_SEQUENCE_CONSTRUCT {}

NiControllerSequence::~NiControllerSequence() {}

void NiControllerSequence::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_CONTROLLER_SEQUENCE_READ
}

void NiControllerSequence::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	NI_CONTROLLER_SEQUENCE_WRITE
}

string NiControllerSequence::asString( bool verbose ) const {
	NI_CONTROLLER_SEQUENCE_STRING
}

void NiControllerSequence::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	NI_CONTROLLER_SEQUENCE_FIXLINKS
}

list<NiObjectRef> NiControllerSequence::GetRefs() const {
	NI_CONTROLLER_SEQUENCE_GETREFS
}

const Type & NiControllerSequence::GetType() const {
	return TYPE;
};

NiControllerManager * NiControllerSequence::Parent() const { return NULL; }
