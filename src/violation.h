/*
    Ypsilon Scheme System
    Copyright (c) 2004-2008 Y.FUJITA / LittleWing Company Limited.
    See license.txt for terms and conditions of use
*/

#ifndef	VIOLATION_H_INCLUDED
#define	VIOLATION_H_INCLUDED

#include "core.h"
#include "object.h"

void raise_undefined_violation(VM* vm, scm_obj_t who, scm_string_t message);
void raise_lexical_violation(VM* vm, scm_obj_t who, scm_string_t message);
void raise_error(VM* vm, const char* who, const char* description, int code);
void wrong_number_of_arguments_violation(VM* vm, const char* who, int required_min, int required_max, int argc, scm_obj_t argv[]);
void wrong_number_of_arguments_violation(VM* vm, scm_obj_t proc, int required_min, int required_max, int argc, scm_obj_t argv[]);
void wrong_type_argument_violation(VM* vm, const char* who, int position, const char* expected, scm_obj_t got, int argc, scm_obj_t argv[]);
void invalid_application_violation(VM* vm, scm_obj_t value, int argc, scm_obj_t argv[]);
void invalid_object_violation(VM* vm, const char* who, const char* expected, scm_obj_t object, int argc, scm_obj_t argv[]);
void invalid_argument_violation(VM* vm, const char* who, const char* description, scm_obj_t value, int position, int argc, scm_obj_t argv[]);
void implementation_restriction_violation(VM* vm, const char* who, const char* description, scm_obj_t value, int argc, scm_obj_t argv[]);

#endif
