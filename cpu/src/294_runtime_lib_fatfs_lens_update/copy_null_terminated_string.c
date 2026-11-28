/* @k10d copy_null_terminated_string @ 0x105452ee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_null_terminated_string(void *dest,void *src)

{
  char ch;
  int offset;

  offset = 0;
  do {
    ch = *(char *)(offset + (int)src);
    *(char *)(offset + (int)dest) = ch;
    offset = offset + 1;
  } while (ch != '\0');
  return;
}
