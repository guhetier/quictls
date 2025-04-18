/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/uierr.h>
#include <crypto/uierr.h>

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA UI_str_reasons[] = {
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_COMMON_OK_AND_CANCEL_CHARACTERS),
    "common ok and cancel characters"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_INDEX_TOO_LARGE), "index too large"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_INDEX_TOO_SMALL), "index too small"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_NO_RESULT_BUFFER), "no result buffer"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_PROCESSING_ERROR), "processing error"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_RESULT_TOO_LARGE), "result too large"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_RESULT_TOO_SMALL), "result too small"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_SYSASSIGN_ERROR), "sys$assign error"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_SYSDASSGN_ERROR), "sys$dassgn error"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_SYSQIOW_ERROR), "sys$qiow error"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_UNKNOWN_CONTROL_COMMAND),
    "unknown control command"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_UNKNOWN_TTYGET_ERRNO_VALUE),
    "unknown ttyget errno value"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_USER_DATA_DUPLICATION_UNSUPPORTED),
    "user data duplication unsupported"},
    {0, NULL}
};

#endif

int ossl_err_load_UI_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_reason_error_string(UI_str_reasons[0].error) == NULL)
        ERR_load_strings_const(UI_str_reasons);
#endif
    return 1;
}
