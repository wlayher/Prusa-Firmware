//mmu.h

#include <inttypes.h>

extern bool mmu_enabled;
extern uint8_t snmm_extruder;

extern void extr_mov(float shift, float feed_rate);
extern void change_extr(int extr);
extern int get_ext_nr();
extern void display_loading();
extern void extr_adj(int extruder);
extern void extr_unload();
extern void extr_adj_0();
extern void extr_adj_1();
extern void extr_adj_2();
extern void extr_adj_3();
extern void extr_adj_4();
extern void load_all();
extern void extr_change_0();
extern void extr_change_1();
extern void extr_change_2();
extern void extr_change_3();
extern void extr_unload_all();
extern void extr_unload_used();
extern void extr_unload_0();
extern void extr_unload_1();
extern void extr_unload_2();
extern void extr_unload_3();
extern void extr_unload_4();