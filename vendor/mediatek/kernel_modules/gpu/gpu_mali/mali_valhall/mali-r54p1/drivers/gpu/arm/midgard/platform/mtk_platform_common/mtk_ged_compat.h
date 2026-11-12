#ifndef MTK_GED_COMPAT_H
#define MTK_GED_COMPAT_H
#include <linux/types.h>
unsigned long ged_dvfs_get_last_commit_stack_idx(void);
unsigned long ged_dvfs_get_last_commit_top_idx(void);
void ged_dvfs_record_soc_timer(u64 soc_timer);
int ged_dvfs_update_step_size(int low_step, int med_step, int high_step);
unsigned long ged_dvfs_write_sysram_last_commit_dual(void);
unsigned long ged_dvfs_write_sysram_last_commit_dual_test(int top_idx, int stack_idx);
unsigned long ged_dvfs_write_sysram_last_commit_idx(void);
unsigned long ged_dvfs_write_sysram_last_commit_idx_test(int commit_idx);
unsigned long ged_dvfs_write_sysram_last_commit_stack_idx(void);
unsigned long ged_dvfs_write_sysram_last_commit_stack_idx_test(int commit_idx);
unsigned long ged_dvfs_write_sysram_last_commit_top_idx(void);
unsigned long ged_dvfs_write_sysram_last_commit_top_idx_test(int commit_idx);
unsigned int ged_gpu_apo_support(void);
void ged_gpu_autosuspend_timeout_notify(int autosuspend_timeout_ms);
int ged_kpi_get_panel_refresh_rate(void);
int ged_kpi_get_target_fps(void);
void ged_mali_event_init(void);
int gpufreq_dual_commit(int gpu_oppidx, int stack_oppidx);
void gpufreq_dump_infra_status_logbuffer(char *log_buf, int *log_len, int log_size);
#ifndef GED_POWER_ON
#define GED_SLEEP 0
#define GED_POWER_ON 1
#endif
#ifndef GPU_PWR_ON
#define GPU_PWR_OFF POWER_OFF
#define GPU_PWR_ON POWER_ON
#endif
#endif
