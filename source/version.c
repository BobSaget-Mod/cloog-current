#include "version.h"
#include "cloog/version.h"

#define CLOOG_BITS "gmp"

const char *cloog_version(void)
{
  return "CLooG "CLOOG_HEAD" "CLOOG_BITS" bits";
}

int cloog_version_major(void)
{
  return CLOOG_VERSION_MAJOR;
}

int cloog_version_minor(void)
{
  return CLOOG_VERSION_MINOR;
}

int cloog_version_revision(void)
{
  return CLOOG_VERSION_REVISION;
}
