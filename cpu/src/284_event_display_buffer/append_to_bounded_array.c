/* @k10d append_to_bounded_array @ 0x10527f1a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void append_to_bounded_array(void *buffer,int value)

{
  if ((*(int *)((int)buffer + 0x20c) < 0x10) && (value != 0)) {
    *(int *)((int)buffer + *(int *)((int)buffer + 0x20c) * 4 + 0x214) = value;
    *(int *)((int)buffer + 0x20c) = *(int *)((int)buffer + 0x20c) + 1;
  }
  return;
}
