#include "gasstationstate.h"

DECOMP_SIZE_ASSERT(GasStationState, 0x24)

// FUNCTION: LEGO1 0x10005eb0
GasStationState::GasStationState()
{
	m_unk0x18 = 0;
	m_unk0x1a = 0;
	m_unk0x1c = 0;
	m_unk0x1e = 0;
	m_unk0x20 = 0;

	undefined4* unk0x08 = m_unk0x08;
	unk0x08[0] = -1;
	unk0x08[1] = -1;
	unk0x08[2] = -1;
}

// STUB: LEGO1 0x10006300
MxResult GasStationState::Serialize(LegoFile* p_legoFile)
{
	// TODO
	return LegoState::Serialize(p_legoFile);
}

// STUB: LEGO1 0x10006430
void GasStationState::FUN_10006430(undefined4)
{
	// TODO
}

// STUB: LEGO1 0x10006490
void GasStationState::FUN_10006490()
{
	// TODO
}
