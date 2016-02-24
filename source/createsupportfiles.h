#ifndef __CREATESUPPORTFILES_H
#define __CREATESUPPORTFILES_H

#include "enums.h"
#include "params.h"

void makedirectory(const std::string & d, const params & p);
eResult create_support_files(const std::string & supportpath, const params & p);

#endif
