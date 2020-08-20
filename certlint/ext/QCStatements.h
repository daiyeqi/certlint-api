/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXqualified88"
 * 	found in "asn1/rfc3739-PKIXqualified88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER -no-gen-example`
 */

#ifndef	_QCStatements_H_
#define	_QCStatements_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QCStatement;

/* QCStatements */
typedef struct QCStatements {
	A_SEQUENCE_OF(struct QCStatement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QCStatements_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QCStatements;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "QCStatement.h"

#endif	/* _QCStatements_H_ */
#include <asn_internal.h>