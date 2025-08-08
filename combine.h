//=========================================================
//	>> CNPC_Combine
//=========================================================
class CNPC_Combine :

// Add these on the "public" part of this function
// CUSTOM DYNAMIC PROP COVER FUNCTIONS
bool			DynamicPropCover();
int				CountNPCsUsingProp(CBaseEntity* pProp);

// At "private" add these:

//=========================================================
// Combine S schedules
//=========================================================
enum
SCHED_COMBINE_MOVE_TO_HIGH_COVER,
SCHED_COMBINE_MOVE_TO_LOW_COVER,

NEXT_SCHEDULE,

//=========================================================
// Combine Tasks
//=========================================================
enum
TASK_COMBINE_MOVE_TO_HIGH_COVER, // [MODIFICATION]
TASK_COMBINE_MOVE_TO_LOW_COVER, // [MODIFICATION]


NEXT_TASK

//=========================================================
// Combine Conditions
//=========================================================
enum Combine_Conds
COND_COMBINE_HAS_HIGH_COVER,
COND_COMBINE_HAS_LOW_COVER,
NEXT_CONDITION


// Dynamic Cover System - Main variables
EHANDLE m_hLowCoverProp;   // For low cover props
EHANDLE m_hHighCoverProp;  // For high cover props
float m_flNextPropSearchTime; // Timer to control search for new props
