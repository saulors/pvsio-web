#ifndef __c9_experiment1_model_new_h__
#define __c9_experiment1_model_new_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  uint32_T c9_event1EventCounter;
  uint32_T c9_event2EventCounter;
  uint32_T c9_event3EventCounter;
  int32_T c9_sfEvent;
  uint8_T c9_tp_state;
  boolean_T c9_isStable;
  uint8_T c9_is_active_c9_experiment1_model_new;
  uint8_T c9_is_c9_experiment1_model_new;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c9_doSetSimStateSideEffects;
  const mxArray *c9_setSimStateSideEffectsInfo;
} SFc9_experiment1_model_newInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c9_experiment1_model_new_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c9_experiment1_model_new_get_check_sum(mxArray *plhs[]);
extern void c9_experiment1_model_new_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif