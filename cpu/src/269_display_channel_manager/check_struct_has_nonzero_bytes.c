/* @k10d check_struct_has_nonzero_bytes @ 0x105070de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_struct_has_nonzero_bytes(int param_1)

{
  return *(char *)(param_1 + 0x11) != '\0' ||
         (*(char *)(param_1 + 0x10) != '\0' ||
         (*(char *)(param_1 + 7) != '\0' ||
         (*(char *)(param_1 + 6) != '\0' ||
         ((*(char *)(param_1 + 4) != '\0' ||
          (*(char *)(param_1 + 1) == '\0' || *(char *)(param_1 + 3) == '\0')) ||
         *(char *)(param_1 + 5) == '\0'))));
}
