/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "asn1/rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#ifndef	_Curve_H_
#define	_Curve_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FieldElement.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Curve */
typedef struct Curve {
	FieldElement_t	 a;
	FieldElement_t	 b;
	BIT_STRING_t	*seed	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Curve_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Curve;
extern asn_SEQUENCE_specifics_t asn_SPC_Curve_specs_1;
extern asn_TYPE_member_t asn_MBR_Curve_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Curve_H_ */
#include <asn_internal.h>
