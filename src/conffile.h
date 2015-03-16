#ifndef _CONFFILE_H
#define _CONFFILE_H

#include "cntr.h"
#include "strlist.h"

extern int conf_get_pair(char buf[], char **field, char **value);
extern int conf_parse_incexcs_buf(struct conf **confs, const char *incexc);
extern int conf_parse_incexcs_path(struct conf **confs, const char *path);

extern int conf_load_clientconfdir(struct conf **globalcs,
	struct conf **ccconfs);
extern int conf_load_global_only(const char *path, struct conf **globalcs);

extern const char *confs_get_lockfile(struct conf **confs);

#ifdef UTEST
extern int conf_load_lines_from_buf(const char *buf, struct conf **c);
extern int conf_finalise(struct conf **c);
extern int conf_load_global_only_buf(const char *path, struct conf **globalcs);
extern int conf_load_overrides_buf(struct conf **globalcs,
	struct conf **cconfs, const char *buf);
#endif

#endif
