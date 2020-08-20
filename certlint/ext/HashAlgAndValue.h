/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LogotypeCertExtn"
 * 	found in "asn1/rfc3709-LogotypeCertExtn.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#ifndef	_HashAlgAndValue_H_
#define	_HashAlgAndValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AlgorithmIdentifier.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HashAlgAndValue */
typedef struct HashAlgAndValue {
	AlgorithmIdentifier_t	 hashAlg;
	OCTET_STRING_t	 hashValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HashAlgAndValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HashAlgAndValue;
extern asn_SEQUENCE_specifics_t asn_SPC_HashAlgAndValue_specs_1;
extern asn_TYPE_member_t asn_MBR_HashAlgAndValue_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HashAlgAndValue_H_ */
#include <asn_internal.h>