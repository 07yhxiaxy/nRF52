/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_I2S_H
#define Z_INCLUDE_SYSCALLS_I2S_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_i2s_configure(const struct device * dev, enum i2s_dir dir, const struct i2s_config * cfg);

__pinned_func
static inline int i2s_configure(const struct device * dev, enum i2s_dir dir, const struct i2s_config * cfg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; enum i2s_dir val; } parm1 = { .val = dir };
		union { uintptr_t x; const struct i2s_config * val; } parm2 = { .val = cfg };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_I2S_CONFIGURE);
	}
#endif
	compiler_barrier();
	return z_impl_i2s_configure(dev, dir, cfg);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define i2s_configure(dev, dir, cfg) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_I2S_CONFIGURE, i2s_configure, dev, dir, cfg); 	syscall__retval = i2s_configure(dev, dir, cfg); 	sys_port_trace_syscall_exit(K_SYSCALL_I2S_CONFIGURE, i2s_configure, dev, dir, cfg, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_i2s_buf_read(const struct device * dev, void * buf, size_t * size);

__pinned_func
static inline int i2s_buf_read(const struct device * dev, void * buf, size_t * size)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; void * val; } parm1 = { .val = buf };
		union { uintptr_t x; size_t * val; } parm2 = { .val = size };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_I2S_BUF_READ);
	}
#endif
	compiler_barrier();
	return z_impl_i2s_buf_read(dev, buf, size);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define i2s_buf_read(dev, buf, size) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_I2S_BUF_READ, i2s_buf_read, dev, buf, size); 	syscall__retval = i2s_buf_read(dev, buf, size); 	sys_port_trace_syscall_exit(K_SYSCALL_I2S_BUF_READ, i2s_buf_read, dev, buf, size, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_i2s_buf_write(const struct device * dev, void * buf, size_t size);

__pinned_func
static inline int i2s_buf_write(const struct device * dev, void * buf, size_t size)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; void * val; } parm1 = { .val = buf };
		union { uintptr_t x; size_t val; } parm2 = { .val = size };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_I2S_BUF_WRITE);
	}
#endif
	compiler_barrier();
	return z_impl_i2s_buf_write(dev, buf, size);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define i2s_buf_write(dev, buf, size) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_I2S_BUF_WRITE, i2s_buf_write, dev, buf, size); 	syscall__retval = i2s_buf_write(dev, buf, size); 	sys_port_trace_syscall_exit(K_SYSCALL_I2S_BUF_WRITE, i2s_buf_write, dev, buf, size, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_i2s_trigger(const struct device * dev, enum i2s_dir dir, enum i2s_trigger_cmd cmd);

__pinned_func
static inline int i2s_trigger(const struct device * dev, enum i2s_dir dir, enum i2s_trigger_cmd cmd)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; enum i2s_dir val; } parm1 = { .val = dir };
		union { uintptr_t x; enum i2s_trigger_cmd val; } parm2 = { .val = cmd };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_I2S_TRIGGER);
	}
#endif
	compiler_barrier();
	return z_impl_i2s_trigger(dev, dir, cmd);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define i2s_trigger(dev, dir, cmd) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_I2S_TRIGGER, i2s_trigger, dev, dir, cmd); 	syscall__retval = i2s_trigger(dev, dir, cmd); 	sys_port_trace_syscall_exit(K_SYSCALL_I2S_TRIGGER, i2s_trigger, dev, dir, cmd, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
