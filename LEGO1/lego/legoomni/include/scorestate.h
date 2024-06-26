#ifndef SCORESTATE_H
#define SCORESTATE_H

#include "legostate.h"

// VTABLE: LEGO1 0x100d53f8
// SIZE 0x0c
class ScoreState : public LegoState {
public:
	// FUNCTION: LEGO1 0x1000de40
	inline const char* ClassName() const override // vtable+0x0c
	{
		// STRING: LEGO1 0x100f0084
		return "ScoreState";
	}

	// FUNCTION: LEGO1 0x1000de50
	inline MxBool IsA(const char* p_name) const override // vtable+0x10
	{
		return !strcmp(p_name, ScoreState::ClassName()) || LegoState::IsA(p_name);
	}

	MxBool IsSerializable() override; // vtable+0x14
	MxBool SetFlag() override;        // vtable+0x18

	inline MxBool GetTutorialFlag() { return m_playCubeTutorial; }
	inline void SetTutorialFlag(MxBool p_playCubeTutorial) { m_playCubeTutorial = p_playCubeTutorial; }

	// SYNTHETIC: LEGO1 0x1000df00
	// ScoreState::`scalar deleting destructor'

private:
	MxBool m_playCubeTutorial; // 0x08
};

#endif // SCORESTATE_H
