/*
 * Copyright 2020-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <crypto/ec.h>
#include <internal/der.h>

/* Well known OIDs precompiled */

/*
 * sm2-with-SM3 OBJECT IDENTIFIER ::= { sm-scheme 501 }
 */
#define DER_OID_V_sm2_with_SM3 DER_P_OBJECT, 8, 0x2A, 0x81, 0x1C, 0xCF, 0x55, 0x01, 0x83, 0x75
#define DER_OID_SZ_sm2_with_SM3 10
extern const unsigned char ossl_der_oid_sm2_with_SM3[DER_OID_SZ_sm2_with_SM3];

/*
 * curveSM2 OBJECT IDENTIFIER ::= { sm-scheme 301 }
 */
#define DER_OID_V_curveSM2 DER_P_OBJECT, 8, 0x2A, 0x81, 0x1C, 0xCF, 0x55, 0x01, 0x82, 0x2D
#define DER_OID_SZ_curveSM2 10
extern const unsigned char ossl_der_oid_curveSM2[DER_OID_SZ_curveSM2];


/* Subject Public Key Info */
int ossl_DER_w_algorithmIdentifier_SM2(WPACKET *pkt, int cont, EC_KEY *ec);
/* Signature */
int ossl_DER_w_algorithmIdentifier_SM2_with_MD(WPACKET *pkt, int cont,
                                               EC_KEY *ec, int mdnid);
