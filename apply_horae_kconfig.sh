#!/bin/sh
# Run from the kernel source root. Adds Kconfig + Makefile entries for OPLUS_SHELL_TEMP.
set -e
K=drivers/oplus/Kconfig
M=drivers/oplus/Makefile
[ -f "$K" ] && [ -f "$M" ] || { echo "drivers/oplus/{Kconfig,Makefile} not found - run from kernel root"; exit 1; }
if ! grep -q OPLUS_SHELL_TEMP "$K"; then
  # insert before the last 'endmenu'
  awk -v blk='config OPLUS_SHELL_TEMP\n\tbool "OPLUS shell temp driver for horae thermal daemon"\n\tdepends on THERMAL\n\tdefault y\n\thelp\n\t  This option enables the OPlus thermal shell temperature interface\n\t  located at /proc/shell-temp. It is required by the ColorOS horae\n\t  thermal daemon (/system_ext/bin/horae) to monitor front, frame,\n\t  and back skin temperature.\n\n\t  If unsure, say Y.\n' \
    '{a[NR]=$0} END{last=0; for(i=NR;i>0;i--) if(a[i]=="endmenu"){last=i;break}
     for(i=1;i<=NR;i++){ if(i==last) printf "%s\n", blk; print a[i] } }' "$K" > "$K.new" && mv "$K.new" "$K"
fi
grep -q OPLUS_SHELL_TEMP "$M" || echo 'obj-$(CONFIG_OPLUS_SHELL_TEMP) += horae_temp.o' >> "$M"
echo "done. Add CONFIG_OPLUS_SHELL_TEMP=y to your defconfig."
