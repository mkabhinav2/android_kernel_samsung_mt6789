#include <linux/module.h>
#include "mtk_ged_compat.h"
unsigned long ged_dvfs_get_last_commit_stack_idx(void){ return 0; }
unsigned long ged_dvfs_get_last_commit_top_idx(void){ return 0; }
void ged_dvfs_record_soc_timer(u64 soc_timer){  }
int ged_dvfs_update_step_size(int low_step, int med_step, int high_step){ return 0; }
unsigned long ged_dvfs_write_sysram_last_commit_dual(void){ return 0; }
unsigned long ged_dvfs_write_sysram_last_commit_dual_test(int top_idx, int stack_idx){ return 0; }
unsigned long ged_dvfs_write_sysram_last_commit_idx(void){ return 0; }
unsigned long ged_dvfs_write_sysram_last_commit_idx_test(int commit_idx){ return 0; }
unsigned long ged_dvfs_write_sysram_last_commit_stack_idx(void){ return 0; }
unsigned long ged_dvfs_write_sysram_last_commit_stack_idx_test(int commit_idx){ return 0; }
unsigned long ged_dvfs_write_sysram_last_commit_top_idx(void){ return 0; }
unsigned long ged_dvfs_write_sysram_last_commit_top_idx_test(int commit_idx){ return 0; }
unsigned int ged_gpu_apo_support(void){ return 0; }
void ged_gpu_autosuspend_timeout_notify(int autosuspend_timeout_ms){  }
endif int ged_kpi_get_panel_refresh_rate(void){ return 60; }
int ged_kpi_get_target_fps(void){ return 60; }
void ged_mali_event_init(void){  }
