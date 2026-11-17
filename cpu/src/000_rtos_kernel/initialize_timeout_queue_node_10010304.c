/* @k10d initialize_timeout_queue_node_10010304 @ 0x10010304
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Populates a 13-word timeout queue node structure with default values from a static
 *   template.
 * summary:
 *   The function writes a sequence of 13 16-bit values into the memory block pointed to by
 *   param_1. It copies values from a static data region (DAT_10011d36 through DAT_10011d4c)
 *   and sets the second field to 0x7fff. Given the source module is the RTOS kernel and
 *   specifically handles timeout queues, this function likely initializes a node for the
 *   kernel's timeout management system. The 0x7fff value likely represents a maximum or
 *   invalid timeout value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_timeout_queue_node_10010304(uint16_t *param_1)

{
  *param_1 = DAT_10011d4c/*ROM*/;
  param_1[1] = 0x7fff;
  param_1[2] = DAT_10011d4a/*ROM*/;
  param_1[3] = DAT_10011d48/*ROM*/;
  param_1[4] = DAT_10011d46/*ROM*/;
  param_1[5] = DAT_10011d44/*ROM*/;
  param_1[6] = DAT_10011d42/*ROM*/;
  param_1[7] = DAT_10011d40/*ROM*/;
  param_1[8] = DAT_10011d3e/*ROM*/;
  param_1[9] = DAT_10011d3c/*ROM*/;
  param_1[10] = DAT_10011d3a/*ROM*/;
  param_1[0xb] = DAT_10011d38/*ROM*/;
  param_1[0xc] = DAT_10011d36/*ROM*/;
  return 0;
}
