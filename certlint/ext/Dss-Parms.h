/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "asn1/rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#ifndef	_Dss_Parms_H_
#define	_Dss_Parms_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dss-Parms */
typedef struct Dss_Parms {
	INTEGER_t	 p;
	INTEGER_t	 q;
	INTEGER_t	 g;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Dss_Parms_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Dss_Parms;

#ifdef __cplusplus
}
#endif

#endif	/* _Dss_Parms_H_ */
#include <asn_internal.h>
