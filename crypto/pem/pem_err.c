/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/pem.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_PEM,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_PEM,0,reason)

static ERR_STRING_DATA PEM_str_functs[] = {
    {ERR_FUNC(PEM_F_B2I_DSS), "b2i_dss"},
    {ERR_FUNC(PEM_F_B2I_PVK_BIO), "b2i_PVK_bio"},
    {ERR_FUNC(PEM_F_B2I_RSA), "b2i_rsa"},
    {ERR_FUNC(PEM_F_CHECK_BITLEN_DSA), "check_bitlen_dsa"},
    {ERR_FUNC(PEM_F_CHECK_BITLEN_RSA), "check_bitlen_rsa"},
    {ERR_FUNC(PEM_F_D2I_PKCS8PRIVATEKEY_BIO), "d2i_PKCS8PrivateKey_bio"},
    {ERR_FUNC(PEM_F_D2I_PKCS8PRIVATEKEY_FP), "d2i_PKCS8PrivateKey_fp"},
    {ERR_FUNC(PEM_F_DO_B2I), "do_b2i"},
    {ERR_FUNC(PEM_F_DO_B2I_BIO), "do_b2i_bio"},
    {ERR_FUNC(PEM_F_DO_BLOB_HEADER), "do_blob_header"},
    {ERR_FUNC(PEM_F_DO_PK8PKEY), "do_pk8pkey"},
    {ERR_FUNC(PEM_F_DO_PK8PKEY_FP), "do_pk8pkey_fp"},
    {ERR_FUNC(PEM_F_DO_PVK_BODY), "do_PVK_body"},
    {ERR_FUNC(PEM_F_DO_PVK_HEADER), "do_PVK_header"},
    {ERR_FUNC(PEM_F_GET_HEADER_AND_DATA), "get_header_and_data"},
    {ERR_FUNC(PEM_F_GET_NAME), "get_name"},
    {ERR_FUNC(PEM_F_I2B_PVK), "i2b_PVK"},
    {ERR_FUNC(PEM_F_I2B_PVK_BIO), "i2b_PVK_bio"},
    {ERR_FUNC(PEM_F_LOAD_IV), "load_iv"},
    {ERR_FUNC(PEM_F_PEM_ASN1_READ), "PEM_ASN1_read"},
    {ERR_FUNC(PEM_F_PEM_ASN1_READ_BIO), "PEM_ASN1_read_bio"},
    {ERR_FUNC(PEM_F_PEM_ASN1_WRITE), "PEM_ASN1_write"},
    {ERR_FUNC(PEM_F_PEM_ASN1_WRITE_BIO), "PEM_ASN1_write_bio"},
    {ERR_FUNC(PEM_F_PEM_DEF_CALLBACK), "PEM_def_callback"},
    {ERR_FUNC(PEM_F_PEM_DO_HEADER), "PEM_do_header"},
    {ERR_FUNC(PEM_F_PEM_GET_EVP_CIPHER_INFO), "PEM_get_EVP_CIPHER_INFO"},
    {ERR_FUNC(PEM_F_PEM_READ), "PEM_read"},
    {ERR_FUNC(PEM_F_PEM_READ_BIO), "PEM_read_bio"},
    {ERR_FUNC(PEM_F_PEM_READ_BIO_DHPARAMS), "PEM_read_bio_DHparams"},
    {ERR_FUNC(PEM_F_PEM_READ_BIO_FLAGS), "PEM_read_bio_flags"},
    {ERR_FUNC(PEM_F_PEM_READ_BIO_PARAMETERS), "PEM_read_bio_Parameters"},
    {ERR_FUNC(PEM_F_PEM_READ_BIO_PRIVATEKEY), "PEM_read_bio_PrivateKey"},
    {ERR_FUNC(PEM_F_PEM_READ_DHPARAMS), "PEM_read_DHparams"},
    {ERR_FUNC(PEM_F_PEM_READ_PRIVATEKEY), "PEM_read_PrivateKey"},
    {ERR_FUNC(PEM_F_PEM_SIGNFINAL), "PEM_SignFinal"},
    {ERR_FUNC(PEM_F_PEM_WRITE), "PEM_write"},
    {ERR_FUNC(PEM_F_PEM_WRITE_BIO), "PEM_write_bio"},
    {ERR_FUNC(PEM_F_PEM_WRITE_PRIVATEKEY), "PEM_write_PrivateKey"},
    {ERR_FUNC(PEM_F_PEM_X509_INFO_READ), "PEM_X509_INFO_read"},
    {ERR_FUNC(PEM_F_PEM_X509_INFO_READ_BIO), "PEM_X509_INFO_read_bio"},
    {ERR_FUNC(PEM_F_PEM_X509_INFO_WRITE_BIO), "PEM_X509_INFO_write_bio"},
    {0, NULL}
};

static ERR_STRING_DATA PEM_str_reasons[] = {
    {ERR_REASON(PEM_R_BAD_BASE64_DECODE), "bad base64 decode"},
    {ERR_REASON(PEM_R_BAD_DECRYPT), "bad decrypt"},
    {ERR_REASON(PEM_R_BAD_END_LINE), "bad end line"},
    {ERR_REASON(PEM_R_BAD_IV_CHARS), "bad iv chars"},
    {ERR_REASON(PEM_R_BAD_MAGIC_NUMBER), "bad magic number"},
    {ERR_REASON(PEM_R_BAD_PASSWORD_READ), "bad password read"},
    {ERR_REASON(PEM_R_BAD_VERSION_NUMBER), "bad version number"},
    {ERR_REASON(PEM_R_BIO_WRITE_FAILURE), "bio write failure"},
    {ERR_REASON(PEM_R_CIPHER_IS_NULL), "cipher is null"},
    {ERR_REASON(PEM_R_ERROR_CONVERTING_PRIVATE_KEY),
     "error converting private key"},
    {ERR_REASON(PEM_R_EXPECTING_PRIVATE_KEY_BLOB),
     "expecting private key blob"},
    {ERR_REASON(PEM_R_EXPECTING_PUBLIC_KEY_BLOB),
     "expecting public key blob"},
    {ERR_REASON(PEM_R_HEADER_TOO_LONG), "header too long"},
    {ERR_REASON(PEM_R_INCONSISTENT_HEADER), "inconsistent header"},
    {ERR_REASON(PEM_R_KEYBLOB_HEADER_PARSE_ERROR),
     "keyblob header parse error"},
    {ERR_REASON(PEM_R_KEYBLOB_TOO_SHORT), "keyblob too short"},
    {ERR_REASON(PEM_R_MISSING_DEK_IV), "missing dek iv"},
    {ERR_REASON(PEM_R_NOT_DEK_INFO), "not dek info"},
    {ERR_REASON(PEM_R_NOT_ENCRYPTED), "not encrypted"},
    {ERR_REASON(PEM_R_NOT_PROC_TYPE), "not proc type"},
    {ERR_REASON(PEM_R_NO_START_LINE), "no start line"},
    {ERR_REASON(PEM_R_PROBLEMS_GETTING_PASSWORD),
     "problems getting password"},
    {ERR_REASON(PEM_R_PVK_DATA_TOO_SHORT), "pvk data too short"},
    {ERR_REASON(PEM_R_PVK_TOO_SHORT), "pvk too short"},
    {ERR_REASON(PEM_R_READ_KEY), "read key"},
    {ERR_REASON(PEM_R_SHORT_HEADER), "short header"},
    {ERR_REASON(PEM_R_UNEXPECTED_DEK_IV), "unexpected dek iv"},
    {ERR_REASON(PEM_R_UNSUPPORTED_CIPHER), "unsupported cipher"},
    {ERR_REASON(PEM_R_UNSUPPORTED_ENCRYPTION), "unsupported encryption"},
    {ERR_REASON(PEM_R_UNSUPPORTED_KEY_COMPONENTS),
     "unsupported key components"},
    {0, NULL}
};

#endif

int ERR_load_PEM_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(PEM_str_functs[0].error) == NULL) {
        ERR_load_strings(0, PEM_str_functs);
        ERR_load_strings(0, PEM_str_reasons);
    }
#endif
    return 1;
}
